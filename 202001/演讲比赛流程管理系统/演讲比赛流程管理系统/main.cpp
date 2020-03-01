# include <iostream>
using namespace std;
# include "speechManager.h"
# include <ctime>


int main()
{
	srand((unsigned int )time(NULL));
	SpeechManager sm;


	//≤‚ ‘
	/*for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	{
		cout << it->first << " " << it->second.m_name << endl;
	}
*/

	int choice;
	while (1)
	{
		sm.showMenu();
		cout << " ‰»Î—°œÓ£∫" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:sm.exitSystem(); break;
		case 1:sm.startSpeech(); break;
		case 2:sm.showRecord(); break;
		case 3:sm.clearRecord(); break;
		default:system("cls"); break;
		}
	}
	system("pause");
	return 0;
}


