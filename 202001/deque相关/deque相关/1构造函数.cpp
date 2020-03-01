//# include <iostream>
//using namespace std;
//# include <deque>
//
//void printDeque(const deque<int>& d)//const防止修改
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//void test01()
//{
//
//	deque<int> d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//
//	//区间方式构造
//	deque<int> d2(d1.begin(),d1.end());
//	printDeque(d2);
//
//	deque<int> d3(10,199);
//	printDeque(d3);
//
//	deque<int> d4(d3);
//	printDeque(d4);
//}
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
//
//
