//#include<iostream>
//using namespace std;
//
//class DrinkTemplate
//{
//public:
//	//עˮ
//	virtual void boildWater() = 0;
//	//����
//	virtual void Breaw() = 0;
//	//����
//	virtual void PourIncap() = 0;
//	//����
//	virtual void addSomethin() = 0;
//
//	//ģ�巽��
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
////����kf
//class coffee :public DrinkTemplate
//{
//public:
//	//עˮ
//	virtual void boildWater()
//	{
//		cout << "עˮ" << endl;
//	}
//	//����
//	virtual void Breaw() {
//		cout << "����" << endl;
//	}
//	//����
//	virtual void PourIncap()
//	{
//		cout << "������" << endl;
//	}
//	//����
//	virtual void addSomethin()
//	{
//		cout << "����" << endl;
//	}
//
//};
//
////���ݲ�Ҷ
//class Tea :public DrinkTemplate
//{
//public:
//	//עˮ
//	virtual void boildWater()
//	{
//		cout << "עchaˮ" << endl;
//	}
//	//����
//	virtual void Breaw() {
//		cout << "��cha��" << endl;
//	}
//	//����
//	virtual void PourIncap()
//	{
//		cout << "��cha" << endl;
//	}
//	//����
//	virtual void addSomethin()
//	{
//		cout << "��lm" << endl;
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