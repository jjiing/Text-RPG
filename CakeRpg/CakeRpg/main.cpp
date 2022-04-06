#include"header.h"
#include"Monster.h"
#include"Village.h"
#include"Player.h"
#include"Material.h"
#include"Item.h"
#include"Inventory.h"
#include "Dungeon.h"

void main()
{
	//�÷��̾�
	Player playerA;
	//ȭ��
	Village village;
	Dungeon dungeon;

	Monster monsterCakeSheet("����ũ��Ʈ ����", 50, 10, 1);
	Monster monsterCream("ũ�� ����", 100, 30, 2);
	Monster monsterChocolate("���ݸ�����", 200, 50, 3);
	Monster monsterStrawberry("�������", 200, 50, 4);

	//���Ϳ� �����͸� ����ؼ� �̸��� �����س��� �ּҰ��� �־��ش�. 
	vector<Monster> monsters;
	monsters.push_back(monsterCakeSheet);
	monsters.push_back(monsterCream);
	monsters.push_back(monsterChocolate);
	monsters.push_back(monsterStrawberry);

	//���
	Material cakesheet("����ũ��Ʈ", 1);
	Material cream("ũ��", 2);
	Material chocolate("���ݸ�", 3);
	Material strawberry("����", 4);
	vector<Material> materials;
	Inventory material;

	//�÷��̾� �κ��丮
	Inventory playerInventory;


	//����ȭ��
	
	village.FirstPage();

	string inputName;
	cin >> inputName;
	playerA.PlayerSet(inputName, 100, 100, 20);

	system("cls"); //�����

	//�ȳ�ȭ��
	
	village.Announce(&playerA);
	cout << "�Է� : ";

	int selectgoal;
	cin >> selectgoal;
	system("cls"); //�����

	//show������
	if (selectgoal == 1)
	{
		village.ShowRecipeChocolate();
	}
	else if (selectgoal == 2)
	{
		village.ShowRecipeStrawberry();
	}
	system("pause");
	

	//���� ȭ��

	while (true)
	{
		system("cls"); //�����
		village.villagemain();
		int input;
		cin >> input;
		system("cls"); //�����

		if (input == 1)		//������
		{
			village.ShowPlayerInfo(&playerA, &material);

		}
		//�������� (�����ϱ�)
		if (input == 2)
		{
			village.StoreMenu();
			playerA.ShowPlayerInfo();
			village.Store(&playerA);

		}
		//���갡��
		if (input == 3)
		{
			village.MineMenu(&playerA);
		
		}
		//��������ȭ�� - ���� ����ȭ��
		if (input == 4)					//���� ������ ȭ���� �ٽ� ���� �� ������ ȭ�� ����
		{
			dungeon.BattleStart();
			for (int i = 0; i < monsters.size(); i++)
			{
				cout << "                        " << i + 1 << ". " << monsters[i].GetMonsterName() << endl;
			}
			cout << "�Է� : ";
			int input;
			cin >> input;
			system("cls"); //�����

		
			switch (input)
			{
			case 1: 
				dungeon.Battle(&playerA, &monsters[0],&material);
				break;
		
			case 2:
				dungeon.Battle(&playerA, &monsters[1],&material);
				break;

			case 3:
				dungeon.Battle(&playerA, &monsters[2] ,&material);
				break;
				
				
			case 4:
				dungeon.Battle(&playerA, &monsters[3], &material);
				break;
			}
			system("pause");
		}
		//����Ŀ�� ����
		if (input == 5)
		{
			village.Bakery();

			int showmymat;
			cin >> showmymat;
			if (showmymat == 1)
			{
				cout << "                     --�� ���--" << endl;
			material.PrintInventoryAll2();
				cout << "                   ---------------" << endl;
				village.Blank();
				system("pause");
				system("cls"); //�����

				bool a = false;
				bool b = false;
				bool c = false;
				bool d = false;

				if (selectgoal == 1)
				{
					//��� 3������ ��� ������ �ִٸ� Ŭ����
					if (material.CheckMaterial(1) == true) { a = true; }
					if (material.CheckMaterial(2) == true) { b = true; }
					if (material.CheckMaterial(3) == true) { c = true; }
					
					
					if (a == true && b == true && c == true)
					{
						village.BakerySuccess();
						break;  
					}
					else
					{
						village.BakeryFail();
						system("pause");
					}

				}
				else if (selectgoal == 2)
				{
					if (material.CheckMaterial(1) == true) { a = true; }
					if (material.CheckMaterial(2) == true) { b = true; }
					if (material.CheckMaterial(4) == true) { d = true; }
					if (a == true && b == true && d == true)
					{
						village.BakerySuccess();
						break;
					}
					else
					{
						village.BakeryFail();
						system("pause");
					}
				}
			}
			//�޴��� ���ư���
			else{}
		}
		//������ ����
		if (input == 6)
		{
			if (selectgoal == 1)
			{
				village.ShowRecipeChocolate();
			}
			else if (selectgoal == 2)
			{
				village.ShowRecipeStrawberry();
			}
			system("pause");

		}
		//�����ϱ�
		if (input == 7)
		{
			break; // �극��ũ�� ���ؼ� ���Ϲ��� �������´�!
		}

	}

	village.GameEnding();

}

