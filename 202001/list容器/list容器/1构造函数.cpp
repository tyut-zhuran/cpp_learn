//# include <iostream>
//using namespace std;
//
//#include <list>
//
//
//void printList(const list<int> &l)
//{
//	for(list<int>::const_iterator it=l.begin();it != l.end();it++)
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
//
//	//���乹��
//	list<int> l2(l1.begin(),l1.end());
//	printList(l2);
//
//	//��������
//	list<int> l3(l2);
//	printList(l3);
//
//	//n��elem
//	list<int> l4(5,10);
//	printList(l4);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
//
