////���������ֳƷº���
//# include <iostream>
//using namespace std;
//#include <string>
//
//
//class MyAdd//��������
//{
//public:
//	int operator() (int v1, int v2)//�������������
//	{
//		return (v1 + v2);
//	}
//};
//
//
//class MyPrint
//{
//public:
//	MyPrint()
//	{
//		this->count = 0;
//	}
//	void operator() (string str)
//	{
//		cout << str << endl;
//		count += 1;
//	}
//	int count;
//};
//
//
//
//
//void doPrint(MyPrint &mp, string str)
//{
//	mp(str);
//}
//void test01()
//{
//	MyAdd m;
//	cout << m(1, 2) << endl;
//
//
//	//�������Լ���״̬
//	MyPrint mp;
//	mp("zhuran");
//	cout << "���ô�����" << mp.count << endl;
//
//	mp("zhuran");
//	cout << "���ô�����" << mp.count << endl;
//	mp("zhuran");
//	cout << "���ô�����" << mp.count << endl;
//
//	//������Ϊ�����Ĳ�������
//	doPrint(mp,"test��Ϊ��������");
//}
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
//
//
