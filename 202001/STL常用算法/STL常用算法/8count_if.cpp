//# include <iostream>
//using namespace std;
//# include <vector>
//# include <algorithm>
//# include <string>
//
//class Person
//{
//public:
//	Person(string name,int age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//	int age;
//	string name;
//};
//
//class AgeGreater23
//{
//public:
//	bool operator() (const Person &p)
//	{
//		return (p.age>23);
//	}
//};
//class Greater2
//{
//public:
//	bool operator() (int val)
//	{
//		return (val >2);
//	}
//};
//void test01()
//{
//	vector<int> v;
//	v.push_back(1);
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(9);
//	v.push_back(3);
//	v.push_back(1);
//	v.push_back(7);
//	v.push_back(5);
//	v.push_back(2);
//	v.push_back(3);
//
//	cout << count_if(v.begin(), v.end(), Greater2())<<endl;
//}
//void test02()
//{
//	vector<Person> v;
//	v.push_back(Person("zhuran1",23));
//	v.push_back(Person("zhuran2", 22));
//	v.push_back(Person("zhuran3", 26));
//	v.push_back(Person("zhuran4", 25));
//	v.push_back(Person("zhuran5", 22));
//
//	int num = count_if(v.begin(),v.end(),AgeGreater23());
//	cout << num << endl;
//
//}
//
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
//
//
//
//
//
