//#include<iostream>
//using namespace std;
//
//
//
////�ṩһ�ִ�����������������ķ���
//
//class AbstractCommInface {
//public:
//	virtual void run() = 0;
//};
//
//
//class mySyetem :public AbstractCommInface
//{
//public:
//	virtual void run() {
//		cout << "ϵͳ����";
//	}
//protected:
//private:
//};
////����Ҫ��Ȩ����֤����������������������Ҫ�ṩ�û��� ����
//class mySystemProxy:public AbstractCommInface
//{
//public:
//	mySystemProxy(string user,
//	string pasw)
//	{
//		this->user = user;
//		this->pasw = pasw;
//		mysys = new mySyetem;
//		
//	}
//
//	bool checkUer()
//	{
//		if (user=="admin"&& pasw=="admin")
//		{
//			return true;
//		}
//			return false;
//		
//	}
//
//	virtual void run() {
//		if (checkUer()==true)
//		{
//			cout << "user��ȷ";
//			this->mysys->run();
//		}
//		else
//		{
//			cout << "����";
//		}
//	}
//	mySyetem* mysys;
//	string user;
//	string pasw;
//	~mySystemProxy()
//	{
//		if (mysys!=NULL)
//		{
//			delete mysys;
//		}
//	}
//};
////ͨ����������ϵͳ
//void test02()
//{
//	mySystemProxy* proxy = new mySystemProxy("admin","admin");
//	proxy->run();
//}
//int main(void)
//{
//	test02();
//cout<<"";
//
//}