//#include<iostream>
//using namespace std;
//
////电视机类
//class Television
//{
//public:
//	void On()
//	{
//		cout << "电视机打开" << endl;
//	}
//	void Off()
//	{
//		cout << "电视机关闭" << endl;
//	}
//};
////灯
//class Light
//{
//public:
//	void On()
//	{
//		cout << "灯打开" << endl;
//	}
//	void Off()
//	{
//		cout << "灯关闭" << endl;
//	}
//};
////音响
//class Audo
//{
//public:
//	void On()
//	{
//		cout << "Audo打开" << endl;
//	}
//	void Off()
//	{
//		cout << "Audo关闭" << endl;
//	}
//};
////麦克风
//class MicoPhone
//{
//public:
//	void On()
//	{
//		cout << "MicoPhone打开" << endl;
//	}
//	void Off()
//	{
//		cout << "MicoPhone关闭" << endl;
//	}
//};
//
////DVD
//class DvdPlayer
//{
//public:
//	void On()
//	{
//		cout << "DvdPlayer打开" << endl;
//	}
//	void Off()
//	{
//		cout << "DvdPlayer关闭" << endl;
//	}
//};
////游戏机
//class Game
//{
//public:
//	void On()
//	{
//		cout << "Game打开" << endl;
//	}
//	void Off()
//	{
//		cout << "Game关闭" << endl;
//	}
//};
//
//class ktvMode
//{
//public:
//	ktvMode()
//	{
//		pTv = new Television;
//		Pl = new Light;
//		Paudo = new Audo;
//		pmic = new MicoPhone;
//		pDvd = new DvdPlayer;
//	}
//	~ktvMode()
//	{
//		delete pTv;
//		delete 	Pl;
//		delete 	Paudo;
//		delete 	pmic;
//		delete 	pDvd;
//	}
//	void OnKtv()
//	{
//		pTv->On();
//		Pl->Off();
//		Paudo->On();
//		pmic->On();
//		pDvd->On();
//	}
//
//	void offKtv()
//	{
//		pTv->Off();
//		Pl->Off();
//		Paudo->Off();
//		pmic->Off();
//		pDvd->Off();
//	}
//
//
//	Television* pTv;
//	Light* Pl;
//	Audo* Paudo;
//	MicoPhone* pmic;
//	DvdPlayer* pDvd;
//};
//
//void test01()
//{
//	ktvMode* ktv = new ktvMode;
//	ktv->OnKtv();
//}
//
//int main(void)
//{
//	test01();
//cout<<"";
//
//}