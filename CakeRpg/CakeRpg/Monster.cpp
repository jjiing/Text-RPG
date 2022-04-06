#include"header.h"
#include"Monster.h"

//�ҽ����Ͽ��� ���Ǹ� ���ش�! (��� ����)

//���� ����
Monster::Monster(string name, int hp, int atk, int Matnum)
{
	this->name = name;
	this->hp = hp;
	this->atk = atk;
	this->Matnum = Matnum;
}
//������ HP
int Monster::GetMonsterHp()
{
	return hp;
}
int Monster::GetMonsterAtk()
{
	return atk;
}
int Monster::GetMonsterMatnum()
{
	return Matnum;
}
//������ �̸�
string Monster::GetMonsterName()
{
	return name;
}
//������ ���� ���
void Monster::PrintMonsterInfo()
{
	cout << "�� Name : " << name << endl;
	cout << "�� Hp : " << hp << endl;
	cout << "�� Atk : " << atk << endl;

}

int Monster::RandomMonsterRSP()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(1, 3);
	return dis(gen);
}
void Monster::SetMonsterHp(int _hp)
{
	hp = _hp;
}