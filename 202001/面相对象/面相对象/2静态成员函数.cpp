//# include <iostream>
//
//using namespace std;
//
//
////静态成员函数
////所有对象共享同一个函数
////静态成员函数只能访问静态成员变量
//class Person
//{
//public:
//	static void func()
//	{
//		m_A = 100;
//		//m_B = 100;//报错
//		cout << "zhruan" << endl;
//	}
//	static int m_A;//静态成员变量
//	int m_B;//非静态成员变量
//};
//
//
//int Person::m_A = 200;
//
//
//
//int main()
//{
//	//静态成员函数访问方式
//	//1、通过对象访问
//	Person p;
//	p.func();
//
//	//2、通过类名访问
//	Person::func();
//
//	system("pause");
//	return 0;
//}
//
//
//
//
//
//
//
//
//
