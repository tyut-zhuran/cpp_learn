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
//		cout << "AbstractAnimal���캯��" << endl;
//	}
//	/*virtual ~AbstractAnimal()//�������������
//	{
//		cout << "AbstractAnimal��������" << endl;
//	}*/
//	virtual ~AbstractAnimal() = 0;//Ҳ�����ô�������,��Ϊ�����࣬��ʱһ��Ҫ��ʵ��
//	virtual void speak() = 0;
//};
//AbstractAnimal :: ~AbstractAnimal()
//{
//	cout << "AbstractAnimal��������" << endl;
//}
//
//class Cat :public AbstractAnimal
//{
//public:
//	Cat(string name)
//	{
//		cout << "Cat���캯��" << endl;
//		m_Name = new string(name);
//	}
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat��������" << endl;
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
//	delete ani;//����ָ������֮�󲻻���������е��������������ڴ�й©�����������������
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
