//# include <iostream>
//using namespace std;
//# include <string>
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
////区别1：类模板没有自动类型推导方式，只能显式地使用
//void test01()
//{
//	//Person p1("zhuran",12);//错误
//	Person <string, int > p1("zhuran",23);//正确
//
//	//区别2：类模板在模板的参数列表中可以有默认参数类型
//	Person <string> p2("zhruan",23);
//
//	p1.showInfo();
//	p2.showInfo();
//}
//
//
//
//int main()
//{
//
//	test01();
//
//
//	system("pause");
//	return 0;
//}
//
//
//
//
//
