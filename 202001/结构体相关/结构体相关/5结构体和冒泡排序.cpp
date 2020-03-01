# include <iostream>
using namespace std;
# include <string >

struct Hero
{
	string name;
	int age;
};

void printInfo(struct Hero *heroArray, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << (*(heroArray + i)).name << "\t" << (*(heroArray + i)).age << endl;
	}
}

void bubbleHero(struct Hero *heroArray, int len)
{
	struct Hero temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				temp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = temp;
			}
		}
	}
}


int main()
{

	struct Hero heroArray[5]=
	{
		{"zhu1",32},
		{"zhu2",29},
		{"zhu3",23},
		{"zhu4",21},
		{"zhu5",98}
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	printInfo(heroArray,len);
	bubbleHero(heroArray,len);
	cout << "ÅÅÐòºó£º" << endl;
	printInfo(heroArray,len);
	system("pause");
	return 0;
}