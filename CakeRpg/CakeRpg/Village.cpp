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
	cout << "                          Player �̸��� �Է��ϼ���                             " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "�Է� : ";
}
void Village::Announce(Player* player)
{
	cout << endl << endl;
	cout << "                            " << player->GetPlayername() << " �� �ȳ��ϼ���!" << endl;
	cout << "                                                                              " << endl;
	cout << "                      �� ������ ����ũ�� �����Ǵ��                           " << endl;
	cout << "                     �ʿ��� ��Ḧ ����Ŀ���� ������				        	 " << endl;
	cout << "                      ����ũ�� �ϼ��ϴ� �����Դϴ�.                            " << endl;
	cout << "                                                                           " << endl;
	cout << "                      ���ϴ� ����� ���͸� �̱��                            " << endl;
	cout << "                      �ش� ��Ḧ ���� �� �ֽ��ϴ�!                            " << endl;
	cout << "                                                                             " << endl;
	cout << "                                                                              " << endl;
	cout << "                  ����� ����ũ�� ��ȣ�� �������ּ���!" << endl;
	cout << "                                                                              " << endl;
	cout << "              1. ���ݸ� ����ũ			2. ���� ����ũ                        " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
}
void Village::ShowRecipeChocolate()
{
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                       ----------------------------          " << endl;
	cout << "                                                             " << endl;
	cout << "                                ��������ũ                     " << endl;
	cout << "                                                             " << endl;
	cout << "                              ����ũ ��Ʈ 1��                  " << endl;
	cout << "                                 ũ�� 1��                     " << endl;
	cout << "                                ���ݸ� 1��                    " << endl;
	cout << "                                                                              " << endl;
	cout << "                        ---------------------------          " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                  �ش� ��Ḧ ���� ����Ŀ���� �������ּ���!                      " << endl;
	cout << "                                                                              " << endl;

}
void Village::ShowRecipeStrawberry()
{
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                       ----------------------------          " << endl;
	cout << "                                                             " << endl;
	cout << "                                ��������ũ                     " << endl;
	cout << "                                                             " << endl;
	cout << "                              ����ũ ��Ʈ 1��                  " << endl;
	cout << "                                 ũ�� 1��                     " << endl;
	cout << "                                 ���� 1��                    " << endl;
	cout << "                                                                              " << endl;
	cout << "                        ---------------------------          " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "                  �ش� ��Ḧ ���� ����Ŀ���� �������ּ���!                      " << endl;
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
	cout << "                       ���ϴ� Ȱ���� �������ּ���.                                " << endl;
	cout << "                            1. �� ����                                                " << endl;
	cout << "                            2. �������� �̵�                                               " << endl;
	cout << "                            3. �������� �̵�                                               " << endl;
	cout << "                            4. �������� �̵�									" << endl;
	cout << "                            5. ����Ŀ�� ����                                                 " << endl;
	cout << "                            6. �����Ǻ���                                                 " << endl;
	cout << "                            7. ����                                                  " << endl;
	cout << "                                                                              " << endl;
	cout << "                                                                              " << endl;
	cout << "�Է� : ";

}
void Village::Blank()
{
	cout << endl;
	cout << endl;
}
void Village::enter()
{
	cout << "                enter Ű�� ������ ����ȭ������ ���ư��ϴ�." << endl;
}
void Village::Bakery()
{
	cout << "                ����Ŀ���� ���� ���� ȯ���մϴ�." << endl;
	cout << "                  ������ ��� ���ؿ��̳���?" << endl;
	cout << endl << "                  1. �� ��� �����ֱ�" << endl;
	cout << "                  2. ���ư���" << endl;;
}
void Village::MineMenu(Player* player)
{
	cout << endl;
	cout << endl;
	cout << "                ���꿡���� �Ʒ� Ȯ���� ����  ��带 ä���Ͻ� �� �ֽ��ϴ�." << endl; 
	cout << endl;
	cout << endl;
	cout << "                               5 gold   10%" << endl;
	cout << "                              10 gold   10%" << endl;
	cout << "                              30 gold   50%" << endl;
	cout << "                              50 gold   20%" << endl;
	cout << "                             100 gold   10%" << endl;
	cout << endl;
	cout << endl;
	cout << "                   ���꿡 �����Ͻðڽ��ϱ�?? (��������� : 10 gold) " << endl;
	cout << endl;
	cout << "                 1. ���꿡 �����ϱ�		 2. ���ư���                        " << endl;
	cout << "                                                                              " << endl;
	cout << endl;
	cout << "�Է� : ";
	int getintoMine;
	cin >> getintoMine;

	if (getintoMine = 1)
	{
		cout << endl << endl;
		cout << "                       10 ��带 ����� ���꿡 �����մϴ�." << endl;
		Sleep(1000);
		system("cls"); //�����
		player->SetPlayerGold(player->GetPlayerGold() - 10);
		Village::Mining();
		int resultMine = Village::RandomMine();
		if (resultMine == 1)
		{
			player->SetPlayerGold(player->GetPlayerGold() + 5);
			cout << "                        5 ��� ȹ��!" << endl;
		}
		if (resultMine == 2)
		{
			player->SetPlayerGold(player->GetPlayerGold() + 10);
			cout << "                        10 ��� ȹ��!" << endl;
		}
		if (resultMine == 3 || resultMine == 4 || resultMine == 5 || resultMine == 6 || resultMine == 7)
		{
			player->SetPlayerGold(player->GetPlayerGold() + 30);
			cout << "                        30 ��� ȹ��!" << endl;
		}
		if (resultMine == 8 || resultMine == 9)
		{
			player->SetPlayerGold(player->GetPlayerGold() + 50);
			cout << "                        50 ��� ȹ��!" << endl;
		}
		if (resultMine == 10)
		{
			player->SetPlayerGold(player->GetPlayerGold() + 100);
			cout << "                        100 ��� ȹ��!" << endl;
		}
		Sleep(1500);
		cout << "                      ���� �� ��� : " << player->GetPlayerGold() << endl;
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
	cout << "                           ä����."; Sleep(1000); cout << "."; Sleep(1000); cout << "." << endl; Sleep(1000);
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
	cout << "              ������ ���� ���� ȯ���մϴ�. �����Ͻ� �������� �������ּ���." << endl << endl << endl;
	cout << "1. ���� �����ϱ�" << endl;
	cout << "���� ���ݷ��� +10 �˴ϴ�." << endl;
	cout << "100 gold" << endl << endl;
	cout << "2. ���� ���ñ�" << endl;
	cout << "���� ü���� +25 �˴ϴ�." << endl;
	cout << "50 gold" << endl << endl;
	cout << endl;
	cout << "3. ���ư���" << endl << endl;
	cout << endl << endl;


}

void Village::BakerySuccess()
{
	cout << endl << endl << endl << endl;
	cout << "                     Ŭ����!" << endl;
	cout << "      ���ִ� ��������ũ�� ����� �ּż� �����մϴ�!" << endl;
	Sleep(3000);
	
}

void Village::BakeryFail()
{
	cout << endl << endl << endl << endl;
	cout << "                   ��������ũ ����� ����" << endl;
	cout << "               ��Ḧ �ٽ� �ѹ� Ȯ���� �ּ���." << endl;
	cout << endl << endl;
}

void Village::GameEnding()
{
	cout << endl;
	cout << "                ������ �����մϴ�." << endl<<endl;
}

void Village::ShowPlayerInfo(Player* player, Inventory* inventory)
{
	cout << endl << endl;
	cout << "                              " << player->GetPlayername() << " ����                                 " << endl;
	cout << endl << endl;
	cout << "                             ü�� : " << player->GetPlayerHP() << endl;
	cout << "                           ���ݷ� : " << player->GetPlayerAtk() << endl;
	cout << "                         ������� : " << player->GetPlayerGold() << endl;
	cout << endl << "                          --ȹ���� ���--" << endl << endl;
	inventory->PrintInventoryAll2();
	cout << endl << endl;
	system("pause");
}

void Village::Store(Player* player)
{
	if (player->GetPlayerGold() > 0)
	{
		cout << endl << endl << "�Է� : ";
		int selectStore;
		cin >> selectStore;


		if (selectStore == 1)
		{
			if (player->GetPlayerGold() >= 100)
			{
				player->SetPlayerAtk(player->GetPlayerAtk() + 10);
				player->SetPlayerGold(player->GetPlayerGold() - 100);
				system("cls"); //�����
				Village::StoreMenu();
				player->ShowPlayerInfo();
			}
			else
			{
				system("cls"); //�����
				Village::StoreMenu();
				player->ShowPlayerInfo();
				cout << endl << "                  ��尡 �����մϴ�." << endl;

			}
		}
		else if (selectStore == 2)
		{
			if (player->GetPlayerGold() >= 50)
			{
				player->SetPlayerHP(player->GetPlayerHP() + 25);
				player->SetPlayerGold(player->GetPlayerGold() - 50);
				system("cls"); //�����
				Village::StoreMenu();
				player->ShowPlayerInfo();
			}
			else
			{
				system("cls"); //�����
				Village::StoreMenu();
				player->ShowPlayerInfo();
				cout << endl << "                  ��尡 �����մϴ�." << endl;

			}
		}


	}

	else
	{
		cout << endl << "                  ��尡 �����մϴ�." << endl;
		Sleep(1000);
	}
	cout << endl;
	system("pause");
}


