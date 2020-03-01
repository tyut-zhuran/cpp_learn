////函数对象又称仿函数
//# include <iostream>
//using namespace std;
//#include <string>
//
//
//class MyAdd//函数对象
//{
//public:
//	int operator() (int v1, int v2)//进行运算符重载
//	{
//		return (v1 + v2);
//	}
//};
//
//
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator() (string str)
//	{
//		cout << str << endl;
//		count += 1;
//	}
//	int count;
//};
//
//
//
//
//void doPrint(MyPrint &mp, string str)
//{
//	mp(str);
//}
//void test01()
//{
//	MyAdd m;
//	cout << m(1, 2) << endl;
//
//
//	//可以有自己的状态
//	MyPrint mp;
//	mp("zhuran");
//	cout << "调用次数：" << mp.count << endl;
//
//	mp("zhuran");
//	cout << "调用次数：" << mp.count << endl;
//	mp("zhuran");
//	cout << "调用次数：" << mp.count << endl;
//
//	//可以作为函数的参数传递
//	doPrint(mp,"test作为函数参数");
//}
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
//
//
