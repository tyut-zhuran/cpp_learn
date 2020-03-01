# include <iostream>
# include "workerManager.h"
using namespace std;

# include "employee.h"
# include "manager.h"
# include "boss.h"

int main()
{

	WorkerManager wm;
	int choice = 0;
	//Worker *worker = NULL;
	//worker = new Employee(1,"zhuran",1);
	//worker->showInfo();
	//delete worker;

	//worker = new Manager(2,"��Ƚ",2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "��ȽBoss", 2);
	//worker->showInfo();
	//delete worker;
	//system("pause");
	//return 0;

	while (true)
	{
		wm.showMenu();
		cout << "ѡ����ţ�" << endl;
		cin >> choice;

		switch (choice)
		{
		case(1)://����
		{
			wm.AddEmp();
			break;
		}
		case(2)://��ʾ
		{
			wm.showEmp();
			break;		
		}
		case(3)://ɾ��
		{
			wm.delEmp();
			break;
		}
		case(4)://�޸�
		{
			wm.modifyEmp();
			break;
		}
		case(5)://����
		{
			wm.findEmp();
			break;
		}
		case(6)://����
		{
			wm.sortEmp();
			break;
		}
		case(7)://���
		{
			wm.cleanFile();
			break;
		}
		case(0)://�˳�
		{
			wm.ExitSystem();
			
			break;
		}
		default:
		{
			system("cls");
			break;
		}
		}
	}



	system("pause");
	return 0;
}