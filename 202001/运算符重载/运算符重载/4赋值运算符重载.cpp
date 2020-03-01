//# include <iostream>
//using namespace std;
//
//
////赋值运算符重载
//class Person
//{
//public:
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;//这段代码会导致同一段内存重复释放，出错。前面用深拷贝解决过这个问题
//			m_Age = NULL;
//		}
//	}
//
//	//这里用运算符重载解决问题
//	Person& operator= (Person &p)
//	{
//		if (m_Age != NULL)//如果自己本身已经指向堆区地址，就先释放
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//		m_Age = new int(*p.m_Age);
//		return *this;
//	}
//	int *m_Age;
//};
//
//
//void test01()
//{ 
//	Person p1(19);
//	Person p2(20);
//	p2 = p1;
//	Person p3(22);
//	p3 = p2 = p1;
//	cout << *p1.m_Age<<"  " <<*p2.m_Age<< "  "<<*p3.m_Age << endl;
//}
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
