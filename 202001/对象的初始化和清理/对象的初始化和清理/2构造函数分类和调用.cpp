//# include <iostream>
//
//using namespace std;
//
//
//class Person
//{
//public:
//	Person()
//	{
//		cout << "�޲ι���" << endl;
//	}
//	Person(int a)
//	{
//		cout << "�вι���  a=" <<a<< endl;
//	}
//
//	//��������
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//	}
//private:
//	int m_age;
//};
//
//
//void test01()
//{
//	//1�����ŷ�
//	Person p1;//Ĭ��
//	Person p2(2);
//	Person p3(p2);//���ÿ�������
//
//	//2����ʽ��
//	Person p4;
//	Person p5 = Person(2);//Person(2)����������
//	Person p6 = Person(p2);
//	//3����ʽ��
//	Person p7 = 10;//�൱��Person p7(10);
//}
//
//int main2()
//{
//
//	test01();
//
//
//	system("pause");
//	return 0;
//}
//
//
//
//
//
