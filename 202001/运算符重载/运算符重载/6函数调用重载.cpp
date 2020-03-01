# include <iostream>
using namespace std;
#include <string>

//函数调用运算符重载，也仿函数
class MyClass
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void myPrint(string str)
{
	cout << str << endl;
}




class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};


void test01()
{
	MyClass myClass;

	myClass("zhuran");
	myPrint("zhuran");

	MyAdd myAdd;
	cout << myAdd(1, 2) << endl;


	//顺便提一下：创建匿名对象
	cout << MyAdd()(1, 2) << endl;
}
int main()
{

	test01();

	system("pause");
	return 0;
}











