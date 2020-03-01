//# include <iostream>
//using namespace std;
//#include <algorithm>
//#include <vector>
//#include <string>
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//
//	bool operator== (const Person &p)
//	{
//		return (this->age == p.age);
//	}
//	int age;
//	string name;
//};
//
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(50);
//	v.push_back(60);
//	v.push_back(30);
//
//	cout << "30的数量是：" << count(v.begin(),v.end(),30)<<endl;
//}
//
//void test02()
//{
//	vector<Person> v;
//	v.push_back(Person("zhuran1",23));
//	v.push_back(Person("zhuran2", 23));
//	v.push_back(Person("zhuran3", 23));
//	v.push_back(Person("zhuran4", 23));
//	v.push_back(Person("zhuran5", 22));
//	v.push_back(Person("zhuran6", 23));
//	v.push_back(Person("zhuran7", 23));
//	v.push_back(Person("zhuran3", 24));
//	v.push_back(Person("zhuran2", 23));
//	v.push_back(Person("zhuran1", 21));
//
//
//	int num;
//	num = count(v.begin(),v.end(),Person("zhuran2",23));
//	cout << num << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
