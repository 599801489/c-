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
////ר�Ű�����ҵ��
//
//class saveWork :public abstractWork
//{
//public:
//		void doBusiness()
//	{
//		cout << "������ҵ��" << endl;
//	}
//};
//
////ר�Ű���֧��ҵ��
//
//class payWork :public abstractWork
//{
//public:
//	void doBusiness()
//	{
//		cout << "����֧��ҵ��" << endl;
//	}
//
//};
////ר�Ű���ת��ҵ��
//class tranferWork :public abstractWork
//{
//public:
//
//	void doBusiness()
//	{
//		cout << "����---ҵ��" << endl;
//	}
//};
//
////�в�ҵ��
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
//////���й�����Ա
////class Bankwork
////{
////public:
////	
////	void payService()
////	{
////		cout << "����֧��ҵ��" << endl;
////	}
////	
////		void tranferService()
////	{
////		cout << "����---ҵ��" << endl;
////	}
////};
////
//////�в�ģ��
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
