//#include<iostream>
//using namespace std;
//#include<string>
//#include<vector>
////迪米特法则
//class AbstractBuliding {
//public :
//	virtual void sale() = 0;
//	virtual string getQuality() = 0;
//};
//
//class BuidA :public AbstractBuliding
//{
//	public:
//		string mQulity;
//	BuidA()
//	{
//		mQulity = "高品质";
//	}
//	virtual void sale()
//	{
//		cout << "楼盘A" << mQulity << "被售卖" << endl;
//	}
//	virtual string getQuality()
//	{
//		return mQulity;
//	}
//};
//class BuidB :public AbstractBuliding
//{
//public:
//	string mQulity;
//	BuidB()
//	{
//		mQulity = "低品质";
//	}
//	virtual void sale()
//	{
//		cout << "楼盘A" << mQulity << "被售卖" << endl;
//	}
//	virtual string getQuality()
//	{
//		return mQulity;
//	}
//};
//
//
//void test01()
//{
//	BuidA* baa = new BuidA;
//	if (baa->mQulity = "低品质")
//	{
//		baa->sale();
//	}
//	BuidB* bb = new BuidB;
//	if (bb->mQulity = "低品质")
//	{
//		bb->sale();
//	}
//
//}
//
////中介类
//class mediator
//{
//	public:
//		vector<AbstractBuliding*> abv;
//		mediator()
//		{
//			AbstractBuliding* buliding = new BuidA;
//			abv.push_back(buliding);
//			buliding = new BuidB;
//			abv.push_back(buliding);
//
//		}
//		//对外提供接口
//		AbstractBuliding* findMyBuid(string quary)
//		{
//			for (vector< AbstractBuliding*> ::iterator it = abv.begin(); it != abv.end(); it++)
//			{
//				if ((*it)->getQuality==quary)
//				{
//					return *it;
//				}
//			}
//			return NULL;
//		}
//
//		~mediator()
//		{
//			for (vector< AbstractBuliding*> ::iterator it = abv.begin(); it != abv.end(); it++)
//			{
//				if (*it != NULL)
//				{
//					delete* it;
//				}
//			}
//		}
//};
//void test02()
//{
//	mediator* mmedi = new mediator;
//	AbstractBuliding* buliding = mmedi->findMyBuid("高品质");
//	if (buliding != NULL)
//	{
//		buliding->sale();
//	}
//	else
//	{
//		cout << "没有";
//	}
//}