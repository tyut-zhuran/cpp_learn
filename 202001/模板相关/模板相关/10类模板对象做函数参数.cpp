//# include <iostream>
//using namespace std;
//# include <string >
//
//
//template <class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	void showInfo()
//	{
//		cout << this->m_Name << "  " << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1、指定形参类型
//void printPerson1(Person<string, int> &p1)
//{
//	p1.showInfo();
//}
//
////2、参数模板化
//template<class T1,class T2>
//void printPerson2(Person<T1, T2> &p2)
//{
//	p2.showInfo();
//	cout << typeid(T1).name() << endl;
//	cout << typeid(T2).name() << endl;
//}
////3、整个类模板化
//template <class T>
//void printPerson3(T &p)
//{
//	p.showInfo();
//	//数据类型
//	cout << typeid(T).name() << endl;
//}
//
//
//void test01()
//{
//	Person<string,int> p1("zhuran",23);
//
//	printPerson1(p1);
//	printPerson2(p1);
//	printPerson3(p1);
//}
//int main()
//
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
