#pragma once
#include "header.h"
#include "Item.h"
#include "Material.h"
//Inventory Å¬·¡½º

class Inventory
{
private:
	vector<Item*> slots;
	vector<Material*> slots2;

public:
	

	void AddItem(Material* newMaterial);
	void AddItem(Item* newItem);
	int GetSize();
	void PrintInventoryAll();
	void PrintInventoryAll2();
	void PrintInventoryOne(int index);
	int GetInventoryItemCategory(int index);
	string  GetInventoryItemName(int index);
	int GetInventoryItemPrice(int index);
	bool CheckMaterial(int index);



	/*\void UseItem(int i, Charactor* charactor)
	{
		slots[i]->UseItem(charactor);

	}*/
	/*void Printfilter(int filter)
	{
		for (int i = 0; i < slots.size(); i++)
		{
			if (slots[i]->GetCategory() == filter)
			{
				PrintInventoryOne(i);

			}
		}

	}*/
};

