//#include<iostream>
//using namespace std;
//
////����ˮ��
//class AbstracFruit {
//public:
//	virtual void showname() = 0;
//};
//class apple:public AbstracFruit
//{
//public:
//	virtual void showname()
//	{
//		cout << "����ƻ��";
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
//		cout << "����banna";
//	}
//protected:
//private:
//};
//class pear :public AbstracFruit
//{
//public:
//	virtual void showname()
//	{
//		cout << "����pear";
//	}
//protected:
//private:
//};
//
////ˮ������
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