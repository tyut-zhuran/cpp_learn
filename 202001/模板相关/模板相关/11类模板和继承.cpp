//# include <iostream>
//using namespace std;
//# include <string>
//
//
//
//template <class T>
//class Base
//{
//public:
//	T m;
//};
//
//class Son :public Base<int>//必须指定父类中T的数据类型才能继承
//{
//	
//};
//
////或者可以另外定义一个类模板
//template <class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//	Son2()
//	{
//		cout << typeid(T1).name() << endl;
//		cout << typeid(T2).name() << endl;
//	}
//	T1 m2;
//};
//
//
//void test01()
//{
//	Son2<int,char> s;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
