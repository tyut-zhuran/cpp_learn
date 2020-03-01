//# include <iostream>
//using namespace std;
//# include <string >
//
//
//class AbstractCalculator
//{
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//	int m_Num1;
//	int m_Num2;
//};
//
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
//class SubCalculator : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
//
//
//void test01()
//{
//	//多态使用条件
//	//父类指针或引用指向子类对象
//	AbstractCalculator *abc = new AddCalculator();
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 200;
//	cout << abc->getResult() << endl;
//
//	AbstractCalculator *abc2 = new SubCalculator();
//	abc2->m_Num1 = 100;
//	abc2->m_Num2 = 300;
//	cout << abc2->getResult() << endl;
//}
//int main()
//{
//
//
//	test01();
//	system("pause");
//	return 0;
//}
//
//
