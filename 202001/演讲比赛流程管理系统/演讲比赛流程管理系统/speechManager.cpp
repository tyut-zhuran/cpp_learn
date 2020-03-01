# include "speechManager.h"
# include <algorithm>
# include <deque>
# include <functional>
# include <numeric>
# include <string>
# include <map>
# include <fstream>

SpeechManager::SpeechManager()
{
	this->initSpeech();
	this->createSpeaker();
	this->loadRecord();
}

SpeechManager::~SpeechManager()
{

}




void SpeechManager::showMenu()
{
	cout << "***************" << endl;
	cout << "**1、开始比赛**" << endl;
	cout << "**2、查看记录**" << endl;
	cout << "**3、清空记录**" << endl;
	cout << "**0、退出系统**" << endl;
	cout << "***************" << endl;
	cout << endl;
}



void SpeechManager::exitSystem()
{
	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}

void SpeechManager::initSpeech()
{
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();
	this->m_Index = 1;
	this->m_Record.clear();
}

void SpeechManager::createSpeaker()
{
	Speaker sp;
	string nameSeed = "ABCDEFGHIJKL";
	for (int i = 0; i < 12; i++)
	{
		string name = "选手";
		name += nameSeed[i];
		sp.m_name = name;
		for (int j = 0; j < 2; j++)
		{
			sp.m_score[j] = 0;
		}
		this->v1.push_back(i+1001);
		this->m_Speaker.insert(make_pair(i+1001,sp));
	}
}

void SpeechManager::startSpeech()
{
	

	//抽签
	this->speechDraw();
	//第一轮比赛
	this->speechContest();
	//显示晋级结果
	this->showScore();

	this->m_Index++;	
	//第二轮比赛开始
	

	//抽签
	this->speechDraw();
	//比赛
	this->speechContest();
	//显示最终结果
	this->showScore();
	//保存分数到文件
	this->saveRecord();
	cout << "本届比赛完毕！" << endl;
	system("pause");
	system("cls");

	this->initSpeech();
	this->createSpeaker();
	this->loadRecord();



	
}

void SpeechManager::speechDraw()
{
	cout << "第*" << this->m_Index << "*轮"<<endl;
	cout << "抽签后比赛顺序如下：" << endl;
	if (this->m_Index == 1)
	{
		random_shuffle(v1.begin(),v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
		{
			cout << *it << " ";
		}
		cout << "-------" << endl;
	}
	else
	{
		random_shuffle(v2.begin(),v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
		{
			cout << *it << " ";
		}
		cout << "-------" << endl;
	}

}
void SpeechManager::speechContest()
{
	cout << "第*" << this->m_Index << "*轮正式开始" << endl;
	vector<int> v_Src;//比赛选手容器 
	multimap<double, int, greater<double>> groupMap;
	int num = 0;
	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}

	//遍历所有选手进行打分
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{

		//评委打分
		deque<double> d;
		for (int i = 0; i<10; i++)
		{
			double score = (600 + rand() % 401) / 10.f;
			//cout << score << " ";
			d.push_back(score);
		}
		//cout << endl;
		sort(v_Src.begin(), v_Src.end(),greater<double>());
		d.pop_back();
		d.pop_front();
		double sum = accumulate(d.begin(),d.end(),0);
		double avg = sum / (double)d.size();
		
		//cout << "编号：" << *it << " 平均分：" << avg << endl;

		//将平均分放入map容器中
		this->m_Speaker[*it].m_score[this->m_Index-1] = avg; 

		groupMap.insert(make_pair(avg,*it));//key是得分，value是编号
		num += 1;

		//每6个人取出前三人
		if (num % 6 == 0)
		{
			cout << "第" << num / 6 << "组名次:" << endl;
			for (multimap<double, int>::iterator it = groupMap.begin(); it != groupMap.end(); it++)
			{
				cout << "编号：" << it->second << "  姓名：" << this->m_Speaker[it->second].m_name << "  成绩：" << this->m_Speaker[it->second].m_score[this->m_Index - 1] << endl;
			}

			//取走前三名
			int count = 0;
			for (multimap<double, int>::iterator it = groupMap.begin(); it != groupMap.end() && count <3; it++,count++)
			{
				if (this->m_Index == 1)
				{
					this->v2.push_back(it->second);
				}
				else
				{
					this->vVictory.push_back(it->second);
				}
			}

			groupMap.clear();
		}
	}
	cout << " ----------第" << this->m_Index << "轮结束--------" << endl;
}
void SpeechManager::showScore()
{
	vector<int>v;
	if (this->m_Index == 1)
	{
		v = v2;
	}
	else
	{
		v = vVictory;
	}

	cout << "晋级结果如下：" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "编号：" << *it << "  姓名：" << this->m_Speaker[*it].m_name << "  得分" << this->m_Speaker[*it].m_score[this->m_Index - 1];
		cout << endl;
	}
	system("pause");
	system("cls");
	this->showMenu();
}

void SpeechManager::saveRecord()
{
	ofstream ofs;
	ofs.open("speech.csv",ios::out | ios::app);

	for (vector<int>::iterator it = this->vVictory.begin(); it != this->vVictory.end(); it++)
	{
		ofs << *it << "," << this->m_Speaker[*it].m_score[1] << ",";
	}
	ofs << endl;

	ofs.close();
	cout << "成绩已保存" << endl;
	this->fileIsEmpty = false;
}





void SpeechManager::loadRecord()
{
	ifstream ifs;
	ifs.open("speech.csv",ios::in);
	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		cout << "文件打开失败！" << endl;
		ifs.close();
		return;
	}

	//若文件为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "文件为空！" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//文件不为空
	this->fileIsEmpty = false;
	ifs.putback(ch);
	string data;
	int index=1;
	while (ifs >> data)
	{
		//cout << data << endl;
		int pos = -1;//查找‘，’位置
		int start = 0;
		vector<string> v;
		while (true)
		{
			pos = data.find(',',start);
			if (pos == -1)
			{
				break;//未找到直接退出
			}
			string temp = data.substr(start,pos-start);
			v.push_back(temp);
			start = pos + 1;
		}
		this->m_Record.insert(make_pair(index,v));
		index++;
	}
	ifs.close();

	/*for (map<int, vector<string>>::iterator it = this->m_Record.begin(); it != this->m_Record.end(); it++) 
	{
		cout << it->first<<" 冠军编号：" << it->second[0] << "  成绩：" << it->second[1] << endl;
	}*/
}

void SpeechManager::showRecord()
{
	//for (unsigned int i = 0; i < (this->m_Record).size(); i++)
	//{
	//	/*cout << i + 1 << "、" << "冠军编号：" << this->m_Record[i][0] << "得分：" << this->m_Record[i][1]
	//		<< "亚军编号：" << this->m_Record[i][2] << "得分：" << this->m_Record[i][3]
	//		<< "季军编号：" << this->m_Record[i][4] << "得分：" << this->m_Record[i][5] << endl;*/
	//	cout << i + 1 << " 届 " << this->m_Record[i][0] << " " << this->m_Record[i][1] << " " << endl;
	//}
	if (this->fileIsEmpty)
	{
		cout << "文件为空或不存在！" << endl;
	}
	else
	{ 
		for (map<int, vector<string>>::iterator it = this->m_Record.begin(); it != this->m_Record.end(); it++)
		{
			cout << "第" << it->first << "届  " << "冠军：" << it->second[0] << "  得分：" << it->second[1];
			cout << "亚军：" << it->second[2] << "  得分：" << it->second[3];
			cout << "季军：" << it->second[4] << "  得分：" << it->second[5] << endl;
		}
	}
	
	system("pause");
	system("cls");
}

void SpeechManager::clearRecord()
{
	cout << "确定清空？(1、确定，2、退出)" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs;
		ofs.open("speech.csv",ios::trunc);

		this->initSpeech();
		this->createSpeaker();
		this->loadRecord();
		cout << "清空成功！" << endl;
	}
	system("pause");
	system("cls");
}


