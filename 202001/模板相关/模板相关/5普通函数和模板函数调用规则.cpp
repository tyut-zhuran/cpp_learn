//# include <iostream>
//using namespace std;
//
////普通函数与函数模板的调用规则
////1、两者都可以调用时，优先调用普通函数
////2、但可以通过空模板参数列表 强制调用函数模板
////3、函数模板可以发生重载
////4、如果函数模板可以更好地匹配，就调用函数模板
//
//
//void myPrint(int a,int b)
//{
//	cout << "普通函数" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b)
//{
//	cout << "模板函数调用" << endl;
//}
//
//template<class T>
//void myPrint(T a, T b, T c)
//{
//	cout << "重载的模板函数调用" << endl;
//}
//
//
//void test01()
//{
//	myPrint(1,2);
//	myPrint<>(1,2);
//	myPrint<int>(1, 2);
//	myPrint<>(1,2,3);
//	myPrint(1,2,3);
//
//	//什么叫更好地匹配？
//	myPrint('a','b');
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
