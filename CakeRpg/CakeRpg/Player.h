#pragma once

#include "header.h"

// �÷��̾� Ŭ���� ����! ����� �Լ��� ���� �����ϴ����� ���Ѵ�!
class Player
{

private:
	string name; //�̸�
	int hp;   // ü��
	int gold; // ���
	int atk;
	// int atk �� ���� �ɼ�? �߰��ؼ� ���� �����ý��� ����!
public:

	
	void PlayerSet(string name, int hp, int gold, int atk);
	void ShowPlayerInfo();
	string GetPlayername();
	int GetPlayerGold();
	int GetPlayerHP();
	int GetPlayerAtk();
	void SetPlayerGold(int _gold);
	void SetPlayerHP(int _hp);
	void SetPlayerAtk(int _atk);


};