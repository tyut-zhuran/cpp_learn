//# include <iostream>
//
//using namespace std;
//# include <vector>
//# include <algorithm>
//
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//void test01()
//{
//	//����һ��vector����������
//	vector<int> v;
//	//�������в�������
//	v.push_back(10);
//	v.push_back(40);
//	v.push_back(30);
//	v.push_back(20);
//
//	//ͨ�����������������е�����
//	vector<int>::iterator itBegin = v.begin();//��ʼ��������ָ�������еĵ�һ��Ԫ��
//	vector<int>::iterator itEnd = v.end();//������������ָ�����������һ��Ԫ�ص���һ��λ��
//
//	//��һ�ֱ�����ʽ
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//
//	//�ڶ��ֱ�����ʽ
//	for (vector<int>::iterator itBgin2 = v.begin(); itBgin2 != v.end(); itBgin2++)
//	{
//		cout << *itBgin2 << endl;
//	}
//
//
//	//�����ֱ�������
//	for_each(v.begin(),v.end(),myPrint);
//
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
