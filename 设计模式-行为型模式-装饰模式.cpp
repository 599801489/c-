//#include<iostream>
//using namespace std;
//
//
////�̳� һ������� ʵ����Ĺ�����չ
////װ��ģʽ ���Զ�̬�ĸ�һ�������ӹ���
////��������Ϊ
//class AbsractHero
//{
//public:
//	int hp;
//	int mp;
//	int at;
//	int df;
//	virtual void showStatus() = 0;
//
//};
//
//class HeroA :public AbsractHero{
//public:
//	HeroA() {
//		hp = 0;
//		mp = 0;
//		at = 0;
//		df = 0;
//	}
//	virtual void showStatus()
//	{
//		cout << "Ѫ����" << hp << endl;
//		cout << "mofa��" << mp << endl;
//		cout << "gongj��" << at << endl;
//		cout << "fangyu��" << df << endl;
//	}
//};
//
////Ӣ�۴���ĳ��װ���� ��ô�����Ǹ�hero
////װ�������
//class AbstractEqument :public AbsractHero
//{
//public:
//	AbsractHero* hero;
//	AbstractEqument(AbsractHero* hero) { hero = hero; };
//};
//
////��ͽ
//class kuangtuEquipment :public AbstractEqument
//{
//public:
//	kuangtuEquipment(AbsractHero* hero) :AbstractEqument(hero) {};
//	void addKungtu()
//	{
//		cout << "��ͽ������" << endl;
//		hp = this->hero->hp;
//		mp = this->hero->mp;
//		at = this->hero->at;
//		df = this->hero->df+30;
//
//	}
//};
//
////�޾�
//class wujin :public AbstractEqument
//{
//public:
//	wujin(AbsractHero* hero) :AbstractEqument(hero) {};
//	void addKungtu()
//	{
//		cout << "wuj ������" << endl;
//		hp = this->hero->hp;
//		mp = this->hero->mp;
//		at = this->hero->at+80;
//		df = this->hero->df;
//
//	}
//};
//
//void test01()
//{
//	AbsractHero* hero = new HeroA;
//	hero->showStatus();
//	cout << "-------------------------" << endl;
//	//װ��----
//	hero = new kuangtuEquipment(hero);
//	hero->showStatus();
//	hero = new wujin(hero);
//	hero->showStatus()
//}
//
//int main(void)
//{
//
//cout<<"";
//
//}