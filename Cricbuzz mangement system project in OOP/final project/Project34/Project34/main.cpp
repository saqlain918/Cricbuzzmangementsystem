#include"Header.h"
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	system("color E4");
	Match match;
	Team team;
	int choice=-1;
	string username, password;
	cout << "************************************************************************************************************************" << endl;
	cout << "\n		---------- >> WELCOME TO CRICBUZZ MANAGEMENT SYSTEM << ----------\n" << endl;
	cout << "************************************************************************************************************************" << endl;
	cout << "Enter Username: ";
	cin >> username;
	cout << "Enter Password: ";
	cin >> password;
	bool y = false;
	if (username == team.Username && password == team.Password)
	{
	y = true;
	}
	else
	{
	while (true)
	{
	cout << "INCORRECT INPUT " << endl;
	cout << "ENTER AGAIN " << endl;
	cout << "Enter Username: ";
	cin >> username;
	cout << "Enter Password: ";
	cin >> password;
	if(username == team.Username && password == team.Password)
	{
	y = true;
	break;
	}
	}
	}
    
	if (y == true)
	{
	while (choice != 12)
	{
    system("pause");
		system("cls");
		cout << "************************************************************************************************************************" << endl;
		cout << "\n		---------- >> WELCOME TO CRICBUZZ MANAGEMENT SYSTEM MENU << ----------\n" << endl;
		cout << "************************************************************************************************************************" << endl;
		cout << "                        1.  Conduct a Match" << endl;
		cout << "                        2.  Schedule a Match" << endl;
		cout << "                        3.  Display Matches" << endl;
		cout << "                        4.  Display Team" << endl;
		cout << "                        5.  Search Player" << endl;
		cout << "                        6.  Remove player" << endl;
		cout << "                        7.  Add player" << endl;
		cout << "                        8.  Update Team Captain" << endl;
		cout << "                        9.  Update Team Coach" << endl;
		cout << "                       10.  update team player" << endl;
		cout << "                       11.  display Captain_Coach" << endl;
		cout << "                       12.  Exit\n" << endl;
		cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n" << endl;
		cout << "    Enter Your Choice: ";
		cin >> choice;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore();
			cout << "Enter 1st number for calculation again :  ";
			cin >> choice;
		}

			if (choice == 1)
			{
				system("cls");
				match.Conduct_Match();
			}
			else if (choice == 2)
			{
				system("cls");
				match.Schedule_Match();
			}
			else if (choice == 3)
			{
				system("cls");
				team.Dispaly_Matches();
			}
			else if (choice == 4)
			{
				system("cls");
				team.Display_Team();
			}
			else if (choice == 5)
			{
				system("cls");
				team.Search_Player();
			}
			else if (choice == 6)
			{
				system("cls");
				team.Remove_Player();
			}
			else if (choice == 7)
			{
				system("cls");
				team.Add_Player();
			}
			else if (choice == 8)
			{
				system("cls");
				team.Update_Captain();
			}
			else if (choice == 9)
			{
				system("cls");
				team.Update_Coach();
			}
			else if (choice == 10)
			{
				system("cls");
				team.Update_Player();
			}
			else if (choice == 11)
			{
				system("cls");
				team.Captain_Coach();
			}
			else if (choice == 12)
			{
				cout << endl;
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				cout << "\n                           Thanks You For Using Our System ! Good  Bye " << endl;
				cout << endl;
				cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
				cout << endl;
			}
			else
				cout << "Invalid Choice" << endl;
		}
	}
}