//# include <iostream>
//using namespace std;
//
//
//
//
//
////�Զ�������
//class MyInteger
//{
//	friend ostream& operator<< (ostream& cout, MyInteger m);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//	int get_Num()
//	{
//		return m_Num;
//	}
//	//ǰ��++����
//	MyInteger& operator++()
//	{
//		m_Num++;
//		return *this;
//	}
//
//	//����++����
//	MyInteger operator++(int)//int����һ��ռλ���������߱������Ǻ��ò���
//	{
//		MyInteger temp = *this;
//		m_Num++;//�ȼ�¼��ʱ������ٽ��е�������
//		return temp;//���ﲻ�Ƿ��ص����ã����ǲ��ܽ�����ʽ����
//	}
//private :
//	int m_Num;
//};
//
//
////��дһ���������������
//ostream& operator<< (ostream& cout, MyInteger m)
//{
//	cout << m.m_Num;
//	return cout;
//}
//
//
//
//void test01()
//{
//	MyInteger m;
//	cout << ++(++m) << endl;
//	cout << m << endl;
//}
//
//void test02()
//{
//	MyInteger m;
//	cout << (m++)++ << endl;
//	cout << m << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	system("pause");
//	return 0;
//}
//
//
