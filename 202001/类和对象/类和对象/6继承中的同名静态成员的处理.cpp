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
//		cout << "Base�е�func()" << endl;
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
//		cout << "Son�е�func()" << endl;
//	}
//};
//int Son::m_A = 200;
//
//void  test01()
//{
//	Base b;
//	Son s;
//	//ͨ��������ʾ�̬����
//	cout << s.m_A << endl;
//	cout << s.Base::m_A << endl;
//	cout << b.m_A << endl;
//
//
//	//ͨ��������ʽ����
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
