# include <iostream>

using namespace std;
# include <string>



class Person
{
private :
	string name;
	int  age;
public:
	//相当于控制了读写性
	//name:可读可写  age:只读
	void setName(string str)
	{
		name = str;
	}
	string getName()
	{
		return name;
	}
	int getAge()
	{
		age = 10;
		return age;
	}
};

int main4()
{

	Person p1;
	p1.setName("zhruan");
	cout << p1.getName() << "\t" << p1.getAge() << endl;

	system("pause");
	return 0;
}











