# include <iostream>
using namespace std;



void printArray(int *arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void bubbleSort(int *arr, int len)
{
	int temp;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len - i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[10] = { 2,3,1,6,7,45,34,9,4,2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	printArray(arr,len);
	bubbleSort(arr,len);
	cout << endl << "ÅÅÐòºó£º" << endl;
	printArray(arr,len);
	system("pause");
	return 0;
}