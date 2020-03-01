//# include <iostream>
//using namespace std;
//
//class Person
//{
//public :
//	int m_age;
//	Person()
//	{
//		cout << "无参数构造函数" << endl;
//	}
//	Person(int age)
//	{
//		cout << "有参数构造函数" << endl;
//		m_age = age;
//	}
//	Person(const Person& p)
//	{
//		cout << "拷贝构造" << endl;
//		m_age = p.m_age;
//	}
//};
//
////1、用已有的对象初始化新对象
//void test01()
//{
//	Person p1(10);
//	Person p2(p1);
//	cout << "test01()输出  " << p2.m_age<<endl;
//}
//
////2、做函数参数
//
//void dowork(Person p)
//{
//	cout << p.m_age << endl;
//}
//void test02()
//{
//	cout << "test02()输出  " << endl;
//	Person p1(100);
//	dowork(p1);
//}
//
//
////3、值方式返回局部对象
//
//Person test03()
//{
//	cout << "test03（）输出  " << endl;
//	Person p1(300);
//	return p1;
//}
//int main3()
//{
//
//	test01();
//	test02();
//	Person p;
//	p = test03();
//	cout << "main()函数输出  " << p.m_age << endl;
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
