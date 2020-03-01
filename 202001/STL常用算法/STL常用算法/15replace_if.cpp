//# include <iostream>
//using namespace std;
//# include <vector>
//# include <algorithm>
//
//
//class Greater23
//{
//public:
//	bool operator()(int val)
//	{
//		return (val>23);
//	}
//};
//
//
//class MyPrint
//{
//public:
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//
//void test01()
//{
//	vector<int> v;
//	v.push_back(20);
//	v.push_back(23);
//	v.push_back(24);
//	v.push_back(22);
//	v.push_back(25);
//	v.push_back(26);
//	v.push_back(22);
//	v.push_back(21);
//	v.push_back(26);
//	v.push_back(20);
//	cout << "Ìæ»»Ç°£º" << endl;
//	for_each(v.begin(),v.end(),MyPrint());
//	cout << endl;
//
//
//	replace_if(v.begin(),v.end(),Greater23(),2000);
//
//	cout << "Ìæ»»ºó£º" << endl;
//	for_each(v.begin(), v.end(), MyPrint());
//	cout << endl;
//
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
