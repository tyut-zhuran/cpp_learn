//# include <iostream>
//using namespace std;
//
//
//class Person
//{
//public:
//	int m_age;
//	int *m_height;
//	Person()
//	{
//		cout << "�޲ι���" << endl;
//	}
//	Person(int age, int height)
//	{
//		cout << "�вι���  age="  <<age<<"  height = "<<height <<endl;
//		m_age = age;
//		m_height = new int(height);
//		cout << int(m_height) << endl;
//	}
//
//	Person(const Person& p)
//	{
//		cout << "�Լ�д�Ŀ�������" << endl;
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);//ʵ������������
//	}
//	~Person()
//	{
//		if (1)
//		{
//			delete m_height;
//			m_height = NULL;
//			cout << "delete......" << endl;//���������⣬��Ϊ����ÿ������������ͻ���ɶ������ڴ��ظ������ͷţ�Դ�ڱ�������ǳ����
//		}
//		cout << "��������" << endl;
//	}
//};
//
//void test01()
//{
//	Person p1(10, 180);
//	cout << "main()�������  p1.m_age = " << p1.m_age << "  *p1.height = " << *(p1.m_height) << endl;
//	Person p2(p1);
//	cout << "main()�������  p2.m_age = " << p2.m_age << "  *p2.height = " << *(p2.m_height) << endl;
//
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
//
//
//
//
//
//
//
//
//
