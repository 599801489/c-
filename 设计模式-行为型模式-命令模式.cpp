//#include<iostream>
//using namespace std;
//#include <queue>
//
////Э�鴦����
//class HandleClientProtocol
//{
//public:
//	//�������ӽ�ҵ�Э��
//	void addMoney()
//	{
//		cout << "��������ӽ��" << endl;
//	}
//	//����֣��שʯ
//	void addDiamond()
//	{
//		cout << "�����������ʯ" << endl;
//	}
//	void addLev()
//	{
//		cout << "���������" << endl;
//	}
//};
////����Э������ӿ�
//class AbstractCmmand {
//public:
//	virtual void handle() = 0; //����ͻ�������Ľӿ�
//};
////�������Ӿ�������
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
////����������ʯ����
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
////����������
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
//	//�ͻ������ӽ�ҵ�����
//	AbstractCmmand* addmoney = new addMonerCommand(protoco);
//	//�ͻ���������ʯ������
//	AbstractCmmand* addDimond = new addMonerCommand(protoco);
//	Server* server = new Server;
//
//	//���ͻ��˵�������뵽��������
//	server->addRequest(addmoney);
//	server->addRequest(addDimond);
//	server->startHandle();//��������ʼ��������
//
//}
//
//int main(void)
//{
//	test01();
//cout<<"";
//
//}