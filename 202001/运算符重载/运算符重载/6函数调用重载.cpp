# include <iostream>
using namespace std;
#include <string>

//����������������أ�Ҳ�º���
class MyClass
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void myPrint(string str)
{
	cout << str << endl;
}




class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
};


void test01()
{
	MyClass myClass;

	myClass("zhuran");
	myPrint("zhuran");

	MyAdd myAdd;
	cout << myAdd(1, 2) << endl;


	//˳����һ�£�������������
	cout << MyAdd()(1, 2) << endl;
}
int main()
{

	test01();

	system("pause");
	return 0;
}











