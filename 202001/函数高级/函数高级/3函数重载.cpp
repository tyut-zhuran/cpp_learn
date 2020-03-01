# include <iostream>
using namespace std;

void func(int a)
{
	cout << "int " << endl;
}
void func(double a)
{
	cout << "double " << endl;
}
//注意事项1：例子两个函数func(int &a)和func(const int &a)
//				那么如果是int a = 10;func(a)时调用第一个；而func(10)调用第二个
//注意事项2：func(int a)和func(int a, int b =10)
//				那么调用时会出错，应尽量避免

int main()
{

	func(3);
	func(3.22);
	system("pause");
	return 0;
}







