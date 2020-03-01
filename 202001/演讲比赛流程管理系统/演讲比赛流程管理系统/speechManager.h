#pragma once

# include <iostream>
using namespace std;


# include <vector>
# include <map>
# include "speaker.h"

class SpeechManager
{
public:
	SpeechManager();
	~SpeechManager();


	
	void showMenu();
	void exitSystem();
	void initSpeech();
	void createSpeaker();
	void startSpeech();
	void speechDraw();//��ǩ
	void speechContest();//��ʽ����
	void showScore();

	//�����¼
	void saveRecord();

	//���ؼ�¼
	void loadRecord();

	void showRecord();

	void clearRecord();


	//��ʾ�ļ��Ƿ�Ϊ��
	bool fileIsEmpty;




	//�����һ�ֱ���ѡ�ֱ��
	vector<int> v1;
	//����ڶ��ֱ���ѡ�ֱ��
	vector<int> v2;

	//ʤ�� ��ǰ�������
	vector<int> vVictory;


	//map����ź�ѡ�ֶ�Ӧ
	map<int, Speaker> m_Speaker;

	//�������� 
	int m_Index;


	//���������¼
	map<int, vector<string>> m_Record;
};

