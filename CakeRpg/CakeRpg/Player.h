#pragma once

#include "header.h"

// 플레이어 클래스 정의! 여기는 함수에 뭐가 들어가야하는지만 정한다!
class Player
{

private:
	string name; //이름
	int hp;   // 체력
	int gold; // 골드
	int atk;
	// int atk 로 공격 옵션? 추가해서 이제 전투시스템 돌입!
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