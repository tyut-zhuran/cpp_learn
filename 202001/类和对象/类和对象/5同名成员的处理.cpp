//# include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void func()
//	{
//		cout << "Base�е�func()" << endl;
//	}
//	void func(int num)
//	{
//		cout << "Base���вε�func()" << endl;
//	}
//	int m_A;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		m_A = 200;
//	}
//
//	void func()
//	{
//		cout << "Son�е�func()" << endl;
//	}
//	
//	int m_A;
//};
//
//
//void test01()
//{
//	Son s;
//	cout << s.m_A << endl;
//	cout << s.Base::m_A << endl;//���ʸ����е�ͬ�����󣨲�֪����ʲô���壩
//
//	s.func();
//	s.Base::func();
//	s.Base::func(3);
//}
//int main()
//{
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
//
