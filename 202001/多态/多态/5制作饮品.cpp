//# include <iostream>
//
//using namespace std;
//
//class AbstractDrinking
//{
//public:
//	virtual void Boil() = 0;//÷ÛÀÆ
//	virtual void Brew() = 0;//≥Â≈›
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
//		cout << "÷ÛÀÆ£°" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "≥Â≈›øß∑»£°" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "º”≈£ƒÃ£°" << endl;
//	}
//};
//
//class Tea :public AbstractDrinking
//{
//	virtual void Boil()
//	{
//		cout << "÷ÛÀÆ£°" << endl;
//	}
//	virtual void Brew()
//	{
//		cout << "≥Â≈›≤Ë“∂£°" << endl;
//	}
//	virtual void PutSomething()
//	{
//		cout << "º”ƒ˚√ £°" << endl;
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
