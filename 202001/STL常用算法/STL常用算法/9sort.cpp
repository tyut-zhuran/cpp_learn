//# include <iostream>
//using namespace std;
//# include <vector>
//# include <algorithm>
//# include <functional>
//
//
//class MyCompare
//{
//public:
//	bool operator() (int val1, int val2)
//	{
//		return(val1 > val2);
//	}
//};
//
//void printVector(const vector<int> &v)
//{
//	for (vector<int>::const_iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(8);
//	v.push_back(6);
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(4);
//	v.push_back(6);
//	v.push_back(1);
//	v.push_back(5);
//	v.push_back(2);
//	v.push_back(3);
//
//	sort(v.begin(),v.end());
//	printVector(v);
//	sort(v.begin(), v.end(), MyCompare());
//	printVector(v);
//
//	sort(v.begin(),v.end(),greater<int>());
//	printVector(v);
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
//
//
//
