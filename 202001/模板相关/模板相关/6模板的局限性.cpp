////ģ������ԣ���Щ�ض�������������Ҫ���ض��Ĳ���
//
////������������廯�ú����Ĳ�������
//
//# include <iostream>
//using namespace std;
//# include <string>
//
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//
//template<class T>
//bool myCompare(T &a, T &b)
//{
//	return (a == b);
//}
////�ص�
//template<> bool myCompare(Person &p1, Person &p2)
//{
//	if (p1.m_Name == p2.m_Name  && p1.m_Age == p2.m_Age)
//		return true;
//	return false;
//}
//
//
//
//void test01()
//{
//	int a = 10, b = 20;
//	cout << myCompare(a,b) << endl;
//	cout << (a==b) << endl;
//
//	Person p1 = Person("zhuran",23);
//	Person p2 = Person("zhuran",23);
//	cout << myCompare(p1, p2) << endl;
//}
//
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
