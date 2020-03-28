//#include<iostream>
//using namespace std;
//
//
//
////提供一种代理来控制其他对象的访问
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
//		cout << "系统启动";
//	}
//protected:
//private:
//};
////必须要有权限验证，不是所有人来启动，需要提供用户名 密码
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
//			cout << "user正确";
//			this->mysys->run();
//		}
//		else
//		{
//			cout << "错误";
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
////通过代理启动系统
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