#pragma once
# include <iostream>
using namespace std;

# include "worker.h"
# include <fstream>
# define FILENAME "empFile.txt"









class WorkerManager
{
public:
	WorkerManager();

	void showMenu();

	void ExitSystem();



	//���Ա��
	void AddEmp();

	//����
	void save();

	//ͳ���ļ��е�����
	int getEmpNum();
	void initEmp();
	void showEmp();

	void delEmp();

	int isExist(int id);



	void modifyEmp();


	void findEmp();


	void sortEmp();

	void cleanFile();


	~WorkerManager();


	int m_EmpNum;

	//ְ������ָ��
	Worker** m_EmpArray;

	//�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;


};



