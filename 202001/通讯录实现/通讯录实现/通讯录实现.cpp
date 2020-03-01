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
	cout << "*****1�����*****" << endl;
	cout << "*****2����ʾ*****" << endl;
	cout << "*****3��ɾ��*****" << endl;
	cout << "*****4������*****" << endl;
	cout << "*****5���޸�*****" << endl;
	cout << "*****6�����*****" << endl;
	cout << "*****0���˳�*****" << endl;
	cout << "*****************" << endl;
}


void addPerson(struct AddressBook *abk)
{
	if (abk->size == MAX)
	{
		cout << "ͨѶ¼���� " << endl;
	}
	else
	{
		cout << "����������" << endl;
		cin >> (abk->personArray[abk->size]).name;
		cout << "�����Ա�(1���У�2��Ů)" << endl;
		cin >> (abk->personArray[abk->size]).sex;
		cout << "�������䣺" << endl;
		cin >> (abk->personArray[abk->size]).age;
		cout << "����绰��" << endl;
		cin >> (abk->personArray[abk->size]).phoneNumber;
		abk->size += 1;
		cout << "��ӳɹ���\d���������" << endl;
		
	}
	system("pause");
	system("cls");
	return;
}


void showPerson(struct AddressBook *abk)
{
	if (abk->size == 0)
	{
		cout << "ͨѶ¼Ϊ�գ�" << endl;
	}
	else
	{
		for (int i = 0; i < abk->size; i++)
		{
			cout << abk->personArray[i].name << "--" << (abk->personArray[i].sex == 1 ? "��" : "Ů")
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
	cout << "����Ҫɾ����ϵ�˵�������" << endl;
	cin >> name;
	if (isExist(abk, name) != -1)
	{
		for (int i = isExist(abk, name); i < abk->size - 1; i++)
		{
			abk->personArray[i] = abk->personArray[i + 1];
		}
		abk->size--;
		cout << "ɾ���ɹ���"<<endl;
	}
	else
	{
		cout << "���޴��ˣ�" <<endl;
	}
	system("pause");
	system("cls");
}

void findPerson(struct AddressBook *abk)
{
	string name;
	cout << "����Ҫ���ҵ���ϵ��������" << endl;
	cin >> name;
	int res = isExist(abk,name);
	if (res == -1)
	{
		cout << "���޴��ˣ�" << endl;
	}
	else
	{
		cout << abk->personArray[res].name << "--" << (abk->personArray[res].sex == 1 ? "��" : "Ů")
			<< "--" << abk->personArray[res].age << "--" << abk->personArray[res].phoneNumber << endl;
	}
	system("pause");
	system("cls");
}


void modifyPerson(struct AddressBook *abk)
{
	string name;
	cout << "����Ҫ�޸ĵ���ϵ��������" << endl;
	cin >> name;
	int res = isExist(abk,name);
	if (res == -1)
	{
		cout << "���޴��ˣ�" << endl;
	}
	else
	{
		cout << "���ҳɹ��������޸���Ϣ��" << endl;
		cout << "����������" << endl;
		cin >> (abk->personArray[res]).name;
		cout << "�����Ա�(1���У�2��Ů)" << endl;
		cin >> (abk->personArray[res]).sex;
		cout << "�������䣺" << endl;
		cin >> (abk->personArray[res]).age;
		cout << "����绰��" << endl;
		cin >> (abk->personArray[res]).phoneNumber;
		cout << "�޸ĳɹ���" << endl;
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
		case 1:addPerson(&abk); break;//���
		case 2:showPerson(&abk); break;//��ʾ
		case 3:deletePerson(&abk); break;//ɾ��
		case 4:findPerson(&abk); break;//����
		case 5:modifyPerson(&abk); break;//�޸�
		case 6:clearPerson(&abk); break;//���
		case 0: system("pause"); return 0; break;//�˳�
		}
	}
	system("pause");
	return 0;
}


