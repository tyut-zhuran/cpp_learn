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
//void printMultiset(multiset<int> &ms)
//{
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int> s1;
//	pair<set<int>::iterator,bool> ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "����ɹ���" << endl;
//	}
//	else
//	{
//		cout << "����ʧ�ܣ�" << endl;
//	}
//
//
//	ret = s1.insert(10);
//	if (ret.second)
//	{
//		cout << "����ɹ���" << endl;
//	}
//	else
//	{
//		cout << "����ʧ�ܣ�" << endl;
//	}
//
//
//
//
//
//	multiset<int> ms;
//	ms.insert(10);
//	ms.insert(10);
//	//���Բ����ظ���ֵ
//	ms.insert(10);
//	ms.insert(10);
//
//
//	printMultiset(ms);
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
