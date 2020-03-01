# include <iostream>
using namespace std;





int * func()
{
	int * p = new int(10);
	return p;
}

int *test()
{
	int *p = new int[10];
	for (int i = 0; i < 10; i++)
	{
		*(p + i) = i;
	}
	return p;
}

int main()
{

	int *p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	delete p;
	//cout << *p << endl;
	int *q = test();

	for (int i = 0; i < 10; i++)
	{
		cout << *(q + i) << endl;
	}
	delete[] q;
	system("pause");
	return 0;
}