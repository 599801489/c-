//#include<iostream>
//using namespace std;
//
//class A {
//	private:
//		A() {
//			a = new A;
//		}
//public:
//	static A* getInstce()
//	{
//		return a;
//	}
//private:
//	static A* a;
//};
// A* A:: a = NULL;
//
// //ʵ�ֵ����Ĳ���
//	//1.���캯��˽�л�
//	//2.���Ӿ�̬˽�еĵ�ǰ���ָ��
//	//3.�ṩһ����̬�Ķ���ӿڣ��������û���õ�������
//
// //������Ϊ ����ʽ �Ͷ���ʽ
// class Singlentor_lazy
// {
// private:
//	 Singlentor_lazy() { cout << "lazy"; };
// public:
//	 static Singlentor_lazy* getInstance()
//	 {
//		 if (lazy==NULL)
//		 {
//			 lazy = new Singlentor_lazy;
//		 }
//		 return lazy;
//	 }
//	 static Singlentor_lazy* lazy;
// };
// //��̬��Ա�����ʼ��
// Singlentor_lazy* Singlentor_lazy:: lazy=NULL;
//
//
// //����ʽ
// class Singlentor_hungry
// {
// private:
//	 Singlentor_hungry() { cout << "hungry"; };
//	 //static Garbo garbo;
// public:
//	 static Singlentor_hungry* getInstance()
//	 {
//		
//		 return hungry;
//	 }
//#if 0
//	 static void freeSpace()
//	 {
//		 if (hungry != NULL)
//		 {
//			 delete hungry;
//		 }
//	 }
//
//
//#endif
//
//	 class Garbo {
//		 ~Garbo()
//		 {
//			 if (hungry != NULL)
//			 {
//				 delete hungry;
//			 }
//		 }
//	 };
//
//
//	 static Singlentor_hungry* hungry;
// };
// //��ʼ����������
// Singlentor_hungry* Singlentor_hungry::hungry = new Singlentor_hungry;
//
// void test01()
// {
//	 Singlentor_lazy*p1= Singlentor_lazy::getInstance();
//	 Singlentor_lazy* p2 = Singlentor_lazy::getInstance();
//	 if (p1==p2)
//	 {
//		 cout << "����ָ��ָ��ͬһ���ڴ� �ǵ���";
//	 }
//	 else
//	 {
//		 cout << "����";
//	 }
//
//	 Singlentor_hungry* p3 = Singlentor_hungry::getInstance();
//	 Singlentor_hungry* p4 = Singlentor_hungry::getInstance();
//	 if (p3 == p4)
//	 {
//		 cout << "����ָ��ָ��ͬһ���ڴ� �ǵ���";
//	 }
//	 else
//	 {
//		 cout << "����";
//	 }
// }
//
// //�ڴ��ͷ�����   
// void test02()
// {
//	 Singlentor_hungry::freeSpace();
// }
//
//int main(void)
//{
//	test01();
//	cout << "main��ʼִ��";
//	
//cout<<"";
//
//}