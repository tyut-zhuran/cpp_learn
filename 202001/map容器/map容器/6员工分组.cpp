# include <iostream>
using namespace std;
# include <string>
# include <vector>
# include <map>
# include <ctime>
class Worker
{
public:

	string m_Name;
	int	m_Salary;
};


void creatWorker(vector<Worker> &v)
{
	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++)
	{
		Worker worker;
		worker.m_Name = "员工";
		worker.m_Name += nameSeed[i];
		worker.m_Salary = rand() % 10000 + 10000; 

		v.push_back(worker);
	}
}
void setGroup(vector<Worker>&v, multimap<int, Worker> &m)
{
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		m.insert(pair<int,Worker>(rand()%3,*it));
	}
}


void showWorkerByGroup(multimap<int, Worker>&m)
{
	//部门id分开显示
	for (int i = 0; i < 3; i++)
	{
		cout << "部门id:" <<i<< endl;
		multimap<int, Worker>::iterator pos = m.find(i);
		int count = m.count(i);//统计具体人数
		for (int index =0; pos != m.end()&&index<count; index++,pos++)
		{
			cout << pos->first << " " << pos->second.m_Name<<":"<<pos->second.m_Salary << endl;

		}

	}
	
}
void test01()
{
	vector<Worker> vWorker;
	creatWorker(vWorker);
	/*for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << it->m_Name << " " << it->m_Salary << endl;
	}*/
	multimap<int, Worker> mWorker;
	setGroup(vWorker,mWorker);
	showWorkerByGroup(mWorker);
}
int main()
{

	srand((unsigned int)time(NULL));
	test01();
	system("pause");
	return 0;
}


