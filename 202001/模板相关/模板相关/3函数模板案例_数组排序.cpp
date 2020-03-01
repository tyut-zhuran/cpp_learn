//# include <iostream>
//using namespace std;
//
//template <class T>
//void sort(T arr[],int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;
//
//		for (int j = i + 1; j < len; j++)
//		{
//			if (arr[max] < arr[j])
//			{
//				max = j;
//			}
//		}
//		if (i != max)
//		{
//			T temp;
//			temp = arr[i];
//			arr[i] = arr[max];
//			arr[max] = temp;
//		}
//	}
//}
//
//
//template <class T>
//void printArray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << "\t";
//	}
//	cout << endl;
//}
//
//int main()
//{
//
//	int arr[4] = {2,1,3,4};
//	sort(arr,4);
//	printArray(arr,4);
//
//	char arr1[] = "zhruan";
//	sort(arr1,6);
//	printArray(arr1,6);
//	system("pause");
//	return 0;
//}