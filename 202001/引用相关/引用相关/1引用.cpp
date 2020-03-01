# include <iostream>

using namespace std;

int main1()
{


	//引用：给变量起别名
	//注意事项：1、引用必须初始化；2、初始化后不能更改
	int a = 10;
	int& b = a;
	b = 20;
	cout << b << endl;
	cout << a << endl;


	system("pause");
	return 0;
}











