# include <iostream>

using namespace std;



int main1()
{

	int a = 1000;
	int *p = &a;
	cout << a << endl;
	cout << *p << endl;

	//全部输出4
	cout << sizeof(int *) << endl;
	cout << sizeof(float *) << endl;
	cout << sizeof(double *) << endl;

	//空指针和野指针

	//空指针指向地址0
	int *p1 = NULL;

	//野指针是指向没有权限的地址
	int *p2 = (int *)0x0022;

	//出错
	//cout << *p2 << endl;
	system("pause");
	return 0;

}