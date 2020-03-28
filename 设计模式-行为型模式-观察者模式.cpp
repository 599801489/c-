//#include<iostream>
//using namespace std;
//#include <list>
////定义抽象的英雄
//class AbstractHero
//{
//public:
//	virtual void Update() = 0;
//};
//
//class HeroA :public AbstractHero
//{
//public:
//	HeroA(){
//		cout << "英雄A正在打bos" << endl;
//	}
//	virtual void Update()
//	{
//		cout << "英雄A停止" << endl;
//	}
//};
//
//class HeroB :public AbstractHero
//{
//public:
//	HeroB(){
//		cout << "英雄B正在打bos" << endl;
//	}
//	virtual void Update()
//	{
//		cout << "英雄b停止" << endl;
//	}
//};
//class HeroC :public AbstractHero
//{
//public:
//	HeroC(){
//		cout << "英雄C正在打bos" << endl;
//	}
//	virtual void Update()
//	{
//		cout << "英雄c停止" << endl;
//	}
//};
//
////观察目标抽象
//class AbstractBoss
//{
//public:
//	//添加观察者
//	virtual void addHero(AbstractHero* hero) = 0; 
//	//删除观察者
//		virtual void deleteHero(AbstractHero * hero) = 0;
//		//通知观察者
//		virtual void notity() = 0;
//};
//
////具体观察者
//class BossA :public AbstractBoss
//{
//public:
//	list<AbstractHero*> heroList;
//	//添加观察者
//	virtual void addHero(AbstractHero* hero)
//	{
//		heroList.push_back(hero);
//	}
//	//删除观察者
//	virtual void deleteHero(AbstractHero* hero)
//	{
//		heroList.remove(hero);
//	}
//	//通知观察者
//	virtual void notity()
//	{
//		for (list<AbstractHero*> ::iterator it=heroList.begin();it!=heroList.begin();it++)
//		{
//			(*it)->Update();
//		}
//	}
//
//};
//
//void tes01()
//{
//	//创建观察者
//	AbstractHero* haeroA = new HeroA;
//	AbstractHero* haeroB = new HeroB;
//	AbstractHero* haeroC = new HeroC;
//
//	//创建观察目标
//	AbstractBoss* bossA = new BossA;
//	bossA->addHero(haeroA);
//	bossA->addHero(haeroB);
//	bossA->addHero(haeroC);
//	cout << "heroC死了" << endl;
//	bossA->deleteHero(haeroC);
//	cout << "boss死了" << endl;
//	bossA->notity();
//}
//
//
//
//int main(void)
//{
//	tes01();
//cout<<"";
//
//}