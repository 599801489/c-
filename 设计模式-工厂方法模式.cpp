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
//
////���󹤳�
//class AbstracFruitFactory
//{
//public:
//	virtual AbstracFruit* createFruit() = 0;
//};
//
////ƻ������
//class appFactory :public AbstracFruitFactory
//{
//public:
//	virtual AbstracFruit* createFruit()
//	{
//		return new apple();
//	}
//};
//
////�㽶����
//class bannaFactory :public AbstracFruitFactory
//{
//public:
//	virtual AbstracFruit* createFruit()
//	{
//		return new banna();
//	}
//};
//
////pear����
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
//	//����һ��ƻ������
//	facory = new appFactory;
//	fruit = facory->createFruit();
//	fruit->showname();
//	delete facory;
//	delete fruit;
//
//	//����һ���㽶����
//	facory = new bannaFactory;
//	fruit = facory->createFruit();
//	fruit->showname();
//	delete facory;
//	delete fruit;
//
//
//	//����һ��pri����
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