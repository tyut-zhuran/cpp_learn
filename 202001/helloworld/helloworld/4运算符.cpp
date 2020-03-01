# include <iostream>
using namespace std;



int main()
{
	int a = 10;
	int b = 3;
	//算术运算+-*/
	cout << a / b << endl;//输出3
	cout << (float)a / b << endl;//输出小数

	//取模运算，小数无法取模
	cout << 10 % 3 << endl;
	
	//递增递减
	cout << "递增递减" << endl;
	int c = 1;
	cout << c++ << endl;
	cout << c << endl;

	int d = 1;
	cout << ++d << endl;


	//赋值运算符
	//+=,-=,*=,/=,%=
	//比较运算符
	//==,!=,>,<,<=,>=

	//逻辑运算符
	//!,&&,||
	bool b1 = true;
	bool b2 = false;
	cout << !b1 << endl;
	cout << (b1 && b2) << endl;
	cout << (b1 || b2) << endl;

	cout << bool(10) << endl;
	cout << bool(-1) << endl;
	cout << bool(0) << endl;


	system("pause");
	return 0;
}