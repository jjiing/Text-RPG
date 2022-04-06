#include"header.h"
#include"Monster.h"

//소스파일에서 정의를 해준다! (기능 구현)

//몬스터 세팅
Monster::Monster(string name, int hp, int atk, int Matnum)
{
	this->name = name;
	this->hp = hp;
	this->atk = atk;
	this->Matnum = Matnum;
}
//몬스터의 HP
int Monster::GetMonsterHp()
{
	return hp;
}
int Monster::GetMonsterAtk()
{
	return atk;
}
int Monster::GetMonsterMatnum()
{
	return Matnum;
}
//몬스터의 이름
string Monster::GetMonsterName()
{
	return name;
}
//몬스터의 정보 출력
void Monster::PrintMonsterInfo()
{
	cout << "□ Name : " << name << endl;
	cout << "□ Hp : " << hp << endl;
	cout << "□ Atk : " << atk << endl;

}

int Monster::RandomMonsterRSP()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(1, 3);
	return dis(gen);
}
void Monster::SetMonsterHp(int _hp)
{
	hp = _hp;
}