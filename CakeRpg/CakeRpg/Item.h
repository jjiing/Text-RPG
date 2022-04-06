#pragma once
#include "header.h"

class Item
{
private:
	string name;
	int price;
	int category;
public:
	int GetCategory();
	string GetItemName();
	int GetItemPrice();
	virtual void SetItem(string _name, int _price, int _category);
	virtual void PrintItemInfo();
	/*virtual void UseItem(Charactor* charactor)
	{
		cout << name << "»ç¿ë" << endl;
	}
	*/
	/*virtual int GetAtk()
	{
		return atk;
	}*/
};

