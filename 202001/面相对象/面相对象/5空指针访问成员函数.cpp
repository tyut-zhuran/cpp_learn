//# include <iostream>
//
//using namespace std;
//
//class Person
//{
//public:
//
//
//	void showClassName()
//	{
//		cout << "ClassName is Person!" << endl;
//	}
//	void showAge()
//	{
//		//空指针无法访问成员变量	
//		if (this == NULL)
//		{
//			return;
//		}
//		cout << "年龄：" << this->age << endl;
//	}
//
//
//	int age;
//};
//
//
//void test01()
//{
//	Person *p = NULL;
//	p->showClassName();
//	p->showAge();
//
//}
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//
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
