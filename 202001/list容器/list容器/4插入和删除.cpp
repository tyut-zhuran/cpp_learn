//# include <iostream>
//using namespace std;
//# include <list>
//
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
//	l1.push_front(1);
//	l1.push_front(2);
//	l1.push_front(3);
//	l1.push_front(4);
//	printList(l1);
//
//	//Î²É¾
//	l1.pop_back();
//	printList(l1);
//
//	//Í·É¾
//	l1.pop_front();
//	printList(l1);
//
//
//
//	//insert²åÈë
//	l1.insert(l1.begin(),1000);
//	printList(l1);
//
//	list<int> ::iterator it = l1.begin();
//	l1.insert(++it,1000);
//	printList(l1);
//
//
//
//	//É¾³ý
//	it = l1.begin();
//	l1.erase(it);
//	printList(l1);
//
//	it = l1.begin();
//	it++;
//	l1.erase(it);
//	printList(l1);
//
//	//remove
//	l1.push_back(888);
//	printList(l1);
//	l1.remove(888);
//	printList(l1);
//
//	l1.clear();
//	printList(l1);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
