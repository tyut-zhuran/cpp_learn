# include <iostream>
using namespace std;
# include <string >



struct student
{
	string name;
	int age;
};
int main2()
{
	struct student stuArray[10] =
	{
		{"ÖìÈ½",10},
		{"Ö÷×©",20},
	};
	stuArray[2].name = "ÖìÈ½ÖìÈ½";
	stuArray[2].age = 100;
	for (int i = 0; i < 10; i++)
	{
		cout << stuArray[i].name << "\t" << stuArray[i].age << endl;
	}
	system("pause");
	return 0;

}