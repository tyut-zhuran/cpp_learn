//#include <iostream>
//using namespace std;
//#include <algorithm>
//# include <string>
//#include <vector>
//
//
//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//	bool operator== (const Person &p)
//	{
//		if (this->name == p.name && this->age == this->age)
//		{
//			return true;
//		}
//		return false;
//	}
//	string name;
//	int age;
//};
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i+1);
//	}
//	vector<int>::iterator it = find(v.begin(), v.end(),5);
//	if (it != v.end())
//	{
//		cout << "找到了" << endl;
//		cout << *it << endl;
//	}
//}
//
//
//
//void test02()
//{
//	vector<Person> v;
//	v.push_back(Person("zhruan",20));
//	v.push_back(Person("zhruan", 21));
//	v.push_back(Person("zhruan", 22));
//	v.push_back(Person("zhruan", 23));
//
//	vector<Person>::iterator it = find(v.begin(),v.end(),Person("zhruan",21));
//	if (it != v.end())
//	{
//		cout << " 找到了" << endl;
//		cout << it->name << " " << it->age << endl;
//	}
//}
//int main()
//{
//
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
//
//
