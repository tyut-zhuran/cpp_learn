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



	//添加员工
	void AddEmp();

	//存盘
	void save();

	//统计文件中的人数
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

	//职工数组指针
	Worker** m_EmpArray;

	//文件是否为空
	bool m_FileIsEmpty;


};



