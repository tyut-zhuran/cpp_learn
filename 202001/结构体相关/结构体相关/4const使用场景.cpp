# include <iostream>
using namespace std;
# include <string>



struct Student
{
	string name;
	int age;
};


//���Ĵ󣬲��ʺϴ�����
//void printStudent(struct Student stu)
//{
//	cout << stu.name << "\t"<<stu.age << endl;
//}


//ʹ��const��ֹ�����
void printStudent(const struct Student *p)
{
	cout << p->name << "\t" << p->age << endl;
}


int main4()
{
	struct Student s1 = {"zhuran",10};

	printStudent(&s1);

	system("pause");
	return 0;
}