#include"header.h"
#include"Player.h"

// ����� ���⼭ �ҷ��ͼ� ���ʿ��� ������ �Ѵ�!



void Player::PlayerSet(string name, int hp, int gold, int atk)
{
	this->name = name;
	this->hp = hp;
	this->gold = gold;
	this->atk = atk;
}
void Player::ShowPlayerInfo()
{
	cout << "���� ü�� : " << hp << endl << "���� ���ݷ� : " << atk << endl<<"���� ��� : "<< gold<<endl;
}
string Player::GetPlayername()
{
	return name;
}
int Player::GetPlayerGold()
{
	return gold;
}

int Player::GetPlayerHP()
{
	return hp;
}

int Player::GetPlayerAtk()
{
	return atk;
}

void Player::SetPlayerGold(int _gold)
{
	gold = _gold;
}

void Player::SetPlayerHP(int _hp)
{
	hp = _hp;
}

void Player::SetPlayerAtk(int _atk)
{
	atk = _atk;
}
