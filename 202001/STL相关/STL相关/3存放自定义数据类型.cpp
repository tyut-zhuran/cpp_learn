//# include <iostream>
//using namespace std;
//# include <string>
//# include <vector>
//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	string name;
//	int age;
//};
//
//void test01()
//{
//	vector<Person> v;
//	Person p1("zhruan",23);
//	Person p2("zhruan", 24);
//	Person p3("zhruan", 25);
//	Person p4("zhruan", 26);
//
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//
//	for (vector<Person>::iterator itBegin = v.begin(); itBegin != v.end(); itBegin++)
//	{
//		cout << (*itBegin).name << endl;
//		cout << (*itBegin).age << endl;
//	}
//}
//
//void test02()
//{
//	vector<Person*> v;
//	Person p1("zhruan", 23);
//	Person p2("zhruan", 24);
//	Person p3("zhruan", 25);
//	Person p4("zhruan", 26);
//
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << (*it)->name << endl;
//		cout << (*it)->age << endl;
//	}
//}
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}
