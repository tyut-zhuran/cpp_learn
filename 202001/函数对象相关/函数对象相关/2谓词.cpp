//# include <iostream>
//using namespace std;
//# include <vector>
//#include <algorithm>
//
////返回bool型数据的仿函数叫谓词
//
//
//class GreatFive
//{
//public:
//	bool operator() (int val)//参数只有一个，称为一元谓词
//	{
//		return (val>5);
//	}
//};
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it =find_if(v.begin(),v.end(),GreatFive());//匿名函数对象
//	if (it == v.end())
//	{
//		cout << "未找到！" << endl;
//	}
//	else
//	{
//		cout << "找到大于5的数：" << *it << endl;
//	}
//}
//
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
