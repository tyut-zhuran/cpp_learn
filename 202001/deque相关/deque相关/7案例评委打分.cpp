# include <iostream>
using namespace std;

# include <vector>
# include <deque>
# include <algorithm>
#include <string>
# include <ctime>


class Person
{
public:
	Person(string name, int score)
	{
		this->m_Name = name;
		this->m_Score = score;
	}

	string m_Name;
	int m_Score;
};

void creatPerson(vector<Person> &v)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < 5; i++)
	{
		string name = "选手";
		name += nameSeed[i];
		
		int score = 0;
		Person p(name,score);
		v.push_back(p);
	}
}

void setScore(vector<Person> &v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		deque<int> d;
		for (int i = 0; i < 10; i++)//10位评委个数
		{
			int score = rand() % 41 + 60;
			d.push_back(score);
		}
		sort(d.begin(),d.end());

		cout << it->m_Name << ":"<< endl;
		for (deque<int>::iterator it_d = d.begin(); it_d != d.end(); it_d++)
		{
			cout << *it_d << " ";
		}
		cout << endl;
		//去除最高分和最低分
		d.pop_back();
		d.pop_front();

		//取平均分
		int sum = 0;
		for (deque<int>::iterator it_d = d.begin(); it_d != d.end(); it_d++)
		{
			sum += *it_d;
		}
		int avg = sum / d.size();
		it->m_Score = avg;


	}
}
void showScore(vector<Person> &v)
{
	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << it->m_Name << ":" << it->m_Score << endl;
	}
}

void test01()
{
	vector<Person> v;
	creatPerson(v);
	setScore(v);
	showScore(v);
	cout << endl;
}


int main()
{
	srand((unsigned int)time(NULL));
	test01();
	system("pause");
	return 0;
}




