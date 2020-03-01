# include "workerManager.h"
# include "worker.h"
# include "employee.h"
# include "manager.h"
# include "boss.h"

WorkerManager::WorkerManager()
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);
	//1���ļ�������
	if (!ifs.is_open())
	{
		cout << "�����ļ������ڣ����ڳ�ʼ��~~~" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//2���ļ�������Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		cout << "�����ļ�Ϊ�գ�" << endl;
		this->m_EmpNum = 0;
		this->m_EmpArray = NULL;
		this->m_FileIsEmpty = true;
		ifs.close();
		return;
	}
	//3���ļ������Ҳ�Ϊ��
	int num = this->getEmpNum();
	this->m_FileIsEmpty = false;
	cout << "��ǰְ��������" << num<<endl;
	this->m_EmpNum = num;
	this->m_EmpArray = new Worker*[this->m_EmpNum];
	this->initEmp();

	cout << "�ļ���Ϣ���£�" << endl;
	for (int i = 0; i < this->m_EmpNum; i++)
	{
		cout << this->m_EmpArray[i]->m_Name << endl;
	}

	
}

void WorkerManager::showMenu()
{
	cout << "*********" << endl;
	cout << "*0���˳�*" << endl;
	cout << "*1������*" << endl;
	cout << "*2����ʾ*" << endl;
	cout << "*3��ɾ��*" << endl;
	cout << "*4���޸�*" << endl;
	cout << "*5������*" << endl;	
	cout << "*6������*" << endl;
	cout << "*7�����*" << endl;
	cout << "*********" << endl;
	cout << endl;
}


void WorkerManager::ExitSystem()
{

	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}


void WorkerManager::AddEmp()
{
	int num;
	cout << "�������ְ����������" << endl;
	cin >> num;
	if (num > 0)
	{
		int newSize = this->m_EmpNum + num;

		//���¿��ٿռ�
		Worker** newSpace = new Worker*[newSize];

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}
		}

		//���������
		for (int i = 0; i < num; i++)
		{
			int id;
			string name;
			int dept;

			cout << "�������" << i + 1 << "����ְ����ְ����ţ�" << endl;
			cin >> id;

			cout << "�������" << i + 1 << "����ְ����������" << endl;
			cin >> name;

			cout << "�������" << i + 1 << "����ְ���Ĳ���id(1��ͨԱ����2����3�ϰ�)��" << endl;
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


		//�ͷ�ԭ�пռ�
		delete[] this->m_EmpArray;

		//����ְ������ָ��
		this->m_EmpArray = newSpace;

		//����Ա������
		this->m_EmpNum = newSize;

		
		cout << "�ɹ������" << num << "��ְ����" << endl;
		this->save();
		this->m_FileIsEmpty = false; 
		cout << "�Ѵ��̣�" << endl;

		system("pause");
		system("cls");
	}
	else
	{
		cout << "��������" << endl;
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
		cout << "����Ϊ�գ�" << endl;
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
		cout << "û�����ݣ�" << endl;
	}
	
	else 
	{
		cout << "����Ҫɾ��Ա����ID��" << endl;
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
			cout << "ɾ���ɹ���" << endl;
			if (this->m_EmpNum == 0)
			{
				this->m_FileIsEmpty = true;
			}
		}
		else
		{
			cout << "��������" << endl;
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
		cout << "û�����ݣ�" << endl;
	}
	else
	{
		cout << "����Ҫ�޸�Ա����ID:" << endl;
		int id;
		cin >> id;

		int ret = this->isExist(id);
		if (ret != -1)
		{
			cout << "���ҳɹ���" << endl;
			cout << this->m_EmpArray[ret]->m_Id << "\t" << this->m_EmpArray[ret]->m_Name << endl;
			int newId;
			string name;
			int dept;
			cout << "��ID��" << endl;
			cin >> newId;
			cout << "������" << endl;
			cin >> name;
			cout << "���ţ���1����ͨԱ�� 2������ 3���ϰ壩" << endl;
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
			cout << "�޸ĳɹ���" << endl;
			cout << "�޸ĺ�" << endl;
			this->m_EmpArray[ret]->showInfo();

		}
		else
		{
			cout << "��������" << endl;
		}
	}
	system("pause");
	system("cls");
}


void WorkerManager::findEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "����Ϊ�գ�" << endl;
	}
	else
	{
		int select;
		cout << "������ҷ�ʽ����1��Ա��ID  2��Ա��������" << endl;
		cin >> select;
		if (select == 1)
		{
			int id;
			cout << "����Ա��ID��" << endl;
			cin >> id;
			int index = this->isExist(id);
			if (index != -1)
			{
				cout << "���ҳɹ�����Ϣ����" << endl;
				this->m_EmpArray[index]->showInfo();
			}
			else
			{
				cout << "���޴��ˣ�" << endl;
			}
		}
		else if(select == 2)
		{
			cout << "������ҵ�������" << endl;
			string name;
			cin >> name;
			bool flag = false;
			cout << "���ҽ�����£�" << endl;
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
				cout << "���޴��ˣ�" << endl;
			}
		}
		else
		{
			cout << "��������" << endl;
		}

	}
	system("pause");
	system("cls");
}



//����ְ���������
void WorkerManager::sortEmp()
{
	if (this->m_FileIsEmpty)
	{
		cout << "����Ϊ�գ�" << endl;
		system("pause");
		system("cls");

	}
	else
	{
		cout << "��������ʽ��" << endl;
		cout << "1�����������" << endl;
		cout << "2������Ž���" << endl;
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
			cout << "����ɹ���" << endl;
			this->save();
			this->showEmp();
		}
		else
		{
			cout << "��������" << endl;
			system("pause");
			system("cls");
		}
	}
}

void WorkerManager::cleanFile()
{
	cout << "ȷ�������" << endl;
	cout << "��1ȷ�ϣ�����������" << endl;
	int select;
	cin >> select;
	if (select == 1)
	{
		ofstream ofs(FILENAME,ios::trunc);//ɾ���ļ����ؽ�
		if (this->m_EmpArray != NULL)
		{
			//ɾ������ÿ������
			for (int i = 0; i < this->m_EmpNum; i++)
			{
				delete this->m_EmpArray[i];
				this->m_EmpArray[i] = NULL;
			}

			//ɾ����������ָ��
			delete[] this->m_EmpArray;
			this->m_EmpArray = NULL;
			this->m_EmpNum = 0;
			this->m_FileIsEmpty = true;
		}
		cout << "����ɹ���" << endl;
	}
	else
	{
	}
	system("pause");
	system("cls");
}

//��������
WorkerManager::~WorkerManager()
{
	if (this->m_EmpArray != NULL)
	{
		delete[] this->m_EmpArray;
		m_EmpArray = NULL;
	}
}
