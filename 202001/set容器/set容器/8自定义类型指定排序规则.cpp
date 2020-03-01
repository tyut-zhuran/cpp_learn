# include <iostream>
using namespace std;
# include <string>
#include <set>
class Person
{
public :
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	string m_Name;
	int m_Age;
};
class comparePerson
{
public:
	bool operator() (const Person& p1, const Person& p2)
	{
		return p1.m_Age < p2.m_Age;
	}
};



void test01()
{
	set<Person,comparePerson> s1;
	Person p1("A",23);
	Person p2("B", 21);
	Person p3("C", 34);
	Person p4("D", 54);

	s1.insert(p1);
	s1.insert(p2);
	s1.insert(p3);
	s1.insert(p4);

	for (set<Person,comparePerson>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << it->m_Name << "  " << it->m_Age << endl;
	}

}

int main()
{
	test01();
	system("pause");
	return 0;
}

