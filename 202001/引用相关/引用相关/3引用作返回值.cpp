# include <iostream>
using namespace std;

//引用实质是指针常量，指向被引用的变量
//对引用操作时内部自动解引用

//引用作为函数返回值注意不能返回函数中局部变量的引用
int& test()
{
	static int a = 10;//静态变量在全局区，程序结束后才消失
	return a;
}
int main3()
{

	int &a = test();
	cout << a << endl;
	cout << a << endl;
	test() = 20;//函数返回的是引用，那么该函数的调用可以作为左值
	cout << a << endl;
	cout << a << endl;
	system("pause");
	return 0;
}











