//# include <iostream>
//using namespace std;
//# include <map>
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
//	map<int, int>m;
//	m.insert(pair<int,int>(1,10));
//	m.insert(pair<int, int>(2,20));
//	m.insert(pair<int, int>(3,30));
//	//顺便一提，map不允许插入重复的key值
//	printMap(m);
//
//
//	map<int, int>::iterator pos = m.find(3);//根据key查找，若输出为end（）表示为找到
//	if (pos != m.end())
//	{
//		cout << "查到了元素key=" << pos->first << " " << "value=" << pos->second << endl;
//	}
//	else
//	{
//		cout << "未找到元素！" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}