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
//	//˳��һ�ᣬmap����������ظ���keyֵ
//	printMap(m);
//
//
//	map<int, int>::iterator pos = m.find(3);//����key���ң������Ϊend������ʾΪ�ҵ�
//	if (pos != m.end())
//	{
//		cout << "�鵽��Ԫ��key=" << pos->first << " " << "value=" << pos->second << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ�أ�" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}