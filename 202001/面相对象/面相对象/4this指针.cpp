//# include <iostream>
//using namespace std;
//
//class Person
//{
//public:
//	Person(int age)
//	{
//		//thisָ��ָ�� �����õĳ�Ա����  �����Ķ���
//		this->age = age;
//	}
//	void addPersonAge(const Person& p)
//	{
//		this->age += p.age;
//	}
//
//	//�Ľ���׷��
//	Person addPersonAge2(const Person& p)
//	{
//		this->age += p.age;
//		return *this;//���ض�����
//	}
//	
//
//	//�ٸĽ�
//	Person& addPersonAge3(const Person& p)//���ض��������
//	{
//		this->age += p.age;
//		return *this;//���ض�����
//	}
//	int age;
//};
//
//
//int main()
//{
//	Person p(19);
//	cout << p.age << endl;
//	Person p2(10);
//	p.addPersonAge(p2);
//	cout << p.age << endl;
//
//	Person p3(10);
//	p3.addPersonAge2(p2).addPersonAge2(p2);
//	cout << p3.age << endl;//���20
//
//	p3.age = 10;
//	p3.addPersonAge3(p2).addPersonAge3(p2);//��ʽ��̲��� = *this + ����
//	cout << p3.age << endl;//���30
//	system("pause");
//	return 0;
//
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
