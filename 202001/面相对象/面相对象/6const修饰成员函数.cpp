//# include <iostream>
//using namespace std;
//
//
////常函数和常对象
//class Person
//{
//public:
//
//	void showAge()
//	{
//		
//	}
//	void func()
//	{
//		this->age = 100;
//	}
//	//本身this指针是一个指针常量，其指向不能改变————Person * const this;
//	//加了const关键字后，又是一个常量指针，其指向的值也不能变了————const Person * const this;
//	//但是可以通过增加mutable改变
//	void func2() const
//	{
//		//this->age = 100;//报错
//		this->age2 = 100;
//	}
//	int age;
//	mutable int age2;
//};
//
//void test01()
//{
//	const Person p;//常对象
//	//p.age = 100;//报错,常对象属性值不能修改
//	p.age2 = 100;//mutable修饰
//	//常对象只能调用常函数
//	//p.func();//报错
//	p.func2();
//}
//
//int main()
//{
//
//
//	system("pause");
//	return 0;
//
//}
//
//
//
//
//
//
//
//
