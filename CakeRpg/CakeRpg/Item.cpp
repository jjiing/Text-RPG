#include "Item.h"


int Item::GetCategory()
{
	return category;
}
string Item::GetItemName()
{
	return name;
}
int Item::GetItemPrice()
{
	return price;
}

void Item::SetItem(string _name, int _price, int _category)
{
	name = _name;
	price = _price;
	category = _category;

}

void Item::PrintItemInfo()
{
	cout << name << "[" << price << " °ñµå]" << endl;
}