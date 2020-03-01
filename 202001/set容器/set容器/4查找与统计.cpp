//# include <iostream>
//using namespace std;
//# include <set>
//
//
//void printSet(set<int> &s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(30);
//	s1.insert(30);
//
//	s1.insert(40);
//
//	set<int>::iterator pos = s1.find(20);
//
//	if (pos != s1.end())
//	{
//		cout << "找到" << endl;
//		cout << *pos << endl;
//
//	}
//	else
//	{
//		cout << "未找到" << endl;
//	}
//
//
//	int num = s1.count(30);
//	cout << num << endl;//只能返回0或1
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
