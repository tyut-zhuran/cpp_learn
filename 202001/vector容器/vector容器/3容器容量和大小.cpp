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
//		cout << "��" << endl;
//	}
//	else
//	{
//		cout << "����Ϊ��" << v1.capacity() << endl;
//		cout << "��ǰ��С��" << v1.size() << endl;
//	}
//
//
//
//	v1.resize(15);//Ĭ����0���
//	printVector(v1);
//
//	v1.resize(20,100);//��100���
//	printVector(v1);
//
//
//
//	v1.resize(5);//����ı�ɾ��
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
