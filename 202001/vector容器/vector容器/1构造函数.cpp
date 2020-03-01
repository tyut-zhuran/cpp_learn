//#include <iostream>
//using namespace std;
//# include <vector>
//
//void printVector(vector<int> &v)
//{
//	for (vector<int>::iterator itBegin = v.begin(); itBegin != v.end(); itBegin++)
//	{
//		cout << *itBegin << "  ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;//默认无参构造
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//
//	//利用区间构造
//	vector<int> v2(v1.begin(),v1.end());
//	printVector(v2);
//
//
//
//	//n个elem构造
//	vector<int> v3(10,100);//10个100
//	printVector(v3);
//
//	//拷贝构造
//	vector<int> v4(v3);
//	printVector(v4);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
