# include <iostream>
using namespace std;

//占位参数
void func(int a, int)
{
	cout << a << endl;
}

//占位参数还可以有默认参数
void func2(int a, int = 20)
{
	cout << a << endl;
}
int main2()
{
	func(2,2);
	func2(3,2);

	system("pause"); 
	return 0;
}









