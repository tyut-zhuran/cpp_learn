//# include <iostream>
//using namespace std;
//# include <vector>
//#include <algorithm>
//
////����bool�����ݵķº�����ν��
//
//
//class GreatFive
//{
//public:
//	bool operator() (int val)//����ֻ��һ������ΪһԪν��
//	{
//		return (val>5);
//	}
//};
//void test01()
//{
//	vector<int> v;
//	for (int i = 0; i < 10; i++)
//	{
//		v.push_back(i);
//	}
//	vector<int>::iterator it =find_if(v.begin(),v.end(),GreatFive());//������������
//	if (it == v.end())
//	{
//		cout << "δ�ҵ���" << endl;
//	}
//	else
//	{
//		cout << "�ҵ�����5������" << *it << endl;
//	}
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
