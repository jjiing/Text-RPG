#include "Inventory.h"

void Inventory::AddItem(Material* newMaterial)
{
	slots2.push_back(newMaterial);
}

void Inventory::AddItem(Item* newItem)
{
	slots.push_back(newItem);
}

int Inventory::GetSize()
{
	return slots.size();
}


void Inventory::PrintInventoryAll()
{
	for (int i = 0; i < slots.size(); i++)
	{
		cout << "                     "; slots[i]->PrintItemInfo();
	}
}

void Inventory::PrintInventoryAll2()
{
	for (int i = 0; i < slots2.size(); i++)
	{
		cout << "                         "; slots2[i]->ShowMaterialName();
	}
}

void Inventory::PrintInventoryOne(int index)
{
	slots[index]->PrintItemInfo();
}

int Inventory::GetInventoryItemCategory(int index)
{
	return slots[index]->GetCategory();
}
string  Inventory::GetInventoryItemName(int index)
{
	return slots[index]->GetItemName();
}
int Inventory::GetInventoryItemPrice(int index)
{
	return slots[index]->GetItemPrice();
}

bool Inventory::CheckMaterial(int index)
{
	for (int i = 0; i < slots2.size(); i++)
	{
		if (slots2[i]->GetId() == index)
		{
			return true;
		}
	}
	
}
