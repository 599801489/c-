//#include<iostream>
//using namespace std;
//
//class cfther
//{
//private:
//	int b;
//public:
//	int a;
//	cfther()
//	{
//		a = 12;
//		b = 14;
//	}
//	friend void show();
//};
//
//void show()
//{
//	cfther ft;
//	cout << ft.b << endl;
//	
//};
//
//class son :public cfther  //��дpublic  Ĭ��Ϊprivate
//{
//private:
//	int c;
//public :
//	int a;
//	son()
//	{
//		a = 10;
//	}
//	void fun()
//	{
//		cout << cfther::a;  //����һ�ֵ��������Σ�����Ҫʹ�ø����aʱ  ��Ҫ����������
//	}
//};
////������ͬ�������Ĳ�����ͬʱ����ʽ�������غ�����ʵ���ϲ��ǣ�����ʱ��Ҫ���ϸ����������
//int main()
//{
//	son s;
//	s.fun();
//	return 0;
//}