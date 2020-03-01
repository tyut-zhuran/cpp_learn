//# include <iostream>
//using namespace std;
//# include <list>
//
//
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
//void test01()
//{
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	l1.push_back(50);
//	printList(l1);
//
//	if (l1.empty())
//	{
//		cout << "¿Õ£¡" << endl;
//	}
//	else
//	{
//		cout << "ÔªËØ¸öÊý£º" << l1.size() << endl;
//		printList(l1);
//	}
//
//	l1.resize(10,99);
//	printList(l1);
//
//	l1.resize(2);
//	printList(l1);
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
//
//
//
