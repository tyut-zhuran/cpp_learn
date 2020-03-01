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
	cout << "**1����ʼ����**" << endl;
	cout << "**2���鿴��¼**" << endl;
	cout << "**3����ռ�¼**" << endl;
	cout << "**0���˳�ϵͳ**" << endl;
	cout << "***************" << endl;
	cout << endl;
}



void SpeechManager::exitSystem()
{
	cout << "��ӭ�´�ʹ�ã�" << endl;
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
		string name = "ѡ��";
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
	

	//��ǩ
	this->speechDraw();
	//��һ�ֱ���
	this->speechContest();
	//��ʾ�������
	this->showScore();

	this->m_Index++;	
	//�ڶ��ֱ�����ʼ
	

	//��ǩ
	this->speechDraw();
	//����
	this->speechContest();
	//��ʾ���ս��
	this->showScore();
	//����������ļ�
	this->saveRecord();
	cout << "���������ϣ�" << endl;
	system("pause");
	system("cls");

	this->initSpeech();
	this->createSpeaker();
	this->loadRecord();



	
}

void SpeechManager::speechDraw()
{
	cout << "��*" << this->m_Index << "*��"<<endl;
	cout << "��ǩ�����˳�����£�" << endl;
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
	cout << "��*" << this->m_Index << "*����ʽ��ʼ" << endl;
	vector<int> v_Src;//����ѡ������ 
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

	//��������ѡ�ֽ��д��
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++)
	{

		//��ί���
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
		
		//cout << "��ţ�" << *it << " ƽ���֣�" << avg << endl;

		//��ƽ���ַ���map������
		this->m_Speaker[*it].m_score[this->m_Index-1] = avg; 

		groupMap.insert(make_pair(avg,*it));//key�ǵ÷֣�value�Ǳ��
		num += 1;

		//ÿ6����ȡ��ǰ����
		if (num % 6 == 0)
		{
			cout << "��" << num / 6 << "������:" << endl;
			for (multimap<double, int>::iterator it = groupMap.begin(); it != groupMap.end(); it++)
			{
				cout << "��ţ�" << it->second << "  ������" << this->m_Speaker[it->second].m_name << "  �ɼ���" << this->m_Speaker[it->second].m_score[this->m_Index - 1] << endl;
			}

			//ȡ��ǰ����
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
	cout << " ----------��" << this->m_Index << "�ֽ���--------" << endl;
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

	cout << "����������£�" << endl;
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << "��ţ�" << *it << "  ������" << this->m_Speaker[*it].m_name << "  �÷�" << this->m_Speaker[*it].m_score[this->m_Index - 1];
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
	cout << "�ɼ��ѱ���" << endl;
	this->fileIsEmpty = false;
}





void SpeechManager::loadRecord()
{
	ifstream ifs;
	ifs.open("speech.csv",ios::in);
	if (!ifs.is_open())
	{
		this->fileIsEmpty = true;
		cout << "�ļ���ʧ�ܣ�" << endl;
		ifs.close();
		return;
	}

	//���ļ�Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�ļ�Ϊ�գ�" << endl;
		this->fileIsEmpty = true;
		ifs.close();
		return;
	}

	//�ļ���Ϊ��
	this->fileIsEmpty = false;
	ifs.putback(ch);
	string data;
	int index=1;
	while (ifs >> data)
	{
		//cout << data << endl;
		int pos = -1;//���ҡ�����λ��
		int start = 0;
		vector<string> v;
		while (true)
		{
			pos = data.find(',',start);
			if (pos == -1)
			{
				break;//δ�ҵ�ֱ���˳�
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
		cout << it->first<<" �ھ���ţ�" << it->second[0] << "  �ɼ���" << it->second[1] << endl;
	}*/
}

void SpeechManager::showRecord()
{
	//for (unsigned int i = 0; i < (this->m_Record).size(); i++)
	//{
	//	/*cout << i + 1 << "��" << "�ھ���ţ�" << this->m_Record[i][0] << "�÷֣�" << this->m_Record[i][1]
	//		<< "�Ǿ���ţ�" << this->m_Record[i][2] << "�÷֣�" << this->m_Record[i][3]
	//		<< "������ţ�" << this->m_Record[i][4] << "�÷֣�" << this->m_Record[i][5] << endl;*/
	//	cout << i + 1 << " �� " << this->m_Record[i][0] << " " << this->m_Record[i][1] << " " << endl;
	//}
	if (this->fileIsEmpty)
	{
		cout << "�ļ�Ϊ�ջ򲻴��ڣ�" << endl;
	}
	else
	{ 
		for (map<int, vector<string>>::iterator it = this->m_Record.begin(); it != this->m_Record.end(); it++)
		{
			cout << "��" << it->first << "��  " << "�ھ���" << it->second[0] << "  �÷֣�" << it->second[1];
			cout << "�Ǿ���" << it->second[2] << "  �÷֣�" << it->second[3];
			cout << "������" << it->second[4] << "  �÷֣�" << it->second[5] << endl;
		}
	}
	
	system("pause");
	system("cls");
}

void SpeechManager::clearRecord()
{
	cout << "ȷ����գ�(1��ȷ����2���˳�)" << endl;
	int select = 0;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs;
		ofs.open("speech.csv",ios::trunc);

		this->initSpeech();
		this->createSpeaker();
		this->loadRecord();
		cout << "��ճɹ���" << endl;
	}
	system("pause");
	system("cls");
}


