//# include <iostream>
//using namespace std;
//# include <string>
//
//template <class T1,class T2>
//class Person
//{
//public:
//	//����ʵ��
//	/*Person(T1 name,T2 age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	void showInfo()
//	{
//		cout << this->name << endl;
//		cout << this->age << endl;
//	}*/
//
//
//	Person(T1 name,T2 age);
//	void showInfo();
//	T1 name;
//	T2 age;
//};
//
//
////���캯������ʵ��
//template <class T1,class T2>
//Person<T1,T2>::Person(T1 name,T2 age)
//{
//	this->name = name;
//	this->age = age;
//}
//
////��Ա��������ʵ��
//
//template<class T1,class T2>
//void Person<T1,T2>::showInfo()
//{
//	cout << this->name << endl;
//	cout << this->age << endl;
//}
//
//
//void test01()
//{
//	Person<string ,int > p("��Ƚ",23);
//	p.showInfo();
//}
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
//
