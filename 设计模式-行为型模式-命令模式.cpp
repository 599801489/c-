//#include<iostream>
//using namespace std;
//#include <queue>
//
////协议处理类
//class HandleClientProtocol
//{
//public:
//	//处理增加金币的协议
//	void addMoney()
//	{
//		cout << "给玩家增加金币" << endl;
//	}
//	//处理郑家砖石
//	void addDiamond()
//	{
//		cout << "给玩家增加钻石" << endl;
//	}
//	void addLev()
//	{
//		cout << "给玩家升级" << endl;
//	}
//};
////定义协议命令接口
//class AbstractCmmand {
//public:
//	virtual void handle() = 0; //处理客户端请求的接口
//};
////处理增加井壁请求
//class addMonerCommand :public AbstractCmmand {
//public:
//	HandleClientProtocol* protoco;
//	addMonerCommand(HandleClientProtocol* protoco)
//	{
//		protoco = protoco;
//	}
//	virtual void handle()
//	{
//		protoco->addMoney();
//	}
//};
//
////处理增加钻石请求
//class addDiaCommand :public AbstractCmmand {
//public:
//	HandleClientProtocol* protoco;
//	addDiaCommand(HandleClientProtocol* protoco)
//	{
//		protoco = protoco;
//	}
//	virtual void handle()
//	{
//		protoco->addDiamond();
//	}
//};
//
//
//
//
////服务器程序
//class Server
//{
//public:
//	queue<AbstractCmmand*> mCommands;
//	void addRequest(AbstractCmmand *command)
//	{
//		mCommands.push(command);
//	}
//
//	void startHandle()
//	{
//		while (mCommands.empty())
//		{
//			AbstractCmmand* commond = mCommands.front();
//			commond->handle();
//			mCommands.pop();
//		}
//	}
//
//};
//
//void test01()
//{
//	HandleClientProtocol* protoco = new HandleClientProtocol;
//	//客户端增加金币的请求
//	AbstractCmmand* addmoney = new addMonerCommand(protoco);
//	//客户端增加钻石的请求
//	AbstractCmmand* addDimond = new addMonerCommand(protoco);
//	Server* server = new Server;
//
//	//将客户端的请求加入到服务器种
//	server->addRequest(addmoney);
//	server->addRequest(addDimond);
//	server->startHandle();//服务器开始处理请求
//
//}
//
//int main(void)
//{
//	test01();
//cout<<"";
//
//}