//# include <iostream>
//using namespace std;
//
//
//
////纯虚函数和抽象类
//class Base
//{
//public:
//	//纯虚函数
//	virtual void func() = 0;
//	//只要有一个纯虚函数就是抽象类，无法实例化对象
//	//抽象类的子类必须重写父类中的纯虚函数，否则也是抽象函数
//};
//class Son:public Base
//{
//public:
//	void func()
//	{
//		cout << "zhuran" << endl;
//	}
//};
//
//void test01()
//{
//	Son s;
//	s.func();
//
//	//通过多态
//	Base *b = new Son();
//	b->func();
//}
//int main()
//{
//
//	test01();
//
//	system("pause");
//	return 0;
//}
//
//
//
