//# include <iostream>
//using namespace std;
//
//
////�������ͳ�����
//class Person
//{
//public:
//
//	void showAge()
//	{
//		
//	}
//	void func()
//	{
//		this->age = 100;
//	}
//	//����thisָ����һ��ָ�볣������ָ���ܸı䡪������Person * const this;
//	//����const�ؼ��ֺ�����һ������ָ�룬��ָ���ֵҲ���ܱ��ˡ�������const Person * const this;
//	//���ǿ���ͨ������mutable�ı�
//	void func2() const
//	{
//		//this->age = 100;//����
//		this->age2 = 100;
//	}
//	int age;
//	mutable int age2;
//};
//
//void test01()
//{
//	const Person p;//������
//	//p.age = 100;//����,����������ֵ�����޸�
//	p.age2 = 100;//mutable����
//	//������ֻ�ܵ��ó�����
//	//p.func();//����
//	p.func2();
//}
//
//int main()
//{
//
//
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
