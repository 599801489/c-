//#include <iostream>
//using namespace std;
//
//class abstractCar
//{
//public:
//	virtual void run() = 0;
//	
//};
//class Dazong :public abstractCar {
//public:
//	virtual void run()
//	{
//		cout << "����qidong " << endl;
//	}
//};
//
//class tuolaji :public abstractCar {
//public:
//	virtual void run()
//	{
//		cout << "tuolajiqidong " << endl;
//	}
//};
//#if 0
//
//
////��Ծ����� ����Ӧ�̳�
//class Person :public tuolaji
//{
//public:
//	void Doufeng()
//	{
//		run();
//	}
//};
//
//#endif // 0
//
////����ʹ�����
//class Person
//{
//public:
//	abstractCar* car;
//	void setCar(abstractCar* car)
//	{
//		car = car;
//	}
//	void donfen()
//	{
//		car->run();
//	}
//	
//};
////�̳к��������ʹ�����
//void test02()
//{
//	Person* p = new Person;
//	p->setCar(new Dazong);
//	p->donfen();
//
//}