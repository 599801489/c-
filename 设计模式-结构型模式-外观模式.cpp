//#include<iostream>
//using namespace std;
//
////���ӻ���
//class Television
//{
//public:
//	void On()
//	{
//		cout << "���ӻ���" << endl;
//	}
//	void Off()
//	{
//		cout << "���ӻ��ر�" << endl;
//	}
//};
////��
//class Light
//{
//public:
//	void On()
//	{
//		cout << "�ƴ�" << endl;
//	}
//	void Off()
//	{
//		cout << "�ƹر�" << endl;
//	}
//};
////����
//class Audo
//{
//public:
//	void On()
//	{
//		cout << "Audo��" << endl;
//	}
//	void Off()
//	{
//		cout << "Audo�ر�" << endl;
//	}
//};
////��˷�
//class MicoPhone
//{
//public:
//	void On()
//	{
//		cout << "MicoPhone��" << endl;
//	}
//	void Off()
//	{
//		cout << "MicoPhone�ر�" << endl;
//	}
//};
//
////DVD
//class DvdPlayer
//{
//public:
//	void On()
//	{
//		cout << "DvdPlayer��" << endl;
//	}
//	void Off()
//	{
//		cout << "DvdPlayer�ر�" << endl;
//	}
//};
////��Ϸ��
//class Game
//{
//public:
//	void On()
//	{
//		cout << "Game��" << endl;
//	}
//	void Off()
//	{
//		cout << "Game�ر�" << endl;
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