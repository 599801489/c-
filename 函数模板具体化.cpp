//#include<iostream>
//using namespace std;
//
//struct Mtruct
//{
//	int a;
//	double b;
//
//};
//
//template<class T>//T Ϊͨ������ �����ж������ ���������fun��Ч  
//void fun(T a) //�������������� ��ṹ�� ������õ�������ķ�ʽ
//{
//	cout << a << endl;
//}
//
//template<> void fun<Mtruct>(Mtruct& no) //�����������������  ִ��������廯  ԭ�����Ǹ��Ͳ�ִ��  ��ͨ���͵ľͲ�ִ�о��廯
//{
//	cout << no.a;
//}
//int main()
//{
//	Mtruct mt = {12,12.2};//�ṹ���ʼ��
//	fun(mt);
//	fun("anan");
//	return 0;
//}