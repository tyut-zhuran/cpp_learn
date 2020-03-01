# include <iostream>
using namespace std;
# include <string>

class Student
{
public:
	string name;
	int id;
	void showName()
	{
		cout << name << endl;
	}
	void setName(string str)
	{
		name = str;
	}
};



int main2()
{

	Student s1;
	s1.name = "zhuran";
	s1.id = 1;
	s1.showName();
	s1.setName("zzzzzz");
	s1.showName();
	system("pause");
	return 0;
}



