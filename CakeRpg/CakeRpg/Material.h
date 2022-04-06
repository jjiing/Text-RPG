#pragma once
#include"header.h"
#include "Item.h"

class Material
{
private:
	string name;
	int id;

public:

	Material(){};
	Material(string name, int id);
    int GetId();	
	void Set(string name, int id);
	string  GetItemName();
	void ShowMaterialName();
	
};