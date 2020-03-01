# include < iostream>
using namespace std;



int main3()
{

	int arr[10] = { 3,4,56,7,8,9 };
	int *p = arr;
	int i;
	for (i = 0; i < 10; i++)
	{
		cout << *(p + i) << endl;
	}




	system("pause");
	return 0;
}