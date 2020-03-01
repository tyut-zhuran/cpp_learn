# include <iostream>
using namespace std;


void func(int a, int b = 10, int c = 20)
{
	cout << a + b + c << endl;
}

//如果声明有默认参数，那么实现就不能有了
//或者说声明和实现只能有一个带有默认参数


int main1()
{
	
	func(20,20,20);
	func(10);
	system("pause");
	return 0;
}









