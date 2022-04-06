#pragma once

#include"header.h"
#include"Player.h"
#include"Inventory.h"


class Village
{
public:
	void FirstPage();
	void Announce(Player* player);
	void ShowRecipeChocolate();
	void ShowRecipeStrawberry();
	void villagemain();
	void Blank();
	void enter();
	void Bakery();
	void MineMenu(Player* player);
	void Mining();
	int RandomMine();
	void StoreMenu();
	void BakerySuccess();
	void BakeryFail();
	void GameEnding();
	void ShowPlayerInfo(Player* player, Inventory* inventory);
	void Store(Player* player);

};
