#pragma once
#include "header.h"
#include "Player.h"
#include "Monster.h"
#include "Inventory.h"




class Dungeon
{
public:
	void BattleStart();
	void Battle(Player* player, Monster* monster, Inventory* material);

	
};