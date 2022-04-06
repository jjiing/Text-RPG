#include"Dungeon.h"

void Dungeon::BattleStart()
{
	cout << endl << endl;
	cout << "                    얻을 재료의 몬스터를 선택해 주세요!" << endl;
	cout << endl << endl;
	
}

void Dungeon::Battle(Player* player, Monster* monster, Inventory* material)
{
	cout << endl<<"■몬스터 정보" << endl;
	monster->PrintMonsterInfo();
	cout << endl;
	system("pause");
	system("cls"); //지우기
	cout << endl << endl;
	cout << "			당신은 " << monster->GetMonsterName() << "와 가위바위보 전투를 진행합니다." << endl;
	cout << "			   상대의 체력을 0으로 먼저 만드는 쪽이 승리합니다." << endl;
	cout << "					엔터를 눌러주세요" << endl;
	_getch();
	system("cls"); //지우기
	while (player->GetPlayerHP() > 0 && monster->GetMonsterHp() > 0)
	{
		cout << endl << endl;
		cout << "			가위 바위 보 중 하나를 선택해 주세요." << endl;
		cout << "			1. 가위		2.바위		3.보" << endl<<endl;
		cout << "				입력 : ";
		int playerRSP;
		cin >> playerRSP;
		int monsterRSP = monster->RandomMonsterRSP();
		cout <<endl<<endl<< "			"<<monster->GetMonsterName() << "는 ";
		if (monsterRSP == 1) { cout << "가위"; }
		else if (monsterRSP == 2) { cout << "바위"; }
		else if (monsterRSP == 3) { cout << "보"; }
		cout << "를 냈습니다." << endl<<endl;

		if ((playerRSP == 1 && monsterRSP == 3) || (playerRSP == 2 && monsterRSP == 1) || (playerRSP == 3 && monsterRSP == 2))
		{
			//플레이어 승
			cout << "			" << player->GetPlayername() << "님이 가위바위보에 승리했습니다!" << endl;
			monster->SetMonsterHp(monster->GetMonsterHp() - player->GetPlayerAtk());
			if (monster->GetMonsterHp() < 0)
			{
				monster->SetMonsterHp(0);
			}
			cout << endl<<endl;
			cout << "				내 체력 : " << player->GetPlayerHP() << endl;
			cout << "				몬스터 체력 : " << monster->GetMonsterHp() << endl;


		}
		else if ((playerRSP == 1 && monsterRSP == 2) || (playerRSP == 2 && monsterRSP == 3) || (playerRSP == 3 && monsterRSP == 1))
		{
			//몬스터 승
			cout << "			" << player->GetPlayername() << "님이 가위바위보에 패배했습니다." << endl;
			player->SetPlayerHP(player->GetPlayerHP() - monster->GetMonsterAtk());
			if (player->GetPlayerHP() < 0)
			{
				player->SetPlayerHP(0);
			}
			cout << endl << endl;
			cout << "				내 체력 : " << player->GetPlayerHP() << endl;
			cout << "				몬스터 체력 : " << monster->GetMonsterHp() << endl;

		}
		else if ((playerRSP == 1 && monsterRSP == 1) || (playerRSP == 2 && monsterRSP == 2) || (playerRSP == 3 && monsterRSP == 3))
		{
			//비김
			cout << "				비겼습니다." << endl;
			cout << endl << endl;
			cout << "				내 체력 : " << player->GetPlayerHP() << endl;
			cout << "				몬스터 체력 : " << monster->GetMonsterHp() << endl;

		}
		_getch();
		system("cls"); //지우기
	}
	if (monster->GetMonsterHp() <= 0)
	{
		
		if (monster->GetMonsterMatnum() == 1)
		{
			cout << endl<<endl<<"			승리했습니다.케이크 시트와 100 골드 획득!" << endl;
			material->AddItem(new Material("케이크시트", 1));
		}
		else if (monster->GetMonsterMatnum() == 2)
		{
			cout << endl << endl << "			승리했습니다.크림과 100 골드 획득!" << endl;
			material->AddItem(new Material("크림", 2));
		}
		else if (monster->GetMonsterMatnum() == 3)
		{
			cout << endl << endl << "			승리했습니다.초콜릿과 100 골드 획득!" << endl;
			material->AddItem(new Material("초콜릿", 3));
		}
		else if (monster->GetMonsterMatnum() == 4)
		{
			cout << endl << endl << "			승리했습니다.딸기와 100 골드 획득!" << endl << endl << endl;
			material->AddItem(new Material("딸기", 4));
		}
		
		cout << endl << endl;
		player->SetPlayerGold(player->GetPlayerGold() + 100);
		monster->SetMonsterHp(50);	//몬스터 체력 초기화
	}
	else if (player->GetPlayerHP() <= 0)
	{
		cout << endl << endl << "			패배했습니다. 포션을 먹고 체력을 회복하세요." << endl<<endl<<endl;
		monster->SetMonsterHp(50);
	}

	
	
	
}

