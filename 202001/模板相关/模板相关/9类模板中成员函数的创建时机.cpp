//# include <iostream>
//using namespace std;
//
////类模板成员函数只有在调用时才创建
//
//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "showPerson1()" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "showPerson2()" << endl;
//	}
//};
//
//template <class T>
//class myClass
//{
//public:
//	T obj;
//	void func1()
//	{
//		obj.showPerson1();
//	}
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//
//
//void test01()
//{
//	myClass<Person1> p1;
//	p1.func1();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
