//# include <iostream>
//using namespace std;
//# include <map>
//
//
//
//void printMap(map<int, int> &m)
//{
//	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
//	{
//		cout << "key=" << it->first << "  " << "value=" << it->second << endl;
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	map<int, int> m;
//	m.insert(pair<int,int>(1,10));
//	m.insert(pair<int,int>(2,20));
//	m.insert(pair<int,int>(3,30));
//	printMap(m);
//
//	if (m.empty())
//	{
//		cout << "空！" << endl;
//	}
//	else
//	{
//		cout << "非空！" << endl;
//		cout << "大小为：" << m.size() << endl;
//	}
//
//	map<int, int> m2;
//	m2.insert(pair<int,int>(8,80));
//	printMap(m2);
//
//	cout << "交换前：" << endl;
//	printMap(m);
//	printMap(m2);
//	m.swap(m2);
//	cout << "交换后：" << endl;
//	printMap(m);
//	printMap(m2);
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}
//
