#include"header.h"
#include"Village.h"

void Village::FirstPage()
{
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                               CAKE KINGDOM                                   " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                                  WELCOM!                                     " << endl;
	cout << "                                                                              " << endl;
	cout << "                          Player 이름을 입력하세요                             " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "입력 : ";
}
void Village::Announce(Player* player)
{
	cout << endl << endl;
	cout << "                            " << player->GetPlayername() << " 님 안녕하세요!" << endl;
	cout << "                                                                              " << endl;
	cout << "                      이 게임은 케이크의 레시피대로                           " << endl;
	cout << "                     필요한 재료를 베이커리에 전달해				        	 " << endl;
	cout << "                      케이크를 완성하는 게임입니다.                            " << endl;
	cout << "                                                                           " << endl;
	cout << "                      원하는 재료의 몬스터를 이기면                            " << endl;
	cout << "                      해당 재료를 얻을 수 있습니다!                            " << endl;
	cout << "                                                                             " << endl;
	cout << "                                                                              " << endl;
	cout << "                  만드실 케이크의 번호를 선택해주세요!" << endl;
	cout << "                                                                              " << endl;
	cout << "              1. 초콜릿 케이크			2. 딸기 케이크                        " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
}
void Village::ShowRecipeChocolate()
{
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                       ----------------------------          " << endl;
	cout << "                                                             " << endl;
	cout << "                                초코케이크                     " << endl;
	cout << "                                                             " << endl;
	cout << "                              케이크 시트 1개                  " << endl;
	cout << "                                 크림 1개                     " << endl;
	cout << "                                초콜릿 1개                    " << endl;
	cout << "                                                                              " << endl;
	cout << "                        ---------------------------          " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                  해당 재료를 구해 베이커리에 전달해주세요!                      " << endl;
	cout << "                                                                              " << endl;

}
void Village::ShowRecipeStrawberry()
{
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                       ----------------------------          " << endl;
	cout << "                                                             " << endl;
	cout << "                                딸기케이크                     " << endl;
	cout << "                                                             " << endl;
	cout << "                              케이크 시트 1개                  " << endl;
	cout << "                                 크림 1개                     " << endl;
	cout << "                                 딸기 1개                    " << endl;
	cout << "                                                                              " << endl;
	cout << "                        ---------------------------          " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                  해당 재료를 구해 베이커리에 전달해주세요!                      " << endl;
	cout << "                                                                              " << endl;

}
void Village::villagemain()
{
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                               village                               " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                       원하는 활동을 선택해주세요.                                " << endl;
	cout << "                            1. 내 정보                                                " << endl;
	cout << "                            2. 상점으로 이동                                               " << endl;
	cout << "                            3. 광산으로 이동                                               " << endl;
	cout << "                            4. 던전으로 이동									" << endl;
	cout << "                            5. 베이커리 가기                                                 " << endl;
	cout << "                            6. 레시피보기                                                 " << endl;
	cout << "                            7. 종료                                                  " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "입력 : ";

}
void Village::Blank()
{
	cout << endl;
	cout << endl;
}
void Village::enter()
{
	cout << "                enter 키를 누르면 메인화면으로 돌아갑니다." << endl;
}
void Village::Bakery()
{
	cout << "                베이커리에 오신 것을 환영합니다." << endl;
	cout << "                  재료들을 모두 구해오셨나요?" << endl;
	cout << endl << "                  1. 내 재료 보여주기" << endl;
	cout << "                  2. 돌아가기" << endl;;
}
void Village::MineMenu(Player* player)
{
	cout << endl;
	cout << endl;
	cout << "                광산에서는 아래 확률에 따라  골드를 채굴하실 수 있습니다." << endl; 
	cout << endl;
	cout << endl;
	cout << "                               5 gold   10%" << endl;
	cout << "                              10 gold   10%" << endl;
	cout << "                              30 gold   50%" << endl;
	cout << "                              50 gold   20%" << endl;
	cout << "                             100 gold   10%" << endl;
	cout << endl;
	cout << endl;
	cout << "                   광산에 입장하시겠습니까?? (광산입장료 : 10 gold) " << endl;
	cout << endl;
	cout << "                 1. 광산에 입장하기		 2. 돌아가기                        " << endl;
	cout << "                                                                              " << endl;
	cout << endl;
	cout << "입력 : ";
	int getintoMine;
	cin >> getintoMine;

	if (getintoMine = 1)
	{
		cout << endl << endl;
		cout << "                       10 골드를 사용해 광산에 입장합니다." << endl;
		Sleep(1000);
		system("cls"); //지우기
		player->SetPlayerGold(player->GetPlayerGold() - 10);
		Village::Mining();
		int resultMine = Village::RandomMine();
		if (resultMine == 1)
		{
			player->SetPlayerGold(player->GetPlayerGold() + 5);
			cout << "                        5 골드 획득!" << endl;
		}
		if (resultMine == 2)
		{
			player->SetPlayerGold(player->GetPlayerGold() + 10);
			cout << "                        10 골드 획득!" << endl;
		}
		if (resultMine == 3 || resultMine == 4 || resultMine == 5 || resultMine == 6 || resultMine == 7)
		{
			player->SetPlayerGold(player->GetPlayerGold() + 30);
			cout << "                        30 골드 획득!" << endl;
		}
		if (resultMine == 8 || resultMine == 9)
		{
			player->SetPlayerGold(player->GetPlayerGold() + 50);
			cout << "                        50 골드 획득!" << endl;
		}
		if (resultMine == 10)
		{
			player->SetPlayerGold(player->GetPlayerGold() + 100);
			cout << "                        100 골드 획득!" << endl;
		}
		Sleep(1500);
		cout << "                      현재 내 골드 : " << player->GetPlayerGold() << endl;
		cout << endl << endl;
		system("pause");




	}


}

void Village::Mining()
{
	
	cout << endl;
	cout << endl; 
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                           채굴중."; Sleep(1000); cout << "."; Sleep(1000); cout << "." << endl; Sleep(1000);
	cout << endl;
	cout << endl;
	cout << endl;

}
int Village::RandomMine()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(1, 4);
	return dis(gen);
}

void Village::StoreMenu()
{
	cout << endl;
	cout << endl;
	cout << "              상점에 오신 것을 환영합니다. 구매하실 아이템을 선택해주세요." << endl << endl << endl;
	cout << "1. 무기 제련하기" << endl;
	cout << "나의 공격력이 +10 됩니다." << endl;
	cout << "100 gold" << endl << endl;
	cout << "2. 포션 마시기" << endl;
	cout << "나의 체력이 +25 됩니다." << endl;
	cout << "50 gold" << endl << endl;
	cout << endl;
	cout << "3. 돌아가기" << endl << endl;
	cout << endl << endl;


}

void Village::BakerySuccess()
{
	cout << endl << endl << endl << endl;
	cout << "                     클리어!" << endl;
	cout << "      맛있는 딸기케이크를 만들어 주셔서 감사합니다!" << endl;
	Sleep(3000);
	
}

void Village::BakeryFail()
{
	cout << endl << endl << endl << endl;
	cout << "                   딸기케이크 만들기 실패" << endl;
	cout << "               재료를 다시 한번 확인해 주세요." << endl;
	cout << endl << endl;
}

void Village::GameEnding()
{
	cout << endl;
	cout << "                게임을 종료합니다." << endl<<endl;
}

void Village::ShowPlayerInfo(Player* player, Inventory* inventory)
{
	cout << endl << endl;
	cout << "                              " << player->GetPlayername() << " 정보                                 " << endl;
	cout << endl << endl;
	cout << "                             체력 : " << player->GetPlayerHP() << endl;
	cout << "                           공격력 : " << player->GetPlayerAtk() << endl;
	cout << "                         보유골드 : " << player->GetPlayerGold() << endl;
	cout << endl << "                          --획득한 재료--" << endl << endl;
	inventory->PrintInventoryAll2();
	cout << endl << endl;
	system("pause");
}

void Village::Store(Player* player)
{
	if (player->GetPlayerGold() > 0)
	{
		cout << endl << endl << "입력 : ";
		int selectStore;
		cin >> selectStore;


		if (selectStore == 1)
		{
			if (player->GetPlayerGold() >= 100)
			{
				player->SetPlayerAtk(player->GetPlayerAtk() + 10);
				player->SetPlayerGold(player->GetPlayerGold() - 100);
				system("cls"); //지우기
				Village::StoreMenu();
				player->ShowPlayerInfo();
			}
			else
			{
				system("cls"); //지우기
				Village::StoreMenu();
				player->ShowPlayerInfo();
				cout << endl << "                  골드가 부족합니다." << endl;

			}
		}
		else if (selectStore == 2)
		{
			if (player->GetPlayerGold() >= 50)
			{
				player->SetPlayerHP(player->GetPlayerHP() + 25);
				player->SetPlayerGold(player->GetPlayerGold() - 50);
				system("cls"); //지우기
				Village::StoreMenu();
				player->ShowPlayerInfo();
			}
			else
			{
				system("cls"); //지우기
				Village::StoreMenu();
				player->ShowPlayerInfo();
				cout << endl << "                  골드가 부족합니다." << endl;

			}
		}


	}

	else
	{
		cout << endl << "                  골드가 부족합니다." << endl;
		Sleep(1000);
	}
	cout << endl;
	system("pause");
}


