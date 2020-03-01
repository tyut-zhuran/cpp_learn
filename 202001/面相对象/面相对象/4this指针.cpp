//# include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//this指针指向 被调用的成员函数  所属的对象
//		this->age = age;
//	}
//	void addPersonAge(const Person& p)
//	{
//		this->age += p.age;
//	}
//
//	//改进可追加
//	Person addPersonAge2(const Person& p)
//	{
//		this->age += p.age;
//		return *this;//返回对象本身
//	}
//	
//
//	//再改进
//	Person& addPersonAge3(const Person& p)//返回对象的引用
//	{
//		this->age += p.age;
//		return *this;//返回对象本身
//	}
//	int age;
//};
//
//
//int main()
//{
//	Person p(19);
//	cout << p.age << endl;
//	Person p2(10);
//	p.addPersonAge(p2);
//	cout << p.age << endl;
//
//	Person p3(10);
//	p3.addPersonAge2(p2).addPersonAge2(p2);
//	cout << p3.age << endl;//输出20
//
//	p3.age = 10;
//	p3.addPersonAge3(p2).addPersonAge3(p2);//链式编程操作 = *this + 引用
//	cout << p3.age << endl;//输出30
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
//
