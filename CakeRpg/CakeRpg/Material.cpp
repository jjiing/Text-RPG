

#include"header.h"
#include"Material.h"


   
	Material::Material(string name, int id)
	{
		this->name = name;
		this->id = id;
	}
	int Material::GetId()
	{
		return id;
	}
	void Material::Set(string name, int id)
	{
		this->name = name;
		this->id = id;
	}
	string  Material::GetItemName()
	{
		return name;
	}

	void Material::ShowMaterialName()
	{
		cout << name << endl;
	}
