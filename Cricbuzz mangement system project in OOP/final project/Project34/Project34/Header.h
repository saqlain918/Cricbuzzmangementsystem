#pragma once
#ifndef HEADER_H
#define HEADER_H
#include<iostream>
#include<fstream>
using namespace std;
class Player
{
public:
	string Name;
	int No;
	int Shirt_No, ICC_Rank_T20, ICC_Rank_ODI, ICC_Rank_Test, Total_Runs, Match_Played, Total_Wickets;
	float Average;
	int number1, number2, number3, number4, number5;
	int NUMBER1, NUMBER2, NUMBER3, NUMBER4, NUMBER5;
public:
	//add player function 
	void player_count();

	void Add_Player();


	// remove player function

	void Remove_Player();
	//search player
	void Search_Player();
	//update player
	void Update_Player();
	//****************************	
};
//class of match
class Match
{
private:
	string Team1, Team2, Date, Venue, Match_Type, Tournament_Name, Commentators, Umpires, Match_Status;
	int Over = 0, n = 0, n1 = 0, Total_Score_T1 = 0, Total_Score_T2 = 0, Total_Wickets_T1 = 0, Total_Wickets_T2 = 0;
public:
	//conduct match
	void Conduct_Match();
	//Schedule_Match
	void Schedule_Match();
	//update team rank
	void Update_Team_Ranking(string team1, string team2);
	//update player rank
	void Update_Player_Ranking();
	//display upcoming match
	void Display_Upcoming_Matches();
	//display recent match
	void Display_Recent_Matches();
	//world record update
	void Update_World_Records(string T1, string T2, string  date, string venue, string matchType);
};
//class of team
class Team :public Player
{
private:
	string Name, Team_Captain[6], Team_Coach[6];
	int ICC_Rank_T20, ICC_Rank_ODI, ICC_Rank_Test, Total_Matches_Won, Total_Matches_Lost;
	int No;
public:
	string Username = "rai", Password = "12345";
	Match objMatch;
	//display matches
	void Dispaly_Matches();
	//captain and coach
	void Captain_Coach();
	//update captain
	void Update_Captain();
	//update coach
	void Update_Coach();
	//display team
	void Display_Team();
};
#endif