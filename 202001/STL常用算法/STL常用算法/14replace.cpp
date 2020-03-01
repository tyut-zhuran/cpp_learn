//# include <iostream>
//
//using namespace std;
//# include <vector>
//# include <algorithm>
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
//	v.push_back(23);
//	v.push_back(22);
//	v.push_back(21);
//	v.push_back(24);
//	v.push_back(26);
//	v.push_back(27);
//	v.push_back(28);
//	cout << "Ìæ»»Ç°£º" << endl;
//	for_each(v.begin(),v.end(),MyPrint());
//	cout << endl;
//
//	replace(v.begin(),v.end(),23,2000);
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
