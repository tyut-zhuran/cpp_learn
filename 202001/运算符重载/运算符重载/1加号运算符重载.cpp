//# include <iostream>
//
//using namespace std;
//
//
//
////1、成员函数实现重载
////class Person
////{
////public:
////	int m_A;
////	int m_B;
////
////	Person operator+ (Person &p)
////	{
////		Person temp;
////		temp.m_A = this->m_A + p.m_A;
////		return temp;
////	}
////
////	void showInfo()
////	{
////		cout << "m_A:" << this->m_A << endl;
////	}
////};
//
////2、全局函数实现
//class Person
//{
//public:
//	int m_A;
//
//
//
//	void showInfo()
//	{
//		cout << "m_A:" << m_A << endl;
//	}
//};
//Person operator+ (Person &p1, Person &p2)
//{
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	return temp;
//}
//
//
//
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	Person p2;
//	p2.m_A = 20;
//	Person p3 = p1 + p2;
//	p3.showInfo();
//	//Person p4 = p1.operator+(p2);
//	Person p5 = operator+(p1,p2);
//	p5.showInfo();
//}
//
//
//int main()
//{
//	test01();
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
