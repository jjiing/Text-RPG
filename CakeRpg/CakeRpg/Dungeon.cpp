#include"Dungeon.h"

void Dungeon::BattleStart()
{
	cout << endl << endl;
	cout << "                    ���� ����� ���͸� ������ �ּ���!" << endl;
	cout << endl << endl;
	
}

void Dungeon::Battle(Player* player, Monster* monster, Inventory* material)
{
	cout << endl<<"����� ����" << endl;
	monster->PrintMonsterInfo();
	cout << endl;
	system("pause");
	system("cls"); //�����
	cout << endl << endl;
	cout << "			����� " << monster->GetMonsterName() << "�� ���������� ������ �����մϴ�." << endl;
	cout << "			   ����� ü���� 0���� ���� ����� ���� �¸��մϴ�." << endl;
	cout << "					���͸� �����ּ���" << endl;
	_getch();
	system("cls"); //�����
	while (player->GetPlayerHP() > 0 && monster->GetMonsterHp() > 0)
	{
		cout << endl << endl;
		cout << "			���� ���� �� �� �ϳ��� ������ �ּ���." << endl;
		cout << "			1. ����		2.����		3.��" << endl<<endl;
		cout << "				�Է� : ";
		int playerRSP;
		cin >> playerRSP;
		int monsterRSP = monster->RandomMonsterRSP();
		cout <<endl<<endl<< "			"<<monster->GetMonsterName() << "�� ";
		if (monsterRSP == 1) { cout << "����"; }
		else if (monsterRSP == 2) { cout << "����"; }
		else if (monsterRSP == 3) { cout << "��"; }
		cout << "�� �½��ϴ�." << endl<<endl;

		if ((playerRSP == 1 && monsterRSP == 3) || (playerRSP == 2 && monsterRSP == 1) || (playerRSP == 3 && monsterRSP == 2))
		{
			//�÷��̾� ��
			cout << "			" << player->GetPlayername() << "���� ������������ �¸��߽��ϴ�!" << endl;
			monster->SetMonsterHp(monster->GetMonsterHp() - player->GetPlayerAtk());
			if (monster->GetMonsterHp() < 0)
			{
				monster->SetMonsterHp(0);
			}
			cout << endl<<endl;
			cout << "				�� ü�� : " << player->GetPlayerHP() << endl;
			cout << "				���� ü�� : " << monster->GetMonsterHp() << endl;


		}
		else if ((playerRSP == 1 && monsterRSP == 2) || (playerRSP == 2 && monsterRSP == 3) || (playerRSP == 3 && monsterRSP == 1))
		{
			//���� ��
			cout << "			" << player->GetPlayername() << "���� ������������ �й��߽��ϴ�." << endl;
			player->SetPlayerHP(player->GetPlayerHP() - monster->GetMonsterAtk());
			if (player->GetPlayerHP() < 0)
			{
				player->SetPlayerHP(0);
			}
			cout << endl << endl;
			cout << "				�� ü�� : " << player->GetPlayerHP() << endl;
			cout << "				���� ü�� : " << monster->GetMonsterHp() << endl;

		}
		else if ((playerRSP == 1 && monsterRSP == 1) || (playerRSP == 2 && monsterRSP == 2) || (playerRSP == 3 && monsterRSP == 3))
		{
			//���
			cout << "				�����ϴ�." << endl;
			cout << endl << endl;
			cout << "				�� ü�� : " << player->GetPlayerHP() << endl;
			cout << "				���� ü�� : " << monster->GetMonsterHp() << endl;

		}
		_getch();
		system("cls"); //�����
	}
	if (monster->GetMonsterHp() <= 0)
	{
		
		if (monster->GetMonsterMatnum() == 1)
		{
			cout << endl<<endl<<"			�¸��߽��ϴ�.����ũ ��Ʈ�� 100 ��� ȹ��!" << endl;
			material->AddItem(new Material("����ũ��Ʈ", 1));
		}
		else if (monster->GetMonsterMatnum() == 2)
		{
			cout << endl << endl << "			�¸��߽��ϴ�.ũ���� 100 ��� ȹ��!" << endl;
			material->AddItem(new Material("ũ��", 2));
		}
		else if (monster->GetMonsterMatnum() == 3)
		{
			cout << endl << endl << "			�¸��߽��ϴ�.���ݸ��� 100 ��� ȹ��!" << endl;
			material->AddItem(new Material("���ݸ�", 3));
		}
		else if (monster->GetMonsterMatnum() == 4)
		{
			cout << endl << endl << "			�¸��߽��ϴ�.����� 100 ��� ȹ��!" << endl << endl << endl;
			material->AddItem(new Material("����", 4));
		}
		
		cout << endl << endl;
		player->SetPlayerGold(player->GetPlayerGold() + 100);
		monster->SetMonsterHp(50);	//���� ü�� �ʱ�ȭ
	}
	else if (player->GetPlayerHP() <= 0)
	{
		cout << endl << endl << "			�й��߽��ϴ�. ������ �԰� ü���� ȸ���ϼ���." << endl<<endl<<endl;
		monster->SetMonsterHp(50);
	}

	
	
	
}

