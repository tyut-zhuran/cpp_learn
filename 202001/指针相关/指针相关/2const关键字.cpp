# include <iostream>
using namespace std;


int main2()
{

	int a = 100;

	//常量指针：指针指向的值不能改（应该是不能通过指针修改），指针的指向可以改
	const int *p = &a;
	//报错*p = 0;

	cout << a << endl;

	//指针常量：指针指向不能改，指针指向的值可以改

	int b = 1000;
	int * const q = &b;
	//报错b = &a;




	int c = 90;
	const int * const pq = &c;
	system("pause");
	return 0;
}