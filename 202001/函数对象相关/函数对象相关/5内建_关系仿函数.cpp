//# include <iostream>
//using namespace std;
//# include <functional>
//# include <vector>
//# include <algorithm>
//
//
//
//class MyCompare
//{
//public:
//	bool operator() (int v1, int v2)
//	{
//		return (v1>v2);
//	}
//};
//void printVector(vector<int> &v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v;
//	v.push_back(10);
//	v.push_back(30);
//	v.push_back(20);
//	v.push_back(50);
//	v.push_back(40);
//	printVector(v);
//
//	//sort(v.begin(),v.end(),MyCompare());
//	//printVector(v);
//
//	//使用内建的关系仿函数
//	sort(v.begin(),v.end(),greater<int>());
//	printVector(v);
//
//	//默认
//	sort(v.begin(),v.end(),less<int>());
//	printVector(v);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
