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

	//worker = new Manager(2,"ÖìÈ½",2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "ÖìÈ½Boss", 2);
	//worker->showInfo();
	//delete worker;
	//system("pause");
	//return 0;

	while (true)
	{
		wm.showMenu();
		cout << "Ñ¡ÔñÐòºÅ£º" << endl;
		cin >> choice;

		switch (choice)
		{
		case(1)://Ôö¼Ó
		{
			wm.AddEmp();
			break;
		}
		case(2)://ÏÔÊ¾
		{
			wm.showEmp();
			break;		
		}
		case(3)://É¾³ý
		{
			wm.delEmp();
			break;
		}
		case(4)://ÐÞ¸Ä
		{
			wm.modifyEmp();
			break;
		}
		case(5)://²éÕÒ
		{
			wm.findEmp();
			break;
		}
		case(6)://ÅÅÐò
		{
			wm.sortEmp();
			break;
		}
		case(7)://Çå¿Õ
		{
			wm.cleanFile();
			break;
		}
		case(0)://ÍË³ö
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