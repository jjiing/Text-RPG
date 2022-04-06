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
	//플레이어
	Player playerA;
	//화면
	Village village;
	Dungeon dungeon;

	Monster monsterCakeSheet("케이크시트 몬스터", 50, 10, 1);
	Monster monsterCream("크림 몬스터", 100, 30, 2);
	Monster monsterChocolate("초콜릿몬스터", 200, 50, 3);
	Monster monsterStrawberry("딸기몬스터", 200, 50, 4);

	//몬스터에 포인터를 사용해서 이름을 정의해놓은 주소값을 넣어준다. 
	vector<Monster> monsters;
	monsters.push_back(monsterCakeSheet);
	monsters.push_back(monsterCream);
	monsters.push_back(monsterChocolate);
	monsters.push_back(monsterStrawberry);

	//재료
	Material cakesheet("케이크시트", 1);
	Material cream("크림", 2);
	Material chocolate("초콜릿", 3);
	Material strawberry("딸기", 4);
	vector<Material> materials;
	Inventory material;

	//플레이어 인벤토리
	Inventory playerInventory;


	//시작화면
	
	village.FirstPage();

	string inputName;
	cin >> inputName;
	playerA.PlayerSet(inputName, 100, 100, 20);

	system("cls"); //지우기

	//안내화면
	
	village.Announce(&playerA);
	cout << "입력 : ";

	int selectgoal;
	cin >> selectgoal;
	system("cls"); //지우기

	//show레시피
	if (selectgoal == 1)
	{
		village.ShowRecipeChocolate();
	}
	else if (selectgoal == 2)
	{
		village.ShowRecipeStrawberry();
	}
	system("pause");
	

	//광장 화면

	while (true)
	{
		system("cls"); //지우기
		village.villagemain();
		int input;
		cin >> input;
		system("cls"); //지우기

		if (input == 1)		//내정보
		{
			village.ShowPlayerInfo(&playerA, &material);

		}
		//상점가기 (구현하기)
		if (input == 2)
		{
			village.StoreMenu();
			playerA.ShowPlayerInfo();
			village.Store(&playerA);

		}
		//광산가기
		if (input == 3)
		{
			village.MineMenu(&playerA);
		
		}
		//던전메인화면 - 몬스터 선택화면
		if (input == 4)					//죽은 몬스터의 화면을 다시 들어갔을 때 나오는 화면 구현
		{
			dungeon.BattleStart();
			for (int i = 0; i < monsters.size(); i++)
			{
				cout << "                        " << i + 1 << ". " << monsters[i].GetMonsterName() << endl;
			}
			cout << "입력 : ";
			int input;
			cin >> input;
			system("cls"); //지우기

		
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
		//베이커리 가기
		if (input == 5)
		{
			village.Bakery();

			int showmymat;
			cin >> showmymat;
			if (showmymat == 1)
			{
				cout << "                     --내 재료--" << endl;
			material.PrintInventoryAll2();
				cout << "                   ---------------" << endl;
				village.Blank();
				system("pause");
				system("cls"); //지우기

				bool a = false;
				bool b = false;
				bool c = false;
				bool d = false;

				if (selectgoal == 1)
				{
					//재료 3가지를 모두 가지고 있다면 클리어
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
			//메뉴로 돌아가기
			else{}
		}
		//레시피 보기
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
		//종료하기
		if (input == 7)
		{
			break; // 브레이크를 통해서 와일문을 빠져나온다!
		}

	}

	village.GameEnding();

}

