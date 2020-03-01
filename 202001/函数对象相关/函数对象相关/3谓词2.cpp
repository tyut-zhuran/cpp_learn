//# include <iostream>
//using namespace std;
//# include <vector>
//# include <algorithm>
//
//
//
//class MyCompare
//{
//public:
//	bool operator() (int v1, int v2)//二元谓词
//	{
//		return (v1>v2);
//	}
//};
//
//
//void printVector(vector<int> &v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << "  ";
//	}
//	cout << endl;
//
//}
//void test01()
//{
//	vector<int> v;
//	v.push_back(30);
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(40);
//	v.push_back(60);
//	v.push_back(50);
//	sort(v.begin(), v.end());
//	printVector(v);
//
//
//	//使用函数对象改变排序方法
//	sort(v.begin(),v.end(),MyCompare());
//	printVector(v);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
//
//
//
//
//
