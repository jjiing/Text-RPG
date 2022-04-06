#pragma once

#include"header.h"

class Monster
{
private:
	string name;
	int hp;
	int atk;
	int Matnum;
	

public:
	

	int RandomMonsterRSP();
	Monster(string name, int hp, int atk, int Matnum);
	int GetMonsterHp();
	int GetMonsterAtk();
	int GetMonsterMatnum();
	string GetMonsterName();
	void PrintMonsterInfo();
	void SetMonsterHp(int _hp);
};