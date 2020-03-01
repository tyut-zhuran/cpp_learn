//# include <iostream>
//
//
//using namespace std;
//
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//
//class Son :public Base
//{
//public:
//	int m_D;
//};
//
//
//void test01()
//{
//	Son s;
//	cout << sizeof(s) << endl;//输出16，说明也继承了父类中的private属性，只不过被隐藏
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}