//#include<iostream>
//using namespace std;
//
//
//class AbstractApple
//{
//public:
//	virtual void showname() = 0;
//protected:
//private:
//};
//
////�й�ƻ��
//class chinaApple :public AbstractApple
//{
//public:
//	virtual void showname()
//	{
//		cout << "chainƻ��";
//	}
//};
//
////usaApple
//class usaApple :public AbstractApple
//{
//public:
//	virtual void showname()
//	{
//		cout << "usaApple";
//	}
//};
//
////jpApple
//class jpApple :public AbstractApple
//{
//public:
//	virtual void showname()
//	{
//		cout << "jpAppleƻ��";
//	}
//};
//
////�����㽶
//class AbstractBanna
//{
//public:
//	virtual void showname() = 0;
//};
//
////�й�ƻ��
//class chinaBanna :public AbstractBanna
//{
//public:
//	virtual void showname()
//	{
//		cout << "chinaBanna";
//	}
//};
//
////usaApple
//class usaBanna :public AbstractBanna
//{
//public:
//	virtual void showname()
//	{
//		cout << "usaBanna";
//	}
//};
//
////jpApple
//class jpBanna:public AbstractBanna
//{
//public:
//	virtual void showname()
//	{
//		cout << "jpApplejpBanna";
//	}
//};
//
//
////����
//class AbstractPear
//{
//public:
//	virtual void showname() = 0;
//};
//
////�й�chinaPear
//class chinaPear :public AbstractPear
//{
//public:
//	virtual void showname()
//	{
//		cout << "chinaPear";
//	}
//};
//
////
//class usaPear :public AbstractPear
//{
//public:
//	virtual void showname()
//	{
//		cout << "usaPear";
//	}
//};
//
////
//class jpPear :public AbstractPear
//{
//public:
//	virtual void showname()
//	{
//		cout << "jpPear";
//	}
//};
//
////���󹤳� ��Բ�Ʒ�ߵ�
//class AbstracFactory
//{
//public:
//	virtual AbstractApple* createApple() = 0;
//	virtual AbstractBanna* createBanna() = 0;
//	virtual AbstractPear* createpear() =0 ;
//
//};
//
//class ChinaFactory:public AbstracFactory
//{
//public:
//	virtual AbstractApple* createApple()
//	{
//		return new chinaApple;
//	}
//	virtual AbstractBanna* createBanna() {
//		return new chinaBanna;
//	}
//	virtual AbstractPear* createpear()
//	{
//		return new chinaPear;
//	}
//
//};
//
//
//class UsnFactory :public AbstracFactory
//{
//public:
//	virtual AbstractApple* createApple()
//	{
//		return new usaApple;
//	}
//	virtual AbstractBanna* createBanna() {
//		return new usaBanna;
//	}
//	virtual AbstractPear* createpear()
//	{
//		return new usaPear;
//	}
//
//};
//
//class JPFactory :public AbstracFactory
//{
//public:
//	virtual AbstractApple* createApple()
//	{
//		return new jpApple;
//	}
//	virtual AbstractBanna* createBanna() {
//		return new jpBanna;
//	}
//	virtual AbstractPear* createpear()
//	{
//		return new jpPear;
//	}
//
//};
//
//void test01()
//{
//	AbstracFactory* factory = NULL;
//	AbstractApple* apple = NULL;
//	AbstractBanna* banna = NULL;
//	AbstractPear* pear = NULL;
//	factory = new ChinaFactory;
//	apple = factory->createApple();
//	banna = factory->createBanna();
//	pear = factory->createpear();
//
//	apple->showname();
//	pear->showname();
//	banna->showname();
//
//	delete pear;
//	delete banna;
//	delete apple;
//	delete factory;
//
//}
//
//int main(void)
//{
//	test01();
//cout<<"";
//
//}