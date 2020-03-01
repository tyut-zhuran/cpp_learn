# include <iostream>
using namespace std;


void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main2()
{
	int a = 10, b = 20;
	swap(a,b);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;


	system("pause");
	return 0;
}






