# include <iostream>

using namespace std;
# include <string >
//访问权限
//1、公共权限public 成员类内可以访问，类外也可以访问
//2、保护权限protected 类内可，类外不可
//3、私有权限private   类内可，类外不可------2、3区别在继承

class Person
{
public:
	string name;

protected:
	string car;

private :
	string password;
};



//class 默认权限是private
//struct 默认权限是public

int main3()
{
	Person p1;
	p1.name = "zhruan";
	//p1.car = "zz";//不可
	//p1.password = "22";//不可


	system("pause");
	return 0;
}


