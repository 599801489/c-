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
////水果工厂
//class fruitFactory
//{
//public:
//	fruitFactory();
//	~fruitFactory();
//	static AbstracFruit* createFruit(string flag)
//	{
//		if (flag == "apple")
//		{
//			return new apple;
//		}
//		else if (flag == "banna")
//		{
//			return new banna;
//		}
//		else if (flag == "pear")
//		{
//			return new pear;
//		}
//		else
//		{
//			return NULL;
//		}
//		
//	}
//private:
//
//};
//
//fruitFactory::fruitFactory()
//{
//}
//
//fruitFactory::~fruitFactory()
//{
//}
//
//
//void tese01()
//{
//
//	fruitFactory* fFactory = new fruitFactory;
//	AbstracFruit* fruit = fFactory->createFruit("apple");
//	fruit->showname();
//	delete fruit;
//	 fruit = fFactory->createFruit("banna");
//	fruit->showname();
//	delete fruit;
//	 fruit = fFactory->createFruit("pear");
//	 fruit->showname();
//}
//int main(void)
//{
//	tese01();
//cout<<"";
//
//}