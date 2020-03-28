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
//		cout << "大总qidong " << endl;
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
////针对具体类 不适应继承
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
////可以使用组合
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
////继承和组合优先使用组合
//void test02()
//{
//	Person* p = new Person;
//	p->setCar(new Dazong);
//	p->donfen();
//
//}