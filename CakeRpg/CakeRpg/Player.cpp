#include"header.h"
#include"Player.h"

// 헤더를 여기서 불러와서 이쪽에서 구현을 한다!



void Player::PlayerSet(string name, int hp, int gold, int atk)
{
	this->name = name;
	this->hp = hp;
	this->gold = gold;
	this->atk = atk;
}
void Player::ShowPlayerInfo()
{
	cout << "현재 체력 : " << hp << endl << "현재 공격력 : " << atk << endl<<"현재 골드 : "<< gold<<endl;
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
