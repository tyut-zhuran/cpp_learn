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
//		m_A = 1;//����public-->����public
//		m_B = 2;//����protected-->����protected
//		//m_C = 3;//����private-->���಻�ɷ���
//	}
//};
//
//void testClass1()
//{
//	Class1 class1;
//	class1.m_A = 1;//����public-->����public
//}
//
//
//
//class Class2 :protected Base
//{
//public:
//	void func()
//	{
//		m_A = 1;//����public-->����protected
//		m_B = 2;//����protected-->����protected
//	}
//};
//
//void testClass2()
//{
//	Class2 cl;
//	//cl.m_A = 2;//����Ȩ�ޣ����ⲻ�ɷ���
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
//		m_B = 2;//public��protected����Ϊprivate
//	}
//};
//
//void testClass3()
//{
//	Class3 cl;
//	//cl.m_A = 2;//privateȨ�����ⶼ���ɷ���
//}
//int main()
//{
//
//
//	system("pause");
//	return 0;
//}
//
