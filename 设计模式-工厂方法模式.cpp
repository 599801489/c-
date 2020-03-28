//#include<iostream>
//using namespace std;
//
////抽象水果
//class AbstracFruit {
//public:
//	virtual void showname() = 0;
//};
//class apple:public AbstracFruit
//{
//public:
//	virtual void showname()
//	{
//		cout << "我是苹果";
//	}
//protected:
//private:
//};
//
//class banna :public AbstracFruit
//{
//public:
//	virtual void showname()
//	{
//		cout << "我是banna";
//	}
//protected:
//private:
//};
//class pear :public AbstracFruit
//{
//public:
//	virtual void showname()
//	{
//		cout << "我是pear";
//	}
//protected:
//private:
//};
//
//
////抽象工厂
//class AbstracFruitFactory
//{
//public:
//	virtual AbstracFruit* createFruit() = 0;
//};
//
////苹果工厂
//class appFactory :public AbstracFruitFactory
//{
//public:
//	virtual AbstracFruit* createFruit()
//	{
//		return new apple();
//	}
//};
//
////香蕉工厂
//class bannaFactory :public AbstracFruitFactory
//{
//public:
//	virtual AbstracFruit* createFruit()
//	{
//		return new banna();
//	}
//};
//
////pear工厂
//class pearFactory :public AbstracFruitFactory
//{
//public:
//	virtual AbstracFruit* createFruit()
//	{
//		return new pear();
//	}
//};
//
//
//void tese01()
//{
//	AbstracFruitFactory* facory = NULL;
//	AbstracFruit* fruit = NULL;
//	//创建一个苹果工厂
//	facory = new appFactory;
//	fruit = facory->createFruit();
//	fruit->showname();
//	delete facory;
//	delete fruit;
//
//	//创建一个香蕉工厂
//	facory = new bannaFactory;
//	fruit = facory->createFruit();
//	fruit->showname();
//	delete facory;
//	delete fruit;
//
//
//	//创建一个pri工厂
//	facory = new pearFactory;
//	fruit = facory->createFruit();
//	fruit->showname();
//	delete facory;
//	delete fruit;
//
//
//}
//int main(void)
//{
//	tese01();
//cout<<"";
//
//}