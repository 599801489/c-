//#include<iostream>
//using namespace std;
//#include <list>
////��������Ӣ��
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
//		cout << "Ӣ��A���ڴ�bos" << endl;
//	}
//	virtual void Update()
//	{
//		cout << "Ӣ��Aֹͣ" << endl;
//	}
//};
//
//class HeroB :public AbstractHero
//{
//public:
//	HeroB(){
//		cout << "Ӣ��B���ڴ�bos" << endl;
//	}
//	virtual void Update()
//	{
//		cout << "Ӣ��bֹͣ" << endl;
//	}
//};
//class HeroC :public AbstractHero
//{
//public:
//	HeroC(){
//		cout << "Ӣ��C���ڴ�bos" << endl;
//	}
//	virtual void Update()
//	{
//		cout << "Ӣ��cֹͣ" << endl;
//	}
//};
//
////�۲�Ŀ�����
//class AbstractBoss
//{
//public:
//	//��ӹ۲���
//	virtual void addHero(AbstractHero* hero) = 0; 
//	//ɾ���۲���
//		virtual void deleteHero(AbstractHero * hero) = 0;
//		//֪ͨ�۲���
//		virtual void notity() = 0;
//};
//
////����۲���
//class BossA :public AbstractBoss
//{
//public:
//	list<AbstractHero*> heroList;
//	//��ӹ۲���
//	virtual void addHero(AbstractHero* hero)
//	{
//		heroList.push_back(hero);
//	}
//	//ɾ���۲���
//	virtual void deleteHero(AbstractHero* hero)
//	{
//		heroList.remove(hero);
//	}
//	//֪ͨ�۲���
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
//	//�����۲���
//	AbstractHero* haeroA = new HeroA;
//	AbstractHero* haeroB = new HeroB;
//	AbstractHero* haeroC = new HeroC;
//
//	//�����۲�Ŀ��
//	AbstractBoss* bossA = new BossA;
//	bossA->addHero(haeroA);
//	bossA->addHero(haeroB);
//	bossA->addHero(haeroC);
//	cout << "heroC����" << endl;
//	bossA->deleteHero(haeroC);
//	cout << "boss����" << endl;
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