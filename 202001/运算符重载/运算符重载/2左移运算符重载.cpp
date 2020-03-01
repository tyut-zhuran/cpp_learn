//# include <iostream>
//
//using namespace std;
////左移运算符输出可以实现输出自定义类型
//
//class Person
//{
//public :
///*
//	void operator<< (cout)
//	{}*///一般不用成员函数进行重载，因为没法写。。。。。
//	int m_A;
//	int m_B;
//};
//ostream& operator<< (ostream &cout, Person &p)
//{
//	cout << "p.m_A:" << p.m_A;
//	return cout;
//}
//
//
//void test01()
//{
//	Person p;
//	p.m_A = 10;
//	p.m_B = 30;
//	cout << p << endl;
//}
//
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}
