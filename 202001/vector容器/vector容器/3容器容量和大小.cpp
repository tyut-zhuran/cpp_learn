//# include <iostream>
//using namespace std;
//# include <vector>
//
//void printVector(vector<int> &v)
//{
//	for (vector<int> ::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << "  ";
//
//	}
//	cout << endl;
//}
//void test01()
//{
//	vector<int> v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//
//
//
//	if (v1.empty())
//	{
//		cout << "空" << endl;
//	}
//	else
//	{
//		cout << "容量为：" << v1.capacity() << endl;
//		cout << "当前大小：" << v1.size() << endl;
//	}
//
//
//
//	v1.resize(15);//默认用0填充
//	printVector(v1);
//
//	v1.resize(20,100);//用100填充
//	printVector(v1);
//
//
//
//	v1.resize(5);//多余的被删除
//	printVector(v1);
//}
//
//
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}
//
//
