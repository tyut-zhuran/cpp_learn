//# include <iostream>
//using namespace std;
//# include <string>
//
//template <class NameType, class AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Age = age;
//		this->m_Name = name;
//	}
//	void showInfo()
//	{
//		cout << this->m_Name << "  " << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////����1����ģ��û���Զ������Ƶ���ʽ��ֻ����ʽ��ʹ��
//void test01()
//{
//	//Person p1("zhuran",12);//����
//	Person <string, int > p1("zhuran",23);//��ȷ
//
//	//����2����ģ����ģ��Ĳ����б��п�����Ĭ�ϲ�������
//	Person <string> p2("zhruan",23);
//
//	p1.showInfo();
//	p2.showInfo();
//}
//
//
//
//int main()
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
