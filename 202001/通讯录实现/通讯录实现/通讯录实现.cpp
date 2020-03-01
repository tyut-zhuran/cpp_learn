# include <iostream>
using namespace std;
# include <string>
# define MAX 100


struct Person 
{
	string name;
	int sex;//1-nan,2-nv
	int age;
	string phoneNumber;
};

struct AddressBook 
{
	struct Person *personArray;
	int size;
};



void showMenu()
{
	cout << "*****1、添加*****" << endl;
	cout << "*****2、显示*****" << endl;
	cout << "*****3、删除*****" << endl;
	cout << "*****4、查找*****" << endl;
	cout << "*****5、修改*****" << endl;
	cout << "*****6、清空*****" << endl;
	cout << "*****0、退出*****" << endl;
	cout << "*****************" << endl;
}


void addPerson(struct AddressBook *abk)
{
	if (abk->size == MAX)
	{
		cout << "通讯录满！ " << endl;
	}
	else
	{
		cout << "输入姓名：" << endl;
		cin >> (abk->personArray[abk->size]).name;
		cout << "输入性别：(1：男，2：女)" << endl;
		cin >> (abk->personArray[abk->size]).sex;
		cout << "输入年龄：" << endl;
		cin >> (abk->personArray[abk->size]).age;
		cout << "输入电话：" << endl;
		cin >> (abk->personArray[abk->size]).phoneNumber;
		abk->size += 1;
		cout << "添加成功！\d任意键继续" << endl;
		
	}
	system("pause");
	system("cls");
	return;
}


void showPerson(struct AddressBook *abk)
{
	if (abk->size == 0)
	{
		cout << "通讯录为空！" << endl;
	}
	else
	{
		for (int i = 0; i < abk->size; i++)
		{
			cout << abk->personArray[i].name << "--" << (abk->personArray[i].sex == 1 ? "男" : "女")
				<< "--" << abk->personArray[i].age << "--" << abk->personArray[i].phoneNumber << endl;
		}
	}
	system("pause");
	system("cls");
}


int isExist(struct AddressBook *abk, string name)
{
	for (int i = 0; i < abk->size; i++)
	{
		if (abk->personArray[i].name == name)
		{
			return i;
		}
	}
	return -1;
}


void deletePerson(struct AddressBook *abk)
{
	string name;
	cout << "输入要删除联系人的姓名：" << endl;
	cin >> name;
	if (isExist(abk, name) != -1)
	{
		for (int i = isExist(abk, name); i < abk->size - 1; i++)
		{
			abk->personArray[i] = abk->personArray[i + 1];
		}
		abk->size--;
		cout << "删除成功！"<<endl;
	}
	else
	{
		cout << "查无此人！" <<endl;
	}
	system("pause");
	system("cls");
}

void findPerson(struct AddressBook *abk)
{
	string name;
	cout << "输入要查找的联系人姓名：" << endl;
	cin >> name;
	int res = isExist(abk,name);
	if (res == -1)
	{
		cout << "查无此人！" << endl;
	}
	else
	{
		cout << abk->personArray[res].name << "--" << (abk->personArray[res].sex == 1 ? "男" : "女")
			<< "--" << abk->personArray[res].age << "--" << abk->personArray[res].phoneNumber << endl;
	}
	system("pause");
	system("cls");
}


void modifyPerson(struct AddressBook *abk)
{
	string name;
	cout << "输入要修改的联系人姓名：" << endl;
	cin >> name;
	int res = isExist(abk,name);
	if (res == -1)
	{
		cout << "查无此人！" << endl;
	}
	else
	{
		cout << "查找成功！输入修改信息：" << endl;
		cout << "输入姓名：" << endl;
		cin >> (abk->personArray[res]).name;
		cout << "输入性别：(1：男，2：女)" << endl;
		cin >> (abk->personArray[res]).sex;
		cout << "输入年龄：" << endl;
		cin >> (abk->personArray[res]).age;
		cout << "输入电话：" << endl;
		cin >> (abk->personArray[res]).phoneNumber;
		cout << "修改成功！" << endl;
	}


	system("pause");
	system("cls");
}

void clearPerson(struct AddressBook *abk)
{
	abk->size = 0;
	system("pause");
	system("cls");
}



int main()
{
	struct Person personArray[MAX];
	struct AddressBook abk = {personArray,0};
	int select = 0;
	while (1)
	{
		showMenu();
		cin >> select ;
		switch (select)
		{
		case 1:addPerson(&abk); break;//添加
		case 2:showPerson(&abk); break;//显示
		case 3:deletePerson(&abk); break;//删除
		case 4:findPerson(&abk); break;//查找
		case 5:modifyPerson(&abk); break;//修改
		case 6:clearPerson(&abk); break;//清空
		case 0: system("pause"); return 0; break;//退出
		}
	}
	system("pause");
	return 0;
}


