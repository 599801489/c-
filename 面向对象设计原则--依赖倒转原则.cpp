//#include <iostream>
//using namespace std;
//
//
//class abstractWork
//{
//public:
//	virtual void doBusiness() = 0;
//
//};
////专门办理存款业务
//
//class saveWork :public abstractWork
//{
//public:
//		void doBusiness()
//	{
//		cout << "办理存款业务" << endl;
//	}
//};
//
////专门办理支付业务
//
//class payWork :public abstractWork
//{
//public:
//	void doBusiness()
//	{
//		cout << "办理支付业务" << endl;
//	}
//
//};
////专门办理转账业务
//class tranferWork :public abstractWork
//{
//public:
//
//	void doBusiness()
//	{
//		cout << "办理---业务" << endl;
//	}
//};
//
////中层业务
//void doNewBusiness(abstractWork*worker)
//{
//	worker->doBusiness();
//}
//void test02()
//{
//	abstractWork* transfer = new tranferWork;
//	doNewBusiness(transfer);
//}
//void main()
//{
//	test02();
//}
////
//////银行工作人员
////class Bankwork
////{
////public:
////	
////	void payService()
////	{
////		cout << "办理支付业务" << endl;
////	}
////	
////		void tranferService()
////	{
////		cout << "办理---业务" << endl;
////	}
////};
////
//////中层模块
////void doSaveBuss(Bankwork* worker)
////{
////	worker->saveService;
////}
////void dopayBuss(Bankwork* worker)
////{
////	worker->payService;
////}
////void dotranferBuss(Bankwork* worker)
////{
////	worker->tranferService;
////}
////
