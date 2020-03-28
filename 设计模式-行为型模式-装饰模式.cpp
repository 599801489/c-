//#include<iostream>
//using namespace std;
//
//
////继承 一般情况下 实现类的功能拓展
////装饰模式 可以动态的给一个类增加功能
////抽象共有行为
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
//		cout << "血量：" << hp << endl;
//		cout << "mofa：" << mp << endl;
//		cout << "gongj：" << at << endl;
//		cout << "fangyu：" << df << endl;
//	}
//};
//
////英雄穿上某个装饰物 那么它还是个hero
////装饰物基类
//class AbstractEqument :public AbsractHero
//{
//public:
//	AbsractHero* hero;
//	AbstractEqument(AbsractHero* hero) { hero = hero; };
//};
//
////狂徒
//class kuangtuEquipment :public AbstractEqument
//{
//public:
//	kuangtuEquipment(AbsractHero* hero) :AbstractEqument(hero) {};
//	void addKungtu()
//	{
//		cout << "狂徒。。。" << endl;
//		hp = this->hero->hp;
//		mp = this->hero->mp;
//		at = this->hero->at;
//		df = this->hero->df+30;
//
//	}
//};
//
////无尽
//class wujin :public AbstractEqument
//{
//public:
//	wujin(AbsractHero* hero) :AbstractEqument(hero) {};
//	void addKungtu()
//	{
//		cout << "wuj 。。。" << endl;
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
//	//装备----
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