//#include<iostream>
//using namespace std;
//#include<string>
//#include<vector>
////�����ط���
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
//		mQulity = "��Ʒ��";
//	}
//	virtual void sale()
//	{
//		cout << "¥��A" << mQulity << "������" << endl;
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
//		mQulity = "��Ʒ��";
//	}
//	virtual void sale()
//	{
//		cout << "¥��A" << mQulity << "������" << endl;
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
//	if (baa->mQulity = "��Ʒ��")
//	{
//		baa->sale();
//	}
//	BuidB* bb = new BuidB;
//	if (bb->mQulity = "��Ʒ��")
//	{
//		bb->sale();
//	}
//
//}
//
////�н���
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
//		//�����ṩ�ӿ�
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
//	AbstractBuliding* buliding = mmedi->findMyBuid("��Ʒ��");
//	if (buliding != NULL)
//	{
//		buliding->sale();
//	}
//	else
//	{
//		cout << "û��";
//	}
//}