//# include <iostream>
//using namespace std;
//
//
//
//
//
////自定义整型
//class MyInteger
//{
//	friend ostream& operator<< (ostream& cout, MyInteger m);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//	int get_Num()
//	{
//		return m_Num;
//	}
//	//前置++重载
//	MyInteger& operator++()
//	{
//		m_Num++;
//		return *this;
//	}
//
//	//后置++重载
//	MyInteger operator++(int)//int就是一个占位参数，告诉编译器是后置操作
//	{
//		MyInteger temp = *this;
//		m_Num++;//先记录当时结果，再进行递增操作
//		return temp;//这里不是返回的引用，于是不能进行链式操作
//	}
//private :
//	int m_Num;
//};
//
//
////先写一个左移运算符重载
//ostream& operator<< (ostream& cout, MyInteger m)
//{
//	cout << m.m_Num;
//	return cout;
//}
//
//
//
//void test01()
//{
//	MyInteger m;
//	cout << ++(++m) << endl;
//	cout << m << endl;
//}
//
//void test02()
//{
//	MyInteger m;
//	cout << (m++)++ << endl;
//	cout << m << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
//
//
