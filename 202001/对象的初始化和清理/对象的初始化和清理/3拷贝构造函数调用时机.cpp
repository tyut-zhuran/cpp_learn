//# include <iostream>
//using namespace std;
//
//class Person
//{
//public :
//	int m_age;
//	Person()
//	{
//		cout << "�޲������캯��" << endl;
//	}
//	Person(int age)
//	{
//		cout << "�в������캯��" << endl;
//		m_age = age;
//	}
//	Person(const Person& p)
//	{
//		cout << "��������" << endl;
//		m_age = p.m_age;
//	}
//};
//
////1�������еĶ����ʼ���¶���
//void test01()
//{
//	Person p1(10);
//	Person p2(p1);
//	cout << "test01()���  " << p2.m_age<<endl;
//}
//
////2������������
//
//void dowork(Person p)
//{
//	cout << p.m_age << endl;
//}
//void test02()
//{
//	cout << "test02()���  " << endl;
//	Person p1(100);
//	dowork(p1);
//}
//
//
////3��ֵ��ʽ���ؾֲ�����
//
//Person test03()
//{
//	cout << "test03�������  " << endl;
//	Person p1(300);
//	return p1;
//}
//int main3()
//{
//
//	test01();
//	test02();
//	Person p;
//	p = test03();
//	cout << "main()�������  " << p.m_age << endl;
//	system("pause");
//	return 0;
//}
//
//
//
//
//
//
//
//
//
