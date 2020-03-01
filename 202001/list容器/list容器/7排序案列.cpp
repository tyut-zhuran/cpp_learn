# include <iostream>
using namespace std;
# include <string>
# include <list>


class Person
{
public:
	Person(string name,int age,int height)
	{
		this->m_Name = name;
		this->m_Height = height;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
	int m_Height;
};

void printPersonList(const list<Person> &l)
{
	for (list<Person>::const_iterator it = l.begin(); it != l.end(); it++)
	{
		cout << it->m_Name << " " << it->m_Age << " " << it->m_Height << endl;
	}
}
bool comparePerson(Person &p1,Person &p2)
{
	if (p1.m_Age == p2.m_Age)
	{
		return p1.m_Height > p2.m_Height;//年龄相同时，按照身高降序排列
	}
	//按年龄升序
	return p1.m_Age < p2.m_Age;
}
void test01()
{
	list<Person>L;
	Person p1("A",35, 175);
	Person p2("B", 35, 176);
	Person p3("C", 25, 175);
	Person p4("D", 35, 174);
	Person p5("E", 36, 175);
	Person p6("F",32,189);


	L.push_back(p1);
	L.push_back(p2);
	L.push_back(p3);
	L.push_back(p4);
	L.push_back(p5);
	L.push_back(p6);

	printPersonList(L);



	cout << "排序后：" << endl;
	L.sort(comparePerson);
	printPersonList(L);
}
int main()
{
	test01();
	system("pause");
	return 0;
}