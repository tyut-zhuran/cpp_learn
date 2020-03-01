//# include <iostream>
//
//using namespace std;
//
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "无参构造" << endl;
//	}
//	Person(int a)
//	{
//		cout << "有参构造  a=" <<a<< endl;
//	}
//
//	//拷贝构造
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//	}
//private:
//	int m_age;
//};
//
//
//void test01()
//{
//	//1、括号法
//	Person p1;//默认
//	Person p2(2);
//	Person p3(p2);//调用拷贝构造
//
//	//2、显式法
//	Person p4;
//	Person p5 = Person(2);//Person(2)称匿名对象
//	Person p6 = Person(p2);
//	//3、隐式法
//	Person p7 = 10;//相当于Person p7(10);
//}
//
//int main2()
//{
//
//	test01();
//
//
//	system("pause");
//	return 0;
//}
//
//
//
//
//
