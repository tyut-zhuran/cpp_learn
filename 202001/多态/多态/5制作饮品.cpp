//# include <iostream>
//
//using namespace std;
//
//class AbstractDrinking
//{
//public:
//	virtual void Boil() = 0;//��ˮ
//	virtual void Brew() = 0;//����
//	virtual void PutSomething() = 0;
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PutSomething();
//	}
//};
//
//class Coffee:public AbstractDrinking
//{
//	virtual void Boil()
//	{
//		cout << "��ˮ��" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "���ݿ��ȣ�" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "��ţ�̣�" << endl;
//	}
//};
//
//class Tea :public AbstractDrinking
//{
//	virtual void Boil()
//	{
//		cout << "��ˮ��" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ��" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "�����ʣ�" << endl;
//	}
//};
//
//void doWork(AbstractDrinking *abd)
//{
//	abd->makeDrink();
//}
//void test01()
//{
//	doWork(new Coffee);
//	doWork(new Tea);
//}
//
//
//int main()
//{
//	test01();
//
//	system("pause");
//	return 0;
//}
//
