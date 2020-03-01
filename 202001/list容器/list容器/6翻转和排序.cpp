//# include <iostream>
//using namespace std;
//
//# include <list>
//
//void printList(const list<int> &l)
//{
//	for (list<int>::const_iterator it = l.begin(); it != l.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//
//bool myCompare(int m, int n)
//{
//	return m > n;
//}
//void test01()
//{
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(30);
//	l1.push_back(40);
//	l1.push_back(20);
//	l1.push_back(50);
//	printList(l1);
//
//	l1.reverse();
//	printList(l1);
//
//	//排序
//	//链表不支持随机访问，所以不能用algorithm中的函数
//	l1.sort();
//	printList(l1);
//
//	l1.sort(myCompare);
//	printList(l1);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
