//# include <iostream>
//using namespace std;
//
//# include <vector>
//# include <numeric>
//# include <algorithm>
//
//void myPrint(int val)
//{
//	cout << val << " ";
//}
//
//
//void test01()
//{
//	vector<int >v1;
//	vector<int >v2;
//	vector<int >vTarget;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i+6);
//		v2.push_back(i);
//	}
//	
//
//	vTarget.resize(min(v1.size(),v2.size()));
//
//
//	//求交集必须是两个有序序列
//	vector<int>::iterator itEnd = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
//
//
//	for_each(vTarget.begin(),vTarget.end(),myPrint);
//	cout << endl;
//	for_each(vTarget.begin(),itEnd,myPrint);
//	cout << endl;
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
