//#include<iostream>
//using namespace std;
//
//class DrinkTemplate
//{
//public:
//	//注水
//	virtual void boildWater() = 0;
//	//冲泡
//	virtual void Breaw() = 0;
//	//到杯
//	virtual void PourIncap() = 0;
//	//加料
//	virtual void addSomethin() = 0;
//
//	//模板方法
//	void meke()
//	{
//		boildWater();
//		Breaw();
//		PourIncap();
//		addSomethin();
//	}
//
//};
//
////冲泡kf
//class coffee :public DrinkTemplate
//{
//public:
//	//注水
//	virtual void boildWater()
//	{
//		cout << "注水" << endl;
//	}
//	//冲泡
//	virtual void Breaw() {
//		cout << "冲泡" << endl;
//	}
//	//到杯
//	virtual void PourIncap()
//	{
//		cout << "倒咖啡" << endl;
//	}
//	//加料
//	virtual void addSomethin()
//	{
//		cout << "加料" << endl;
//	}
//
//};
//
////冲泡茶叶
//class Tea :public DrinkTemplate
//{
//public:
//	//注水
//	virtual void boildWater()
//	{
//		cout << "注cha水" << endl;
//	}
//	//冲泡
//	virtual void Breaw() {
//		cout << "冲cha泡" << endl;
//	}
//	//到杯
//	virtual void PourIncap()
//	{
//		cout << "倒cha" << endl;
//	}
//	//加料
//	virtual void addSomethin()
//	{
//		cout << "加lm" << endl;
//	}
//};
//
//void test()
//{
//	Tea* tea = new Tea;
//	tea->meke();
//}
//
//int main(void)
//{
//	test();
//cout<<"";
//
//}