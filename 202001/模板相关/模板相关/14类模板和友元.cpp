//# include <iostream>
//using namespace std;
//# include <string>
//
//
//template<class T1,class T2>
//class Person;//��֪������һ��ģ����
//
////ȫ�ֺ�������ʵ��
//template<class T1, class T2>
//void printPerson2(Person<T1, T2> &p)
//{
//	cout << "����ʵ�֣�" << endl;
//	cout << p.name << endl;
//	cout << p.age << endl;
//}//ʵ��
//
//
//template <class T1,class T2>
//class Person
//{
//
//	//ȫ�ֺ��� ����ʵ��
//	friend void printPerson(Person<T1,T2> &p)
//	{
//		cout << "����ʵ��" << endl;
//		cout << p.name << endl;
//		cout << p.age << endl;
//	}
//
//
//	//����
//	friend void printPerson2<>(Person<T1, T2> &p);
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//private:	
//	T1 name;
//	T2 age;
//};
//
//
//
//
//
//
//
//void test01()
//{
//	Person<string,int> p("zhuran",23);
//	printPerson(p);
//	printPerson2(p);
//	
//}
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}
//
//
