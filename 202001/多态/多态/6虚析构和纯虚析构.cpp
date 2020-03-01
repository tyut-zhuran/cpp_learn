//# include <iostream>
//using namespace std;
//# include <string>
//
//
//class AbstractAnimal
//{
//public:
//	AbstractAnimal()
//	{
//		cout << "AbstractAnimal构造函数" << endl;
//	}
//	/*virtual ~AbstractAnimal()//虚析构解决问题
//	{
//		cout << "AbstractAnimal析构函数" << endl;
//	}*/
//	virtual ~AbstractAnimal() = 0;//也可以用纯虚析构,变为抽象类，此时一定要有实现
//	virtual void speak() = 0;
//};
//AbstractAnimal :: ~AbstractAnimal()
//{
//	cout << "AbstractAnimal纯虚析构" << endl;
//}
//
//class Cat :public AbstractAnimal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat构造函数" << endl;
//		m_Name = new string(name);
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat析构函数" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//	void speak()
//	{
//		cout << "Cat---speak()" << endl;
//	}
//
//
//	string * m_Name;
//};
//
//
//void test01()
//{
//	AbstractAnimal *ani = new Cat("zhuran");
//	ani->speak();
//	delete ani;//父类指针析构之后不会调用子类中的析构函数导致内存泄漏，用虚析构解决问题
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
