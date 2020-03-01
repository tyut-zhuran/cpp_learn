//# include <iostream>
//using namespace std;
//
//
//class Person
//{
//public:
//	int m_age;
//	int *m_height;
//	Person()
//	{
//		cout << "无参构造" << endl;
//	}
//	Person(int age, int height)
//	{
//		cout << "有参构造  age="  <<age<<"  height = "<<height <<endl;
//		m_age = age;
//		m_height = new int(height);
//		cout << int(m_height) << endl;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "自己写的拷贝构造" << endl;
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);//实现深拷贝解决问题
//	}
//	~Person()
//	{
//		if (1)
//		{
//			delete m_height;
//			m_height = NULL;
//			cout << "delete......" << endl;//这里会出问题，因为如果用拷贝构造过对象就会造成堆区的内存重复操作释放，源于编译器的浅拷贝
//		}
//		cout << "析构函数" << endl;
//	}
//};
//
//void test01()
//{
//	Person p1(10, 180);
//	cout << "main()函数输出  p1.m_age = " << p1.m_age << "  *p1.height = " << *(p1.m_height) << endl;
//	Person p2(p1);
//	cout << "main()函数输出  p2.m_age = " << p2.m_age << "  *p2.height = " << *(p2.m_height) << endl;
//
//}
//
//int main()
//{
//
//	test01();
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
//
//
//
//
