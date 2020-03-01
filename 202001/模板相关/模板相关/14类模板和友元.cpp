//# include <iostream>
//using namespace std;
//# include <string>
//
//
//template<class T1,class T2>
//class Person;//告知编译器一个模板类
//
////全局函数类外实现
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> &p)
//{
//	cout << "类外实现：" << endl;
//	cout << p.name << endl;
//	cout << p.age << endl;
//}//实现
//
//
//template <class T1,class T2>
//class Person
//{
//
//	//全局函数 类内实现
//	friend void printPerson(Person<T1,T2> &p)
//	{
//		cout << "类内实现" << endl;
//		cout << p.name << endl;
//		cout << p.age << endl;
//	}
//
//
//	//声明
//	friend void printPerson2<>(Person<T1, T2> &p);
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//private:	
//	T1 name;
//	T2 age;
//};
//
//
//
//
//
//
//
//void test01()
//{
//	Person<string,int> p("zhuran",23);
//	printPerson(p);
//	printPerson2(p);
//	
//}
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}
//
//
