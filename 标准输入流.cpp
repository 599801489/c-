//#include<iostream>
//using namespace std;
////��׼������  cin.get()
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
//	//cin.get(ch2);//��ȡһ���ַ�
//	//char buf[256] = { 0 };
//	//cin.get(buf, 256);//�ӻ�������һ���ַ���
//	//cin.getline(buf, 256);//��ȡһ������ �������з�
//}
//
//
////cin.ignore ���Ե�ǰ�ַ�
//void test02()
//{
//	char ch;
//	cin.get(ch);//�ӻ�����Ҫ����  ����
//	cout << ch << endl;
//	cin.ignore(10,'/n'); //���Ե�ǰ�ַ� �ӻ�����ȡ����
//	cin.get(ch);
//	cout << ch << endl;
//}
//
//void test03()
//{
//	cout << "���������ֻ��ַ���" << endl;
//	char ch;
//	ch=cin.peek();//͵��һ�»����������ص�һ���ַ�  ���û���������
//	if (ch >='0'&&ch<=9)
//	{
//		int number;
//		cin >> number;
//		cout << "�������������"<<number<<endl; 
//	}
//	else
//	{
//		char buf[256] = { 0 };
//		cin >> buf;
//		cout << "����������ַ�" << buf<<endl;
//	}
//}
////cin.putback ��cin.get��Ҫ��һ��ʹ��
//void test04()
//{
//	char ch;
//	cin.get(ch);
//	if (ch >= '0', ch <= '9')
//	{
//		cin.putback(ch); //��ch�Żػ�����
//		int number;
//		cin >> number;
//		cout << "�������������" << number;
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