# include <iostream>
using namespace std;

//防止误操作
void showValue(const int &value)
{

	cout << value << endl;
}


int main()
{

	//常量引用，用来修饰形参，防止误操作
	const int& ref = 10;//编译器修改：int temp = 10; const int &ref = temp;
	//ref = 20;//不允许，用const修饰后只读，不可修改

	int a = 100;
	showValue(a);


	system("pause");
	return 0;
}










