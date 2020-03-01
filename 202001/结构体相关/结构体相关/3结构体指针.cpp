# include  <iostream>
# include <string >
using namespace std;

struct Student
{
	string name;
	int age;
};


int main3()
{

	struct Student s1 = {"zhruan",100};
	struct Student *p = &s1;
	cout << p->name << "\t" << p->age << endl;
	cout << s1.name << "\t" <<s1.age << endl;

	system("pause");
	return 0;
}




