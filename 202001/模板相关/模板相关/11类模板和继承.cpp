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
//class Son :public Base<int>//����ָ��������T���������Ͳ��ܼ̳�
//{
//	
//};
//
////���߿������ⶨ��һ����ģ��
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
