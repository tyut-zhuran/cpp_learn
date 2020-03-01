//# include <iostream>
//using namespace std;
//# include <vector>
//# include <algorithm>
//# include <string>
//
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	string name;
//	int age;
//};
//class Great20
//{
//public:
//	bool operator()(const Person &p)
//	{
//		return (p.age > 20);
//	}
//};
//class GreaterFive
//{
//public:
//	bool operator() (int v)
//	{
//		return (v>5);
//	}
//};
//void test01()
//{ 
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it = find_if(v.begin(),v.end(),GreaterFive());
//	if (it != v.end())
//	{
//		cout << "找到了" << endl;
//		cout << *it << endl;
//	}
//}
//void test02()
//{
//	vector<Person> v;
//	v.push_back(Person("zhruan1",19));
//	v.push_back(Person("zhruan2", 20));
//	v.push_back(Person("zhruan3", 23));
//	v.push_back(Person("zhruan4", 23));
//	vector<Person>::iterator it = find_if(v.begin(),v.end(),Great20());
//	if (it != v.end())
//	{
//		cout << "找到了" << endl;
//		cout << it->name << " " << it->age << endl;
//	}
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
