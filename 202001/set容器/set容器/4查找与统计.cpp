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
//		cout << "�ҵ�" << endl;
//		cout << *pos << endl;
//
//	}
//	else
//	{
//		cout << "δ�ҵ�" << endl;
//	}
//
//
//	int num = s1.count(30);
//	cout << num << endl;//ֻ�ܷ���0��1
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
