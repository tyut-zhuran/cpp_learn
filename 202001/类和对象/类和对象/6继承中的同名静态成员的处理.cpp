//# include <iostream>
//using namespace std;
//
//
//class Base
//{
//public:
//
//	static int m_A;
//	static void  func()
//	{
//		cout << "Base中的func()" << endl;
//	}
//
//};
//int Base::m_A = 100;
//
//
//
//
//class Son :public Base
//{
//public:
//	static int m_A;
//	static void  func()
//	{
//		cout << "Son中的func()" << endl;
//	}
//};
//int Son::m_A = 200;
//
//void  test01()
//{
//	Base b;
//	Son s;
//	//通过对象访问静态变量
//	cout << s.m_A << endl;
//	cout << s.Base::m_A << endl;
//	cout << b.m_A << endl;
//
//
//	//通过类名方式访问
//	cout << Base::m_A << endl;
//	cout << Son::m_A << endl;
//	cout << Son::Base::m_A << endl;
//
//
//	s.func();
//	b.func();
//	Son::func();
//	Base::func();
//	Son::Base::func();
//}
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}
