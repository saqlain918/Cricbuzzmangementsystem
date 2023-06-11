#include"Header.h"
#include<iostream>
#include<string>
using namespace std;
fstream file;
fstream File;
fstream newFile;
fstream NewFile;
fstream File2;
fstream File1;
void Player::player_count()
{
	NewFile.open("PlayerCount.txt", ios::in);
	if (NewFile.is_open())
	{
		NewFile >> NUMBER1;
		number1 = NUMBER1;
		NewFile >> NUMBER2;
		number2 = NUMBER2;
		NewFile >> NUMBER3;
		number3 = NUMBER3;
		NewFile >> NUMBER4;
		number4 = NUMBER4;
		NewFile >> NUMBER5;
		number5 = NUMBER5;
		cout << number1 << "  " << number2 << " " << number3 << "  " << number4 << " " << number5 << "\n\n";
	}
}
void Player::Add_Player()

{
	cout << "\n\t\t\t\t\t     **  Add Player **\n";
	int No, choice;
	player_count();
	cout << "1. Pakistan\n2. India\n3. England\n4. New Zealand\n5. Australia\n";
	cout << "\nEnter your choice: ";
	cin >> choice;

	if (choice == 1)
	{
		if (number1 < 11)
		{
			file.open("Pakistan.txt", ios::app);
			if (file.is_open())
			{


				cout << "\nEnter the new Data of Player  :-\n\nName of player : ";
				cin >> Name;
				cout << "Shirt No : ";
				cin >> Shirt_No;
				cout << "Total Matches Played : ";
				cin >> Match_Played;
				cout << "Total Runs : ";
				cin >> Total_Runs;
				cout << "Average Score : ";
				cin >> Average;
				cout << "ICC Rank T20 : ";
				cin >> ICC_Rank_T20;
				cout << "ICC Rank ODI : ";
				cin >> ICC_Rank_ODI;
				cout << "ICC Rank Test : ";
				cin >> ICC_Rank_Test;
				cout << "Total Wicket : ";
				cin >> Total_Wickets;
				file << number1 + 1 << "\t" << Name << "\t    " << Match_Played << "\t    " << Total_Runs << "\t    ";
				file << Average << "\t    " << ICC_Rank_T20 << "\t    " << ICC_Rank_ODI << "\t    " << ICC_Rank_Test << "\t    " << Shirt_No << "\t    " << Total_Wickets << endl;
				number1++;
			}
			file.close();

			cout << "\n\n\n\t\t\t\t     **  Player Added Successfully **\n";
		}
		else
		{
			cout << "\n\t\t\t\t\t     * Sorry! No space available *\n";
			cout << "All 11 players are Available in Team \n\n";
		}


	}


	else if (choice == 2)
	{
		if (number2 < 11)
		{
			file.open("India.txt", ios::app);
			if (file.is_open())
			{


				cout << "\nEnter the new Data of Player  :-\n\nName (first and last both) : ";
				cin >> Name;
				cout << "Shirt No : ";
				cin >> Shirt_No;
				cout << "Total Matches Played : ";
				cin >> Match_Played;
				cout << "Total Runs : ";
				cin >> Total_Runs;
				cout << "Average Score : ";
				cin >> Average;
				cout << "ICC Rank T20 : ";
				cin >> ICC_Rank_T20;
				cout << "ICC Rank ODI : ";
				cin >> ICC_Rank_ODI;
				cout << "ICC Rank Test : ";
				cin >> ICC_Rank_Test;
				cout << "Total Wicket : ";
				cin >> Total_Wickets;
				file << number1 + 1 << "\t" << Name << "\t    " << Match_Played << "\t    " << Total_Runs << "\t    ";
				file << Average << "\t    " << ICC_Rank_T20 << "\t    " << ICC_Rank_ODI << "\t    " << ICC_Rank_Test << "\t    " << Shirt_No << "\t    " << Total_Wickets << endl;
				number2++;
			}
			file.close();

			cout << "\n\n\n\t\t\t\t     **  Player Added Successfully **\n";
		}
		else
		{
			cout << "\n\t\t\t\t\t    * Sorry! No space available *\n";
			cout << "All 11 players are Available in Team \n\n";
		}


	}



	else if (choice == 3)
	{
		if (number3 < 11)
		{
			file.open("England.txt", ios::app);
			if (file.is_open())
			{


				cout << "\nEnter the new Data of Player  :-\n\nName (first and last both) : ";
				cin >> Name;
				cout << "Shirt No : ";
				cin >> Shirt_No;
				cout << "Total Matches Played : ";
				cin >> Match_Played;
				cout << "Total Runs : ";
				cin >> Total_Runs;
				cout << "Average Score : ";
				cin >> Average;
				cout << "ICC Rank T20 : ";
				cin >> ICC_Rank_T20;
				cout << "ICC Rank ODI : ";
				cin >> ICC_Rank_ODI;
				cout << "ICC Rank Test : ";
				cin >> ICC_Rank_Test;
				cout << "Total Wicket : ";
				cin >> Total_Wickets;
				file << number1 + 1 << "\t" << Name << "\t    " << Match_Played << "\t    " << Total_Runs << "\t    ";
				file << Average << "\t    " << ICC_Rank_T20 << "\t    " << ICC_Rank_ODI << "\t    " << ICC_Rank_Test << "\t    " << Shirt_No << "\t    " << Total_Wickets << endl;
				number3++;
			}
			file.close();

			cout << "\n\n\n\t\t\t\t     **  Player Added Successfully **\n";
		}
		else
		{
			cout << "\n\t\t\t\t\t    ----> Sorry! No space available <----\n";
			cout << "All 11 players are Available in Team \n\n";
		}


	}



	else if (choice == 4)
	{
		if (number4 < 11)
		{
			file.open("NewZealand.txt", ios::app);
			if (file.is_open())
			{


				cout << "\nEnter the new Data of Player  :-\n\nName (first and last both) : ";
				cin >> Name;
				cout << "Shirt No : ";
				cin >> Shirt_No;
				cout << "Total Matches Played : ";
				cin >> Match_Played;
				cout << "Total Runs : ";
				cin >> Total_Runs;
				cout << "Average Score : ";
				cin >> Average;
				cout << "ICC Rank T20 : ";
				cin >> ICC_Rank_T20;
				cout << "ICC Rank ODI : ";
				cin >> ICC_Rank_ODI;
				cout << "ICC Rank Test : ";
				cin >> ICC_Rank_Test;
				cout << "Total Wicket : ";
				cin >> Total_Wickets;
				file << number1 + 1 << "\t" << Name << "\t    " << Match_Played << "\t    " << Total_Runs << "\t    ";
				file << Average << "\t    " << ICC_Rank_T20 << "\t    " << ICC_Rank_ODI << "\t    " << ICC_Rank_Test << "\t    " << Shirt_No << "\t    " << Total_Wickets << endl;
				number4++;
			}
			file.close();

			cout << "\n\n\n\t\t\t\t     -----> Player Added Successfully <-----\n";
		}
		else
		{
			cout << "\n\t\t\t\t\t    * Sorry! No space available *\n";
			cout << "All 11 players are Available in Team \n\n";
		}


	}



	else if (choice == 5)
	{
		if (number5 < 11)
		{
			file.open("Australia.txt", ios::app);
			if (file.is_open())
			{


				cout << "\nEnter the new Data of Player  :-\n\nName (first and last both) : ";
				cin >> Name;
				cout << "Shirt No : ";
				cin >> Shirt_No;
				cout << "Total Matches Played : ";
				cin >> Match_Played;
				cout << "Total Runs : ";
				cin >> Total_Runs;
				cout << "Average Score : ";
				cin >> Average;
				cout << "ICC Rank T20 : ";
				cin >> ICC_Rank_T20;
				cout << "ICC Rank ODI : ";
				cin >> ICC_Rank_ODI;
				cout << "ICC Rank Test : ";
				cin >> ICC_Rank_Test;
				cout << "Total Wicket : ";
				cin >> Total_Wickets;
				file << number1 + 1 << "\t" << Name << "\t    " << Match_Played << "\t    " << Total_Runs << "\t    ";
				file << Average << "\t    " << ICC_Rank_T20 << "\t    " << ICC_Rank_ODI << "\t    " << ICC_Rank_Test << "\t    " << Shirt_No << "\t    " << Total_Wickets << endl;
				number5++;
			}
			file.close();

			cout << "\n\n\n\t\t\t\t     **  Player Added Successfully **\n";
		}
		else
		{
			cout << "\n\t\t\t\t\t    ----> Sorry! No space available <-----\n";
			cout << "All 11 players are Available in Team \n\n";
		}


	}
	system("pause");
	file.open("PlayerCount.txt", ios::out);
	if (file.is_open())
	{
		NUMBER1 = number1;
		file << NUMBER1 << endl;
		NUMBER2 = number2;
		file << NUMBER2 << endl;
		NUMBER3 = number3;
		file << NUMBER3 << endl;
		NUMBER4 = number4;
		file << NUMBER4 << endl;
		NUMBER5 = number5;
		file << NUMBER5 << endl;


	}
	file.close();

}
void Player::Remove_Player()
{
	player_count();
	int No, choice, check = 0;
	string name;
	cout << "1. Pakistan\n2. India\n3. England\n4. New Zealand\n5. Australia\n";
	cout << "\nEnter your choice: ";
	cin >> choice;

	if (choice == 1)
	{
		cout << "\nEnter the name of Player you want to remove : ";
		cin >> name;
		File.open("Pakistan.txt", ios::in);
		newFile.open("temp.txt", ios::out);
		if (File.is_open())
		{
			bool remove = false;
			while (!File.eof())
			{
				File >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
				File >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
				if (!File.eof())
				{

					if (Name == name)
					{
						cout << "\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
						cout << "ICC Rank ODI: ICC Rank Test:\n";
						cout << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t\t";
						cout << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\n" << endl;
						check = 1;
						remove = true;
						number1--;
						cout << "\n\n\n\t\t\t\t    ------>>  Player Removed Successfully <<------ \n";
					}
					else
					{
						if (remove == true)
						{
							No--;
						}
						newFile << No << "\t" << Name << Shirt_No << "\t    " << Match_Played << "\t    " << Total_Runs << "\t    ";
						newFile << Average << "\t    " << ICC_Rank_T20 << "\t    " << ICC_Rank_ODI << "\t    " << ICC_Rank_Test << "\t    " << Total_Wickets << endl;

					}


				}
			}

			if (check == 0)
			{
				cout << "\nPlayer Not Found!\n";
			}

		}

		newFile.close();
		File.close();

		//copy
		newFile.open("temp.txt", ios::in);
		File.open("Pakistan.txt", ios::out);
		string s;
		while (!newFile.eof())
		{
			getline(newFile, s);
			File << s << endl;
		}
		newFile.close();
		File.close();

		system("pause");

	}

	else if (choice == 2)
	{
		cout << "\nEnter the name of Player you want to search: ";
		cin >> name;
		File.open("India.txt", ios::in);
		newFile.open("temp.txt", ios::out);
		if (File.is_open())
		{
			bool remove = false;
			while (!File.eof())
			{
				File >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
				File >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
				if (!File.eof())
				{
					if (Name == name)
					{
						cout << "\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
						cout << "ICC Rank ODI: ICC Rank Test:\n";
						cout << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t\t";
						cout << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\n" << endl;
						check = 1;
						remove = true;
						number2--;
						cout << "\n\n\n\t\t\t\t     **  Player Removed Successfully **\n";
					}
					else
					{
						if (remove == true)
						{
							No--;
						}
						newFile << No << "\t" << Name << Shirt_No << "\t    " << Match_Played << "\t    " << Total_Runs << "\t    ";
						newFile << Average << "\t    " << ICC_Rank_T20 << "\t    " << ICC_Rank_ODI << "\t    " << ICC_Rank_Test << "\t    " << Total_Wickets << endl;

					}






				}
			}


			if (check == 0)
			{
				cout << "\nPlayer Not Found!\n";
			}
		}
		else
		{
			cout << "file not open \n";
			system("pause");
		}

		newFile.close();
		File.close();

		//copy
		newFile.open("temp.txt", ios::in);
		File.open("India.txt", ios::out);
		string s;
		while (!newFile.eof())
		{
			getline(newFile, s);
			File << s << endl;
		}
		newFile.close();
		File.close();

		system("pause");

	}

	else if (choice == 3)
	{
		cout << "\nEnter the name of Player you want to search: ";
		cin >> name;
		File.open("England.txt", ios::in);
		newFile.open("temp.txt", ios::out);
		if (File.is_open())
		{
			bool remove = false;
			while (!File.eof())
			{
				File >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
				File >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
				if (!File.eof())
				{

					if (Name == name)
					{
						cout << "\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
						cout << "ICC Rank ODI: ICC Rank Test:\n";
						cout << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t\t";
						cout << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\n" << endl;
						check = 1;
						remove = true;
						number3--;
						cout << "\n\n\n\t\t\t\t     **  Player Removed Successfully **\n";
					}
					else
					{
						if (remove == true)
						{
							No--;
						}
						newFile << No << "\t" << Name << Shirt_No << "\t    " << Match_Played << "\t    " << Total_Runs << "\t    ";
						newFile << Average << "\t    " << ICC_Rank_T20 << "\t    " << ICC_Rank_ODI << "\t    " << ICC_Rank_Test << "\t    " << Total_Wickets << endl;

					}




				}
			}

			if (check == 0)
			{
				cout << "\nPlayer Not Found!\n";
			}

		}

		newFile.close();
		File.close();

		//copy
		newFile.open("temp.txt", ios::in);
		File.open("England.txt", ios::out);
		string s;
		while (!newFile.eof())
		{
			getline(newFile, s);
			File << s << endl;
		}
		newFile.close();
		File.close();

		system("pause");

	}

	else if (choice == 4)
	{
		cout << "\nEnter the name of Player you want to search: ";
		cin >> name;
		File.open("NewZealand.txt", ios::in);
		newFile.open("temp.txt", ios::out);
		if (File.is_open())
		{
			bool remove = false;
			while (!File.eof())
			{
				File >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
				File >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
				if (!File.eof())
				{
					if (Name == name)
					{
						cout << "\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
						cout << "ICC Rank ODI: ICC Rank Test:\n";
						cout << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t\t";
						cout << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\n" << endl;
						check = 1;
						remove = true;
						number4--;
						cout << "\n\n\n\t\t\t\t     **  Player Removed Successfully **\n";
					}
					else
					{
						if (remove == true)
						{
							No--;
						}
						newFile << No << "\t" << Name << Shirt_No << "\t    " << Match_Played << "\t    " << Total_Runs << "\t    ";
						newFile << Average << "\t    " << ICC_Rank_T20 << "\t    " << ICC_Rank_ODI << "\t    " << ICC_Rank_Test << "\t    " << Total_Wickets << endl;

					}




				}
			}

			if (check == 0)
			{
				cout << "\nPlayer Not Found!\n";
			}

		}

		newFile.close();
		File.close();

		//copy
		newFile.open("temp.txt", ios::in);
		File.open("NewZealand.txt", ios::out);
		string s;
		while (!newFile.eof())
		{
			getline(newFile, s);
			File << s << endl;
		}
		newFile.close();
		File.close();

		system("pause");

	}

	else if (choice == 5)
	{
		cout << "\nEnter the name of Player you want to search: ";
		cin >> name;
		File.open("Australia.txt", ios::in);
		newFile.open("temp.txt", ios::out);
		if (File.is_open())
		{
			bool remove = false;
			while (!File.eof())
			{
				File >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
				File >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
				if (!File.eof())
				{
					if (Name == name)
					{
						cout << "\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
						cout << "ICC Rank ODI: ICC Rank Test:\n";
						cout << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t\t";
						cout << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\n" << endl;
						check = 1;
						remove = true;
						number5--;
						cout << "\n\n\n\t\t\t\t     **  Player Removed Successfully **\n";
					}
					else
					{
						if (remove == true)
						{
							No--;
						}
						newFile << No << "\t" << Name << Shirt_No << "\t    " << Match_Played << "\t    " << Total_Runs << "\t    ";
						newFile << Average << "\t    " << ICC_Rank_T20 << "\t    " << ICC_Rank_ODI << "\t    " << ICC_Rank_Test << "\t    " << Total_Wickets << endl;
					}




				}
			}

			if (check == 0)
			{
				cout << "\nPlayer Not Found!\n";
			}

		}

		newFile.close();
		File.close();

		//copy
		newFile.open("temp.txt", ios::in);
		File.open("Australia.txt", ios::out);
		string s;
		while (!newFile.eof())
		{
			getline(newFile, s);
			File << s << endl;
		}
		newFile.close();
		File.close();

		system("pause");

	}

	File.open("PlayerCount.txt", ios::out);
	if (File.is_open())
	{
		NUMBER1 = number1;
		File << NUMBER1 << endl;
		NUMBER2 = number2;
		File << NUMBER2 << endl;
		NUMBER3 = number3;
		File << NUMBER3 << endl;
		NUMBER4 = number4;
		File << NUMBER4 << endl;
		NUMBER5 = number5;
		File << NUMBER5 << endl;



	}
	File.close();

}
void Player::Search_Player()
{
	system("cls");
	int No, choice, check = 0;
	string name;
	cout << "1. Pakistan\n2. India\n3. England\n4. New Zealand\n5. Australia\n";
	cout << "\nEnter your choice: ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "\nEnter the name of Player you want to search: ";
		cin >> name;
		file.open("Pakistan.txt", ios::in);
		if (file.is_open())
		{
			while (!file.eof())
			{
				file >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
				file >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
				if (Name == name)
				{
					cout << "\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
					cout << "ICC Rank ODI: ICC Rank Test:\n";
					cout << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t\t";
					cout << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\n" << endl;
					check = 1;
				}
			}
			file.close();
			if (check == 0)
			{
				cout << "\nPlayer Not Found!\n";
			}
		}
	}
	else if (choice == 2)
	{
		cout << "\nEnter the name of Player you want to search: ";
		cin >> name;
		file.open("India.txt", ios::in);
		if (file.is_open())
		{
			while (!file.eof())
			{
				file >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
				file >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
				if (Name == name)
				{
					cout << "\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
					cout << "ICC Rank ODI: ICC Rank Test:\n";
					cout << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t\t";
					cout << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\n" << endl;
					check = 1;
				}
			}
			file.close();
			if (check == 0)
			{
				cout << "\nPlayer Not Found!\n";
			}
		}
	}
	else if (choice == 3)
	{
		cout << "\nEnter the name of Player you want to search: ";
		cin >> name;
		file.open("England.txt", ios::in);
		if (file.is_open())
		{
			while (!file.eof())
			{
				file >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
				file >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
				if (Name == name)
				{
					cout << "\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
					cout << "ICC Rank ODI: ICC Rank Test:\n";
					cout << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t\t";
					cout << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\n" << endl;
					check = 1;
				}
			}
			file.close();
			if (check == 0)
			{
				cout << "\nPlayer Not Found!\n";
			}
		}
	}
	else if (choice == 4)
	{
		cout << "\nEnter the name of Player you want to search: ";
		cin >> name;
		file.open("NewZealand.txt", ios::in);
		if (file.is_open())
		{
			while (!file.eof())
			{
				file >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
				file >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
				if (Name == name)
				{
					cout << "\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
					cout << "ICC Rank ODI: ICC Rank Test:\n";
					cout << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t\t";
					cout << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\n" << endl;
					check = 1;
				}
			}
			file.close();
			if (check == 0)
			{
				cout << "\nPlayer Not Found!\n";
			}
		}
	}
	else if (choice == 5)
	{
		cout << "\nEnter the name of Player you want to search : ";
		cin >> name;
		file.open("Australia.txt", ios::in);
		if (file.is_open())
		{
			while (!file.eof())
			{
				file >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
				file >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
				if (Name == name)
				{
					cout << "\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
					cout << "ICC Rank ODI: ICC Rank Test:\n";
					cout << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t\t";
					cout << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\n" << endl;
					check = 1;
				}
			}
			file.close();
			if (check == 0)
			{
				cout << "\nPlayer Not Found!\n";
			}
		}
	}
	else
		cout << "Invalid Choice!\n";
	system("pause");
}
void Player::Update_Player()
{
	int No, choice, check = 0;
	string name;
	cout << "1. Pakistan\n2. India\n3. England\n4. New Zealand\n5. Australia\n";
	cout << "\nEnter your choice: ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "\nEnter the name of Player you want to update : ";
		cin >> name;
		file.open("Pakistan.txt", ios::in);
		File2.open("temp.txt", ios::out);
		if (file.is_open())
		{
			while (!file.eof())
			{
				file >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
				file >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
				if (!file.eof())
				{
					if (Name == name)
					{
						cout << "\nUpdate the DATA of the player : " << endl;
						cout << "New name of player : ";
						cin >> Name;
						cout << "Shirt No : ";
						cin >> Shirt_No;
						cout << " Total Matches Played : ";
						cin >> Match_Played;
						cout << "Total Runs : ";
						cin >> Total_Runs;
						cout << "Average Score : ";
						cin >> Average;
						cout << "ICC Rank T20 : ";
						cin >> ICC_Rank_T20;
						cout << "ICC Rank ODI:";
						cin >> ICC_Rank_ODI;
						cout << "ICC Rank Test : ";
						cin >> ICC_Rank_Test;
						cout << "Enter total wickets : ";
						cin >> Total_Wickets;

						cout << "\nUpdated DATA of player is  :-\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
						cout << "ICC Rank ODI: ICC Rank Test:\n";
						File2 << No << "\t" << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t    ";
						File2 << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\t" << Total_Wickets << endl;
						check = 1;
					}
					else
					{
						File2 << No << "\t" << Name << "\t    " << Shirt_No << "\t    " << Match_Played << "\t    " << Total_Runs << "\t    ";
						File2 << Average << "\t    " << ICC_Rank_T20 << "\t    " << ICC_Rank_ODI << "\t    " << ICC_Rank_Test << "\t    " << Total_Wickets << endl;
					}
				}
			}
			File2.close();
			file.close();

			//copy
			file.open("temp.txt", ios::in);
			File2.open("Pakistan.txt", ios::out);
			string s;
			while (!file.eof())
			{
				getline(file, s);
				File2 << s << endl;
			}
			File2.close();
			file.close();
			if (check == 0)
			{
				cout << "\nPlayer Not Found!\n";
			}
		}
	}
	else if (choice == 2)
	{
		{
			cout << "\nEnter the name of Player you want to update : ";
			cin >> name;
			file.open("India.txt", ios::in);
			File2.open("temp.txt", ios::out);
			if (file.is_open())
			{
				while (!file.eof())
				{
					file >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
					file >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
					if (!file.eof())
					{
						if (Name == name)
						{
							cout << "\nUpdate the DATA of the player : " << endl;
							cout << "New name of player : ";
							cin >> Name;
							cout << "Shirt No : ";
							cin >> Shirt_No;
							cout << " Total Matches Played : ";
							cin >> Match_Played;
							cout << "Total Runs : ";
							cin >> Total_Runs;
							cout << "Average Score : ";
							cin >> Average;
							cout << "ICC Rank T20 : ";
							cin >> ICC_Rank_T20;
							cout << "ICC Rank ODI:";
							cin >> ICC_Rank_ODI;
							cout << "ICC Rank Test : ";
							cin >> ICC_Rank_Test;
							cout << "Enter total wickets : ";
							cin >> Total_Wickets;

							cout << "\nUpdated DATA of player is  :-\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
							cout << "ICC Rank ODI: ICC Rank Test:\n";
							File2 << No << "\t" << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t    ";
							File2 << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\t" << Total_Wickets << endl;
						}
						else
						{
							File2 << No << "\t" << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t    ";
							File2 << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\t" << Total_Wickets << endl;
						}
					}
				}
				File2.close();
				file.close();

				//copy
				file.open("temp.txt", ios::in);
				File2.open("India.txt", ios::out);
				string s;
				while (!file.eof())
				{
					getline(file, s);
					File2 << s << endl;
				}
				File2.close();
				file.close();
				if (check == 0)
				{
					cout << "\nPlayer Not Found!\n";
				}
			}
		}
	}
	else if (choice == 3)
	{
		{
			cout << "\nEnter the name of Player you want to update : ";
			cin >> name;
			file.open("England.txt", ios::in);
			File2.open("temp.txt", ios::out);
			if (file.is_open())
			{
				while (!file.eof())
				{
					file >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
					file >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
					if (!file.eof())
					{
						if (Name == name)
						{
							cout << "\nUpdate the DATA of the player : " << endl;
							cout << "New name of player : ";
							cin >> Name;
							cout << "Shirt No : ";
							cin >> Shirt_No;
							cout << " Total Matches Played : ";
							cin >> Match_Played;
							cout << "Total Runs : ";
							cin >> Total_Runs;
							cout << "Average Score : ";
							cin >> Average;
							cout << "ICC Rank T20 : ";
							cin >> ICC_Rank_T20;
							cout << "ICC Rank ODI:";
							cin >> ICC_Rank_ODI;
							cout << "ICC Rank Test : ";
							cin >> ICC_Rank_Test;
							cout << "Enter total wickets : ";
							cin >> Total_Wickets;

							cout << "\nUpdated DATA of player is  :-\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
							cout << "ICC Rank ODI: ICC Rank Test:\n";
							File2 << No << "\t" << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t    ";
							File2 << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\t" << Total_Wickets << endl;
							check = 1;
						}
						else
						{
							File2 << No << "\t" << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t    ";
							File2 << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\t" << Total_Wickets << endl;
						}
					}
				}
				File2.close();
				file.close();

				//copy
				file.open("temp.txt", ios::in);
				File2.open("England.txt", ios::out);
				string s;
				while (!file.eof())
				{
					getline(file, s);
					File2 << s << endl;
				}
				File2.close();
				file.close();
				if (check == 0)
				{
					cout << "\nPlayer Not Found!\n";
				}
			}
		}
	}
	else if (choice == 4)
	{
		{
			cout << "\nEnter the name of Player you want to update : ";
			cin >> name;
			file.open("NewZealand.txt", ios::in);
			File2.open("temp.txt", ios::out);
			if (file.is_open())
			{
				while (!file.eof())
				{
					file >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
					file >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
					if (!file.eof())
					{
						if (Name == name)
						{
							cout << "\nUpdate the DATA of the player : " << endl;
							cout << "New name of player : ";
							cin >> Name;
							cout << "Shirt No : ";
							cin >> Shirt_No;
							cout << " Total Matches Played : ";
							cin >> Match_Played;
							cout << "Total Runs : ";
							cin >> Total_Runs;
							cout << "Average Score : ";
							cin >> Average;
							cout << "ICC Rank T20 : ";
							cin >> ICC_Rank_T20;
							cout << "ICC Rank ODI:";
							cin >> ICC_Rank_ODI;
							cout << "ICC Rank Test : ";
							cin >> ICC_Rank_Test;
							cout << "Enter total wickets : ";
							cin >> Total_Wickets;

							cout << "\nUpdated DATA of player is  :-\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
							cout << "ICC Rank ODI: ICC Rank Test:\n";
							File2 << No << "\t" << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t    ";
							File2 << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\t" << Total_Wickets << endl;
							check = 1;
						}
						else
						{
							File2 << No << "\t" << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t    ";
							File2 << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\t" << Total_Wickets << endl;
						}
					}
				}
				File2.close();
				file.close();

				//copy
				file.open("temp.txt", ios::in);
				File2.open("NewZealand.txt", ios::out);
				string s;
				while (!file.eof())
				{
					getline(file, s);
					File2 << s << endl;
				}
				File2.close();
				file.close();
				if (check == 0)
				{
					cout << "\nPlayer Not Found!\n";
				}
			}
		}
	}
	else if (choice == 5)
	{
		{
			cout << "\nEnter the name of Player you want to update : ";
			cin >> name;
			file.open("aus.txt", ios::in);
			File2.open("temp.txt", ios::out);
			if (file.is_open())
			{
				while (!file.eof())
				{
					file >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
					file >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
					if (!file.eof())
					{
						if (Name == name)
						{
							cout << "\nUpdate the DATA of the player : " << endl;
							cout << "New name of player : ";
							cin >> Name;
							cout << "Shirt No : ";
							cin >> Shirt_No;
							cout << " Total Matches Played : ";
							cin >> Match_Played;
							cout << "Total Runs : ";
							cin >> Total_Runs;
							cout << "Average Score : ";
							cin >> Average;
							cout << "ICC Rank T20 : ";
							cin >> ICC_Rank_T20;
							cout << "ICC Rank ODI:";
							cin >> ICC_Rank_ODI;
							cout << "ICC Rank Test : ";
							cin >> ICC_Rank_Test;
							cout << "Enter total wickets : ";
							cin >> Total_Wickets;

							cout << "\nUpdated DATA of player is  :-\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
							cout << "ICC Rank ODI: ICC Rank Test:\n";
							File2 << No << "\t" << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t    ";
							File2 << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\t" << Total_Wickets << endl;
							check = 1;
						}
						else
						{
							File2 << No << "\t" << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t    ";
							File2 << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << ICC_Rank_Test << "\t" << Total_Wickets << endl;
						}
					}
				}
				File2.close();
				file.close();

				//copy
				file.open("temp.txt", ios::in);
				File2.open("aus.txt", ios::out);
				string s;
				while (!file.eof())
				{
					getline(file, s);
					File2 << s << endl;
				}
				File2.close();
				file.close();
				if (check == 0)
				{
					cout << "\nPlayer Not Found!\n";
				}
			}
		}

	}
}
void Match::Conduct_Match()
{
	int choice;
	Total_Score_T1 = 0;
	Total_Score_T2 = 0;
	cout << "1. Conduct an Already Schedule Match\n";
	cout << "2. Schedule a New Match\n";
Conduct_Match_Label:
	cout << "\nEnter Your Choice: ";
	cin >> choice;
	system("cls");
	if (choice == 1)
	{
		file.open("Scheduled_Matches.txt", ios::in);
		if (file.is_open())
		{
			cout << "\nScheduled Matches: \n" << endl;
			cout << "No  Team1\t  \tTeam2\t\tDate\t\tVenue\n" << endl;
			while (!file.eof())
			{
				file >> n >> Team1 >> Team2 >> Date >> Venue;
				cout << n << ".  " << Team1 << "\tVS\t" << Team2 << "\t" << Date << "\t" << Venue << endl;
			}
			file.close();
		}
		cout << "\nEnter Your Choice: ";
		cin >> choice;
		cout << "Enter Match Type: ";
		cin >> Match_Type;
		if (Match_Type == "odi")
			Over = 50;
		else
			Over = 20;
		system("cls");
		file.open("Scheduled_Matches.txt", ios::in);
		if (file.is_open())
		{
			while (!file.eof())
			{
				file >> n >> Team1 >> Team2 >> Date >> Venue;
				if (n == choice)
				{
					cout << "\t" << Team1 << "\tVS\t" << Team2 << endl;
					cout << "\n   Date: " << Date << "\t\tVenue: " << Venue << "\n" << endl;
					cout << Team1 << " Batting\n" << endl;
				}
			}
			file.close();
		}
		for (int i = 1; i <= Over; i++)
		{
			cout << "Over " << i << ": ";
			for (int i = 0; i < 6; i++)
			{
				Total_Score_T1 += (rand() % 7);
				cout << (rand() % 7) << " ";
			}
			cout << endl;
		}
		Total_Wickets_T1 = (rand() % 10);
		cout << "\nTotal Score is " << Total_Score_T1 << endl;
		cout << "Total Wickets are " << Total_Wickets_T1 << endl;
		system("pause");
		system("cls");
		file.open("Scheduled_Matches.txt", ios::in);
		if (file.is_open())
		{
			while (!file.eof())
			{
				file >> n >> Team1 >> Team2 >> Date >> Venue;
				if (n == choice)
				{
					cout << "\t" << Team1 << "\tVS\t" << Team2 << endl;
					cout << "\n   Date: " << Date << "\t\tVenue: " << Venue << "\n" << endl;
					cout << Team2 << " Batting\n" << endl;
				}
			}
			file.close();
		}
		for (int i = 1; i <= Over; i++)
		{
			cout << "Over " << i << ": ";
			for (int i = 0; i < 6; i++)
			{
				Total_Score_T2 += (rand() % 7);
				cout << (rand() % 7) << " ";
			}
			cout << endl;
		}
		Total_Wickets_T2 = (rand() % 10);
		cout << "\nTotal Score is " << Total_Score_T2 << endl;
		cout << "Total Wickets are " << Total_Wickets_T2 << endl;
		system("pause");
		system("cls");
		file.open("Scheduled_Matches.txt", ios::in);
		if (file.is_open())
		{
			while (!file.eof())
			{
				file >> n >> Team1 >> Team2 >> Date >> Venue;
				if (n == choice)
				{
					cout << "\t" << Team1 << "\tVS\t" << Team2 << endl;
					cout << "\n   Date: " << Date << "\t\tVenue: " << Venue << "\n" << endl;
					cout << "Match Summary:\n" << endl;
					cout << Team1 << ": " << Total_Score_T1 << "/" << Total_Wickets_T1 << endl;
					cout << Team2 << ": " << Total_Score_T2 << "/" << Total_Wickets_T2 << endl;
					if (Total_Score_T1 > Total_Score_T2)
					{
						cout << "\n" << Team1 << "Wins!" << endl;
						Update_Team_Ranking(Team1, Team2);
					}
					else if (Total_Score_T1 == Total_Score_T2)
						cout << "\nGame Draw!" << endl;
					else
					{
						cout << "\n" << Team2 << " Wins!" << endl;
						Update_Team_Ranking(Team2, Team1);  //update team ranking function call
					}

				}
			}
			file.close();
			Update_Player_Ranking(); //update player rank
			Update_World_Records(Team1, Team2, Date, Venue, Match_Type); //update world record function call
		}
		file.open("Scheduled_Matches.txt", ios::in);
		if (file.is_open())
		{
			while (!file.eof())
			{
				file >> n >> Team1 >> Team2 >> Date >> Venue;
				if (n == choice)
				{
					File1.open("Recent_Matches.txt", ios::in);
					if (File1.is_open())
					{
						string temp;
						while (!File1.eof())
						{
							File1 >> n1 >> temp >> temp >> temp >> temp >> temp >> temp;
						}
						File1.close();
					}
					File1.open("Recent_Matches.txt", ios::app);
					if (File1.is_open())
					{
						n1++;
						File1 << endl << n1 << " " << Team1 << "\t" << Team2 << "\t" << Date << "\t" << Venue << "\t";
						File1 << Total_Score_T1 << "/" << Total_Wickets_T1 << "\t" << Total_Score_T2 << "/" << Total_Wickets_T2;
						File1.close();
					}
				}
			}
			file.close();
		}
	}
	else if (choice == 2)
		Schedule_Match();
	else
	{
		cout << "\nInvalid Choice\n";
		goto Conduct_Match_Label;
	}


	system("pause");

}
void Match::Schedule_Match()
{
	file.open("Scheduled_Matches.txt", ios::in);
	if (file.is_open())
	{
		while (!file.eof())
		{
			file >> n >> Team1 >> Team2 >> Date >> Venue;
		}
		file.close();
	}
	cout << "Enter the name first Team: ";
	cin >> Team1;
	cout << "Enter the name second Team: ";
	cin >> Team2;
	cout << "Enter the Date of Match: ";
	cin >> Date;
	cout << "Enter the Venue for Match: ";
	cin >> Venue;
	file.open("Scheduled_Matches.txt", ios::app);
	if (file.is_open())
	{
		n++;
		while (!file.eof())
		{
			file << endl << n << "   " << Team1 << "   " << Team2 << "   " << Date << "   " << Venue;
			file.close();
			return;
		}
	}
}

void Match::Update_World_Records(string T1, string T2, string  date, string venue, string matchType)
{

	int mostRuns, highestScore, mostSixes, mostFours, mostCenturies, highestBattingavg, bestBattingrate, mostWickets, bestBowlingavg;
	string bestBowling;
	cout << "\nUPDATE MATCH DATA IN WORLD RECORDS : " << endl;
	cout << "Enter most runs : ";
	cin >> mostRuns;
	cout << "Enter highest Score : ";
	cin >> highestScore;
	cout << "Enter most Sixes : ";
	cin >> mostSixes;
	cout << "Enter most Fours : ";
	cin >> mostFours;
	cout << "Enter most Centuries : ";
	cin >> mostCenturies;
	cout << "Enter highest  Battingavg : ";
	cin >> highestBattingavg;
	cout << "Enter best Batting rate : ";
	cin >> bestBattingrate;
	cout << "Enter most Wickets : ";
	cin >> mostWickets;
	cout << "Enter best Bowlingavg : ";
	cin >> bestBowlingavg;
	cout << "Enter best bowling : ";
	cin.ignore();
	getline(cin, bestBowling);

	file.open("WorldRecords.txt", ios::app);
	file << T1 << "\t" << T2 << "\t" << date << "\t" << venue << "\t" << matchType << endl;
	file << bestBowling << "\t" << mostRuns << "\t" << highestScore << "\t" << mostSixes << "\t" << mostFours << "\t" << mostCenturies << "\t" << highestBattingavg << "\t" << bestBattingrate << "\t" << mostWickets << "\t" << bestBowlingavg << endl;
	file.close();
	cout << "World Record Updated" << endl;
}
void Match::Update_Team_Ranking(string team1, string team2)
{
	string teamName;
	int rank;
	int tempRank = 0, tempRank1 = 0, check = 0, tempRank2 = 0, check1 = 0;
	ifstream file;
	ofstream newfile;
	file.open("teamRanking.txt");
	while (!file.eof())
	{
		file >> rank >> teamName;
		if (team1 == teamName)
		{
			tempRank = rank;
			check = 1;
		}
		else if (teamName == team2)
		{
			tempRank1 = rank;
		}
	}
	file.close();
	file.open("teamRanking.txt");
	newfile.open("temp.txt");
	while (!file.eof())
	{
		file >> rank >> teamName;
		if (team1 == teamName)
		{
			newfile << tempRank1 << "\t" << teamName << endl;
		}
		else if (team2 == teamName)
		{
			newfile << tempRank << "\t" << teamName << endl;
		}
		else if (teamName != team2 && teamName != team1)
		{
			newfile << rank << "\t" << teamName << endl;
		}
	}
	file.close();
	newfile.close();

	file.open("temp.txt");
	newfile.open("teamRanking.txt");
	while (!file.eof())
	{
		file >> rank >> teamName;
		newfile << rank << "\t" << teamName << endl;
	}
	file.close();
	newfile.close();
	cout << "team Ranking Updated" << endl;

}
void Match::Update_Player_Ranking()
{
	string teams[5] = { "Pakistan.txt","India.txt","aus.txt","England.txt","NewZealand.txt" };
	Player a[55];
	int Jplus = 0;
	fstream teamFile;
	string tempString;
	for (int i = 0; i < 55; i++)
	{
		if ((i) % 11 == 0)
		{
			teamFile.close();


			teamFile.open(teams[Jplus]);
			Jplus++;
		}

		teamFile >> a[i].No >> a[i].Name >> a[i].Shirt_No >> a[i].Match_Played >> a[i].Total_Runs >> a[i].Average >> a[i].ICC_Rank_T20;
		teamFile >> a[i].ICC_Rank_ODI >> a[i].ICC_Rank_Test >> a[i].Total_Wickets;
	}
	teamFile.close();

	int tempRuns;
	for (int i = 0; i < 55; i++)
	{
		for (int j = 0; j < 54; j++)
		{
			if (a[j].Total_Runs > a[j + 1].Total_Runs)
			{
				tempRuns = a[j].Total_Runs;
				a[j].Total_Runs = a[j + 1].Total_Runs;
				a[j + 1].Total_Runs = tempRuns;
			}
		}
	}
	teamFile.open("PlayerRanking.txt", ios::out);
	for (int i = 54; i >= 0; i--)
	{
		teamFile << i + 1 << "\t" << a[i].Name << "\t" << a[i].Shirt_No << "\t" << a[i].Match_Played << "\t" << a[i].Total_Runs << "\t" << a[i].Average << "\t" << a[i].ICC_Rank_T20 << "\t";
		teamFile << a[i].ICC_Rank_ODI << "\t" << a[i].ICC_Rank_Test << "\t" << a[i].Total_Wickets << endl;
	}
	teamFile.close();
	cout << "Player Ranking Updated" << endl;
}
void Match::Display_Upcoming_Matches()
{
	file.open("Scheduled_Matches.txt", ios::in);
	if (file.is_open())
	{
		cout << "\nUpcoming Matches: \n" << endl;
		cout << "No  Team1\t  \tTeam2\t\tDate\t\tVenue\n" << endl;
		while (!file.eof())
		{
			file >> n >> Team1 >> Team2 >> Date >> Venue;
			cout << n << ".  " << Team1 << "\tVS\t" << Team2 << "\t" << Date << "\t" << Venue << endl;
		}
		file.close();
	}
	system("pause");
}
void Match::Display_Recent_Matches()
{
	string T1_Score, T2_Score;
	File1.open("Recent_Matches.txt", ios::in);
	if (File1.is_open())
	{
		cout << "\nRecent Matches: \n" << endl;
		cout << "No  Team1\t  \tTeam2\t\tDate\t\tVenue\t    Team1_Score\t    Team2_Score\n" << endl;
		while (!File1.eof())
		{
			File1 >> n >> Team1 >> Team2 >> Date >> Venue >> T1_Score >> T2_Score;
			cout << n << ".  " << Team1 << "\tVS\t" << Team2 << "\t" << Date << "\t" << Venue;
			cout << "\t    " << T1_Score << "\t    " << T2_Score << endl;
		}
		File1.close();
	}
	system("pause");
}
//display matches 
void Team::Dispaly_Matches()
{
	int choice;
	cout << "1. Display Recent Matches\n2. Display Upcoming Matches\n";
	cout << "\nEnter your choice: ";
	cin >> choice;
	if (choice == 1)
		objMatch.Display_Recent_Matches();
	else if (choice == 2)
		objMatch.Display_Upcoming_Matches();
	else
	{
		cout << "Invalid Input\n";
		system("pause");
	}
}
void Team::Captain_Coach()
{

	

		int i = 0, j = 0;
		system("cls");
		cout << "\n\t\t\t\t\t ** Displaying Captain and Coach **\n";
		string name, name2;
		File.open("Captain.txt", ios::in);
		while (!File.eof())
		{
			File >> name;
				cout << "\nTEAM." << i + 1 << " Captain is : " << name;

				i++;
			
		}
		cout << endl << endl;
		newFile.open("Coach.txt", ios::in);
		while (!newFile.eof())
		{
			newFile >> name2;
			
				cout << "\nTEAM." << j + 1 << " Coach is : " << name2;
				j++;
			
		}

		cout << endl << endl;
		system("pause");
	
}
void Team::Update_Captain()
{
	string name, a;
	int check_box = 0;
	
	int choice;
	cout << "1. Pakistan\n2. India\n3. England\n4. New Zealand\n5. Australia\n";
	cout << "\nEnter your choice: ";
	cin >> choice;


	if (choice == 1)
	{

		cout << "Enter the Name of Pakistan's Captain: ";
		cin >> name;

		File.open("Captain.txt", ios::in);
		newFile.open("temp.txt", ios::out);
		if (File.is_open())
		{
			while (!File.eof())
			{
				File >> Name;
				if (!File.eof())
				{
					if (name == Name)
					{

						cout << "Enter the Name of Pakistan's New Captain: ";
						cin >> a;
						newFile << a << endl;

						check_box = 1;
					}
					else
					{
						newFile << Name << endl;

					}
				}

			}
		}
		if (check_box == 0)
		{
			cout << "\nPlayer Not Found!\n";
		}
		newFile.close();
		File.close();
		if (check_box == 1)
		{
			//copy
			newFile.open("temp.txt", ios::in);
			File.open("Captain.txt", ios::out);
			string s;
			while (!newFile.eof())
			{
				getline(newFile, s);
				File << s << endl;
			}
			newFile.close();
			File.close();


			cout << "\nYour Team Captain is Successfully Updated!\n";
		}
	}
	else if (choice == 2)
	{


		cout << "Enter the Name of India's Captain: ";
		cin >> name;

		File.open("Captain.txt", ios::in);
		newFile.open("temp.txt", ios::out);
		if (File.is_open())
		{
			while (!File.eof())
			{
				File >> Name;
				if (!File.eof())
				{
					if (name == Name)
					{

						cout << "Enter the Name of India's New Captain: ";
						cin >> a;
						newFile << a << endl;

						check_box = 1;
					}
					else
					{
						newFile << Name << endl;

					}
				}

			}
		}
		if (check_box == 0)
		{
			cout << "\nPlayer Not Found!\n";
		}
		newFile.close();
		File.close();
		if (check_box == 1)
		{
			//copy
			newFile.open("temp.txt", ios::in);
			File.open("Captain.txt", ios::out);
			string s;
			while (!newFile.eof())
			{
				getline(newFile, s);
				File << s << endl;
			}
			newFile.close();
			File.close();


			cout << "\nYour Team Captain is Successfully Updated!\n";
		}
	}
	else if (choice == 3)
	{

		cout << "Enter the Name of England's Captain: ";
		cin >> name;

		File.open("Captain.txt", ios::in);
		newFile.open("temp.txt", ios::out);
		if (File.is_open())
		{
			while (!File.eof())
			{
				File >> Name;
				if (!File.eof())
				{
					if (name == Name)
					{

						cout << "Enter the Name of England's New Captain: ";
						cin >> a;
						newFile << a << endl;

						check_box = 1;
					}
					else
					{
						newFile << Name << endl;

					}
				}

			}
		}
		if (check_box == 0)
		{
			cout << "\nPlayer Not Found!\n";
		}
		newFile.close();
		File.close();
		if (check_box == 1)
		{
			//copy
			newFile.open("temp.txt", ios::in);
			File.open("Captain.txt", ios::out);
			string s;
			while (!newFile.eof())
			{
				getline(newFile, s);
				File << s << endl;
			}
			newFile.close();
			File.close();


			cout << "\nYour Team Captain is Successfully Updated!\n";
		}

	}
	else if (choice == 4)
	{

		cout << "Enter the Name of New Zealand's Captain: ";
		cin >> name;

		File.open("Captain.txt", ios::in);
		newFile.open("temp.txt", ios::out);
		if (File.is_open())
		{
			while (!File.eof())
			{
				File >> Name;
				if (!File.eof())
				{
					if (name == Name)
					{

						cout << "Enter the Name of New Zealand's New Captain: ";
						cin >> a;
						newFile << a << endl;

						check_box = 1;
					}
					else
					{
						newFile << Name << endl;

					}
				}

			}
		}
		if (check_box == 0)
		{
			cout << "\nPlayer Not Found!\n";
		}
		newFile.close();
		File.close();
		if (check_box == 1)
		{
			//copy
			newFile.open("temp.txt", ios::in);
			File.open("Captain.txt", ios::out);
			string s;
			while (!newFile.eof())
			{
				getline(newFile, s);
				File << s << endl;
			}
			newFile.close();
			File.close();


			cout << "\nYour Team Captain is Successfully Updated!\n";
		}

	}
	else if (choice == 5)
	{

		cout << "Enter the Name of Australia's Captain: ";
		cin >> name;

		File.open("Captain.txt", ios::in);
		newFile.open("temp.txt", ios::out);
		if (File.is_open())
		{
			while (!File.eof())
			{
				File >> Name;
				if (!File.eof())
				{
					if (name == Name)
					{

						cout << "Enter the Name of Australia's New Captain: ";
						cin >> a;
						newFile << a << endl;

						check_box = 1;
					}
					else
					{
						newFile << Name << endl;

					}
				}

			}
		}
		if (check_box == 0)
		{
			cout << "\nPlayer Not Found!\n";
		}
		newFile.close();
		File.close();
		if (check_box == 1)
		{
			//copy
			newFile.open("temp.txt", ios::in);
			File.open("Captain.txt", ios::out);
			string s;
			while (!newFile.eof())
			{
				getline(newFile, s);
				File << s << endl;
			}
			newFile.close();
			File.close();


			cout << "\nYour Team Captain is Successfully Updated!\n";
		}

	}
	else
		cout << "Invalid Choice" << endl;
	system("pause");
}
void Team::Update_Coach()
{
	string name, a;
	int check_box = 0;

	int choice;
	cout << "1. Pakistan\n2. India\n3. England\n4. New Zealand\n5. Australia\n";
	cout << "\nEnter your choice: ";
	cin >> choice;

	if (choice == 1)
	{

		cout << "Enter the Name of Pakistan's Coach: ";
		cin >> name;

		File.open("Coach.txt", ios::in);
		newFile.open("temp.txt", ios::out);
		if (File.is_open())
		{
			while (!File.eof())
			{
				File >> Name;
				if (!File.eof())
				{
					if (name == Name)
					{

						cout << "Enter the Name of Pakistan's New Coach: ";
						cin >> a;
						newFile << a << endl;

						check_box = 1;
					}
					else
					{
						newFile << Name << endl;

					}
				}

			}
		}
		if (check_box == 0)
		{
			cout << "\nPlayer Not Found!\n";
		}
		newFile.close();
		File.close();
		if (check_box == 1)
		{
			//copy
			newFile.open("temp.txt", ios::in);
			File.open("Coach.txt", ios::out);
			string s;
			while (!newFile.eof())
			{
				getline(newFile, s);
				File << s << endl;
			}
			newFile.close();
			File.close();


			cout << "\nYour Team Coach is Successfully Updated!\n";
		}
	}
	else if (choice == 2)
	{


		cout << "Enter the Name of India's Coach: ";
		cin >> name;

		File.open("Coach.txt", ios::in);
		newFile.open("temp.txt", ios::out);
		if (File.is_open())
		{
			while (!File.eof())
			{
				File >> Name;
				if (!File.eof())
				{
					if (name == Name)
					{

						cout << "Enter the Name of India's New Coach: ";
						cin >> a;
						newFile << a << endl;

						check_box = 1;
					}
					else
					{
						newFile << Name << endl;

					}
				}

			}
		}
		if (check_box == 0)
		{
			cout << "\nPlayer Not Found!\n";
		}
		newFile.close();
		File.close();
		if (check_box == 1)
		{
			//copy
			newFile.open("temp.txt", ios::in);
			File.open("Coach.txt", ios::out);
			string s;
			while (!newFile.eof())
			{
				getline(newFile, s);
				File << s << endl;
			}
			newFile.close();
			File.close();


			cout << "\nYour Team Coach is Successfully Updated!\n";
		}
	}
	else if (choice == 3)
	{

		cout << "Enter the Name of England's Coach: ";
		cin >> name;

		File.open("Coach.txt", ios::in);
		newFile.open("temp.txt", ios::out);
		if (File.is_open())
		{
			while (!File.eof())
			{
				File >> Name;
				if (!File.eof())
				{
					if (name == Name)
					{

						cout << "Enter the Name of England's New Coach: ";
						cin >> a;
						newFile << a << endl;

						check_box = 1;
					}
					else
					{
						newFile << Name << endl;

					}
				}

			}
		}
		if (check_box == 0)
		{
			cout << "\nPlayer Not Found!\n";
		}
		newFile.close();
		File.close();
		if (check_box == 1)
		{
			//copy
			newFile.open("temp.txt", ios::in);
			File.open("Coach.txt", ios::out);
			string s;
			while (!newFile.eof())
			{
				getline(newFile, s);
				File << s << endl;
			}
			newFile.close();
			File.close();


			cout << "\nYour Team Coach is Successfully Updated!\n";
		}

	}
	else if (choice == 4)
	{

		cout << "Enter the Name of New Zealand's Coach: ";
		cin >> name;

		File.open("Coach.txt", ios::in);
		newFile.open("temp.txt", ios::out);
		if (File.is_open())
		{
			while (!File.eof())
			{
				File >> Name;
				if (!File.eof())
				{
					if (name == Name)
					{

						cout << "Enter the Name of New Zealand's New Coach: ";
						cin >> a;
						newFile << a << endl;

						check_box = 1;
					}
					else
					{
						newFile << Name << endl;

					}
				}

			}
		}
		if (check_box == 0)
		{
			cout << "\nPlayer Not Found!\n";
		}
		newFile.close();
		File.close();
		if (check_box == 1)
		{
			//copy
			newFile.open("temp.txt", ios::in);
			File.open("Coach.txt", ios::out);
			string s;
			while (!newFile.eof())
			{
				getline(newFile, s);
				File << s << endl;
			}
			newFile.close();
			File.close();


			cout << "\nYour Team Coach is Successfully Updated!\n";
		}

	}
	else if (choice == 5)
	{

		cout << "Enter the Name of Australia's Coach: ";
		cin >> name;

		File.open("Coach.txt", ios::in);
		newFile.open("temp.txt", ios::out);
		if (File.is_open())
		{
			while (!File.eof())
			{
				File >> Name;
				if (!File.eof())
				{
					if (name == Name)
					{

						cout << "Enter the Name of Australia's New Coach: ";
						cin >> a;
						newFile << a << endl;

						check_box = 1;
					}
					else
					{
						newFile << Name << endl;

					}
				}

			}
		}
		if (check_box == 0)
		{
			cout << "\nPlayer Not Found!\n";
		}
		newFile.close();
		File.close();
		if (check_box == 1)
		{
			//copy
			newFile.open("temp.txt", ios::in);
			File.open("Coach.txt", ios::out);
			string s;
			while (!newFile.eof())
			{
				getline(newFile, s);
				File << s << endl;
			}
			newFile.close();
			File.close();


			cout << "\nYour Team Coach is Successfully Updated!\n";
		}

	}
	else
		cout << "Invalid Choice" << endl;
	system("pause");
}
//display teams
void Team::Display_Team()
{
	system("cls");
	int choice;
	cout << "1. Pakistan\n2. India\n3. England\n4. New Zealand\n5. Australia\n";
	cout << "\nEnter your choice: ";
	cin >> choice;
	if (choice == 1)
	{
		file.open("Pakistan.txt", ios::in);
		if (file.is_open())
		{
			cout << "\nTeam: Pakistan\nTeam Captain: " << Team_Captain[choice] << "\tTeam Coach: " << Team_Coach[choice] << endl;
			cout << "\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
			cout << "ICC Rank ODI: ICC Rank Test:\n";
			while (!file.eof())
			{
				file >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
				file >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
				//at last picks the next line character (enter ascii)
				if (!file.eof())
				{
					cout << No << "\t " << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t";
					cout << "\t" << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << Total_Wickets;
					cout << "\t\t" << ICC_Rank_Test << endl;
				}
				
			}
			file.close();
		}
	}
	else if (choice == 2)
	{
		file.open("India.txt", ios::in);
		if (file.is_open())
		{
			cout << "\nTeam: India\nTeam Captain: " << Team_Captain[choice] << "\tTeam Coach: " << Team_Coach[choice] << endl;
			cout << "\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
			cout << "ICC Rank ODI: ICC Rank Test:\n";
			while (!file.eof())
			{
				file >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
				file >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
				if (!file.eof())
				{
					cout << No << "\t " << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t";
					cout << "\t" << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << Total_Wickets;
					cout << "\t\t" << ICC_Rank_Test << endl;
				}
			}
			file.close();
		}
	}
	else if (choice == 3)
	{
		file.open("England.txt", ios::in);
		if (file.is_open())
		{
			cout << "\nTeam: England\nTeam Captain: " << Team_Captain[choice] << "\tTeam Coach: " << Team_Coach[choice] << endl;
			cout << "\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
			cout << "ICC Rank ODI: ICC Rank Test:\n";
			while (!file.eof())
			{
				file >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
				file >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
				if (!file.eof())
				{
					cout << No << "\t " << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t";
					cout << "\t" << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << Total_Wickets;
					cout << "\t\t" << ICC_Rank_Test << endl;
				}
			}
			file.close();
		}
	}
	else if (choice == 4)
	{
		file.open("NewZealand.txt", ios::in);
		if (file.is_open())
		{
			cout << "\nTeam: New Zealand\nTeam Captain: " << Team_Captain[choice] << "\tTeam Coach: " << Team_Coach[choice] << endl;
			cout << "\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
			cout << "ICC Rank ODI: ICC Rank Test:\n";
			while (!file.eof())
			{
				file >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
				file >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
				if (!file.eof())
				{
					cout << No << "\t " << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t";
					cout << "\t" << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << Total_Wickets;
					cout << "\t\t" << ICC_Rank_Test << endl;
				}
			}
			file.close();
		}
	}
	else if (choice == 5)
	{
		file.open("aus.txt", ios::in);
		if (file.is_open())
		{
			cout << "\nTeam: Australia\nTeam Captain: " << Team_Captain[choice] << "\tTeam Coach: " << Team_Coach[choice] << endl;
			cout << "\nName:\t\tShirt No: Total Matches Played: Total Runs: Average Score: ICC Rank T20: ";
			cout << "ICC Rank ODI: ICC Rank Test:\n";
			while (!file.eof())
			{
				file >> No >> Name >> Shirt_No >> Match_Played >> Total_Runs >> Average >> ICC_Rank_T20;
				file >> ICC_Rank_ODI >> ICC_Rank_Test >> Total_Wickets;
				if (!file.eof())
				{
					cout << No << "\t " << Name << "\t" << Shirt_No << "\t\t" << Match_Played << "\t\t" << Total_Runs << "\t";
					cout << "\t" << Average << "\t\t" << ICC_Rank_T20 << "\t\t" << ICC_Rank_ODI << "\t\t" << Total_Wickets;
					cout << "\t\t" << ICC_Rank_Test << endl;
				}
			}
			file.close();
		}
	}
	else
		cout << "Invalid Choice!" << endl;
	system("pause");
}