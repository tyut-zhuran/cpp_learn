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
//	cout << l1.front() << endl;
//	cout << l1.back() << endl;
//
//
//
//	list<int>::iterator it;
//	it++;//
//	it--;//不出错
//
//	//it = it + 1;//出错，因为链表不支持随机访问
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
//
//
