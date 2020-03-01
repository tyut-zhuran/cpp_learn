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
	void speechDraw();//抽签
	void speechContest();//正式比赛
	void showScore();

	//保存记录
	void saveRecord();

	//加载记录
	void loadRecord();

	void showRecord();

	void clearRecord();


	//表示文件是否为空
	bool fileIsEmpty;




	//保存第一轮比赛选手编号
	vector<int> v1;
	//保存第二轮比赛选手编号
	vector<int> v2;

	//胜出 的前三名编号
	vector<int> vVictory;


	//map将编号和选手对应
	map<int, Speaker> m_Speaker;

	//比赛轮数 
	int m_Index;


	//保存往届记录
	map<int, vector<string>> m_Record;
};

