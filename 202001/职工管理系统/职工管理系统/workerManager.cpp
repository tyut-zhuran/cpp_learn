# include "workerManager.h"
# include "worker.h"
# include "employee.h"
# include "manager.h"
# include "boss.h"

WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);
	//1、文件不存在
	if (!ifs.is_open())
	{
		cout << "数据文件不存在！正在初始化~~~" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//2、文件存在且为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "数据文件为空！" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//3、文件存在且不为空
	int num = this->getEmpNum();
	this->m_FileIsEmpty = false;
	cout << "当前职工数量：" << num<<endl;
	this->m_EmpNum = num;
	this->m_EmpArray = new Worker*[this->m_EmpNum];
	this->initEmp();

	cout << "文件信息如下：" << endl;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		cout << this->m_EmpArray[i]->m_Name << endl;
	}

	
}

void WorkerManager::showMenu()
{
	cout << "*********" << endl;
	cout << "*0：退出*" << endl;
	cout << "*1：增加*" << endl;
	cout << "*2：显示*" << endl;
	cout << "*3：删除*" << endl;
	cout << "*4：修改*" << endl;
	cout << "*5：查找*" << endl;	
	cout << "*6：排序*" << endl;
	cout << "*7：清空*" << endl;
	cout << "*********" << endl;
	cout << endl;
}


void WorkerManager::ExitSystem()
{

	cout << "欢迎下次使用！" << endl;
	system("pause");
	exit(0);
}


void WorkerManager::AddEmp()
{
	int num;
	cout << "输入添加职工的数量：" << endl;
	cin >> num;
	if (num > 0)
	{
		int newSize = this->m_EmpNum + num;

		//重新开辟空间
		Worker** newSpace = new Worker*[newSize];

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//添加新数据
		for (int i = 0; i < num; i++)
		{
			int id;
			string name;
			int dept;

			cout << "请输入第" << i + 1 << "个新职工的职工编号：" << endl;
			cin >> id;

			cout << "请输入第" << i + 1 << "个新职工的姓名：" << endl;
			cin >> name;

			cout << "请输入第" << i + 1 << "个新职工的部门id(1普通员工，2经理，3老板)：" << endl;
			cin >> dept;

			Worker *worker = NULL;
			switch (dept)
			{
			case(1):

				worker = new Employee(id,name,dept);
				break;
			case(2):
				worker = new Manager(id,name,dept);
				break;
			case(3):
				worker = new Boss(id, name, dept);
				break;
			default:
				break;
			}

			newSpace[this->m_EmpNum + i] = worker; 

		}


		//释放原有空间
		delete[] this->m_EmpArray;

		//更新职工数组指向
		this->m_EmpArray = newSpace;

		//更新员工数量
		this->m_EmpNum = newSize;

		
		cout << "成功添加了" << num << "个职工！" << endl;
		this->save();
		this->m_FileIsEmpty = false; 
		cout << "已存盘！" << endl;

		system("pause");
		system("cls");
	}
	else
	{
		cout << "输入有误！" << endl;
	}

}

void WorkerManager::save()
{
	ofstream ofs;
	ofs.open(FILENAME,ios::out);

	for (int i = 0; i < this->m_EmpNum; i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;

	}
	ofs.close();
}


int WorkerManager::getEmpNum()
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);
	int num = 0; 
	int id;
	string name;
	int dept;
	while (ifs >> id && ifs >> name && ifs >> dept)
	{
		num++;
	}
	return num;
}

void WorkerManager::initEmp()
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);
	int id; 
	string name;
	int dept;
	int index = 0;
	while (ifs >> id && ifs >> name && ifs >> dept)
	{
		Worker *worker = NULL;
		switch (dept)
		{
		case(1):
			worker = new Employee(id,name,dept);
			break;
		case(2):
			worker = new Manager(id, name, dept);
			break;
		case(3):
			worker = new Boss(id, name, dept);
			break;
		default:
			break;
		}
		this->m_EmpArray[index] = worker;
		index++;
	}
	ifs.close();

}

void WorkerManager::showEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "数据为空！" << endl;
	}
	else
	{
		for (int i = 0; i < this->getEmpNum(); i++)
		{
			this->m_EmpArray[i]->showInfo();
		}
	}
	system("pause");
	system("cls");
}

void WorkerManager::delEmp()
{
	int id;
	
	if (this->m_FileIsEmpty)
	{
		cout << "没有数据！" << endl;
	}
	
	else 
	{
		cout << "输入要删除员工的ID：" << endl;
		cin >> id;
		int index = this->isExist(id);
		if (index != -1)
		{
			for (int i = index; i < this->m_EmpNum - 1; i++)
			{
				this->m_EmpArray[i] = this->m_EmpArray[i + 1];
			}
			this->m_EmpNum--;
			this->save();
			cout << "删除成功！" << endl;
			if (this->m_EmpNum == 0)
			{
				this->m_FileIsEmpty = true;
			}
		}
		else
		{
			cout << "输入有误！" << endl;
		}
	}
	
	system("pause");
	system("cls");
}

int WorkerManager::isExist(int id)
{
	int index = -1;
	for (int i = 0; i < this->getEmpNum(); i++)
	{
		if (id == this->m_EmpArray[i]->m_Id)
		{
			index = i;
			break;
		}
	}
	return index;
}


void WorkerManager::modifyEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "没有数据！" << endl;
	}
	else
	{
		cout << "输入要修改员工的ID:" << endl;
		int id;
		cin >> id;

		int ret = this->isExist(id);
		if (ret != -1)
		{
			cout << "查找成功！" << endl;
			cout << this->m_EmpArray[ret]->m_Id << "\t" << this->m_EmpArray[ret]->m_Name << endl;
			int newId;
			string name;
			int dept;
			cout << "新ID：" << endl;
			cin >> newId;
			cout << "姓名：" << endl;
			cin >> name;
			cout << "部门：（1、普通员工 2、经理 3、老板）" << endl;
			cin >> dept;
			Worker* worker = NULL;
			switch (dept)
			{
			case(1):
			{
				worker = new Employee(newId,name,dept);
				break;
			}

			case(2):
			{
				worker = new Manager(newId, name, dept);
				break;
			}

			case(3):
			{
				worker = new Boss(newId, name, dept);
				break;
			}
			default:break;
			}
			this->m_EmpArray[ret] = worker;
			this->save();
			cout << "修改成功！" << endl;
			cout << "修改后：" << endl;
			this->m_EmpArray[ret]->showInfo();

		}
		else
		{
			cout << "输入有误！" << endl;
		}
	}
	system("pause");
	system("cls");
}


void WorkerManager::findEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "数据为空！" << endl;
	}
	else
	{
		int select;
		cout << "输入查找方式：（1、员工ID  2、员工姓名）" << endl;
		cin >> select;
		if (select == 1)
		{
			int id;
			cout << "输入员工ID：" << endl;
			cin >> id;
			int index = this->isExist(id);
			if (index != -1)
			{
				cout << "查找成功！信息如下" << endl;
				this->m_EmpArray[index]->showInfo();
			}
			else
			{
				cout << "查无此人！" << endl;
			}
		}
		else if(select == 2)
		{
			cout << "输入查找的姓名：" << endl;
			string name;
			cin >> name;
			bool flag = false;
			cout << "查找结果如下：" << endl;
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				if (this->m_EmpArray[i]->m_Name == name)
				{
					flag = true;
					this->m_EmpArray[i]->showInfo();
				}
			}
			if (flag == false)
			{
				cout << "查无此人！" << endl;
			}
		}
		else
		{
			cout << "输入有误！" << endl;
		}

	}
	system("pause");
	system("cls");
}



//按照职工编号排序
void WorkerManager::sortEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "数据为空！" << endl;
		system("pause");
		system("cls");

	}
	else
	{
		cout << "输入排序方式：" << endl;
		cout << "1、按编号升序" << endl;
		cout << "2、按编号降序" << endl;
		int select = 0;
		cin >> select;
		if (select == 1 || select == 2)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				int minOrMax = i;
				for (int j = i + 1; j < this->m_EmpNum; j++)
				{
					if (select == 1)
					{
						if (this->m_EmpArray[minOrMax]->m_Id > this->m_EmpArray[j]->m_Id)
						{
							minOrMax = j;
						}
					}
					else
					{
						if (this->m_EmpArray[minOrMax]->m_Id < this->m_EmpArray[j]->m_Id)
						{
							minOrMax = j;
						}
					}
				}
				if (i != minOrMax)
				{
					Worker * worker = NULL;
					worker = this->m_EmpArray[i];
					this->m_EmpArray[i] = this->m_EmpArray[minOrMax];
					this->m_EmpArray[minOrMax] = worker;

				}
			}
			cout << "排序成功！" << endl;
			this->save();
			this->showEmp();
		}
		else
		{
			cout << "输入有误！" << endl;
			system("pause");
			system("cls");
		}
	}
}

void WorkerManager::cleanFile()
{
	cout << "确认清空吗？" << endl;
	cout << "按1确认，按其他返回" << endl;
	int select;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs(FILENAME,ios::trunc);//删除文件后重建
		if (this->m_EmpArray != NULL)
		{
			//删除堆区每个对象
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}

			//删除堆区数组指针
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "清除成功！" << endl;
	}
	else
	{
	}
	system("pause");
	system("cls");
}

//析构函数
WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		m_EmpArray = NULL;
	}
}
