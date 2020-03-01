//# include <iostream>
//
//using namespace std;
//
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//
//class Class1:public Base
//{
//public:
//	void func()
//	{
//		m_A = 1;//父类public-->子类public
//		m_B = 2;//父类protected-->子类protected
//		//m_C = 3;//父类private-->子类不可访问
//	}
//};
//
//void testClass1()
//{
//	Class1 class1;
//	class1.m_A = 1;//父类public-->子类public
//}
//
//
//
//class Class2 :protected Base
//{
//public:
//	void func()
//	{
//		m_A = 1;//父类public-->子类protected
//		m_B = 2;//父类protected-->子类protected
//	}
//};
//
//void testClass2()
//{
//	Class2 cl;
//	//cl.m_A = 2;//保护权限，类外不可访问
//}
//
//
//
//class Class3 :private Base
//{
//public:
//	void func()
//	{
//		m_A = 1;
//		m_B = 2;//public和protected都变为private
//	}
//};
//
//void testClass3()
//{
//	Class3 cl;
//	//cl.m_A = 2;//private权限类外都不可访问
//}
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}
//
