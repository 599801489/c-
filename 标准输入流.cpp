//#include<iostream>
//using namespace std;
////标准输入流  cin.get()
//void test01()
//{
//	char ch;
//	while ((ch = cin.get()) !=EOF)
//	{
//		cout << ch << endl;
//		
//	}
//
//	//char ch2;
//	//cin.get(ch2);//读取一个字符
//	//char buf[256] = { 0 };
//	//cin.get(buf, 256);//从缓冲区读一个字符串
//	//cin.getline(buf, 256);//读取一行数据 不读换行符
//}
//
//
////cin.ignore 忽略当前字符
//void test02()
//{
//	char ch;
//	cin.get(ch);//从缓冲区要数据  阻塞
//	cout << ch << endl;
//	cin.ignore(10,'/n'); //忽略当前字符 从缓冲区取走了
//	cin.get(ch);
//	cout << ch << endl;
//}
//
//void test03()
//{
//	cout << "请输入数字或字符串" << endl;
//	char ch;
//	ch=cin.peek();//偷窥一下缓冲区，返回第一个字符  如果没有则会阻塞
//	if (ch >='0'&&ch<=9)
//	{
//		int number;
//		cin >> number;
//		cout << "您输入的是数字"<<number<<endl; 
//	}
//	else
//	{
//		char buf[256] = { 0 };
//		cin >> buf;
//		cout << "您输入的是字符" << buf<<endl;
//	}
//}
////cin.putback 和cin.get需要在一起使用
//void test04()
//{
//	char ch;
//	cin.get(ch);
//	if (ch >= '0', ch <= '9')
//	{
//		cin.putback(ch); //将ch放回缓冲区
//		int number;
//		cin >> number;
//		cout << "您输入的是数字" << number;
//	
//	
//
//	}
//}
//
//int main()
//{
//	test04();
//	
//	return 0;
//
// }