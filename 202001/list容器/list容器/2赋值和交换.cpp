//# include <iostream>
//using namespace std;
//# include <list>
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
//void test01()
//{
//	cout << "test01()" << endl;
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	l1.push_back(50);
//	printList(l1);
//
//	list<int> l2;
//	l2 = l1;
//	printList(l2);
//
//	list<int> l3;
//	l3.assign(l2.begin(),l2.end());
//	printList(l3);
//
//
//	list<int> l4;
//	l4.assign(5,10);
//	printList(l4);
//
//}
//void test02()
//{
//	cout << "test02()" << endl;
//	list<int> l1;
//	l1.push_back(10);
//	l1.push_back(20);
//	l1.push_back(30);
//	l1.push_back(40);
//	l1.push_back(50);
//
//	list<int> l2;
//	l2 = l1;
//	
//	cout << "交换前：" << endl;
//	printList(l1);
//	printList(l2);
//
//	cout << "交换后：" << endl;
//	l1.swap(l2);
//	printList(l1);
//	printList(l2);
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
//
//
//
//
