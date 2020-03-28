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
// //实现单例的步骤
//	//1.构造函数私有化
//	//2.增加静态私有的当前类的指针
//	//3.提供一个静态的对外接口，可以让用户获得单例对象
//
// //单例分为 懒汉式 和饿汉式
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
// //静态成员类外初始化
// Singlentor_lazy* Singlentor_lazy:: lazy=NULL;
//
//
// //饿汉式
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
// //初始化创建对象
// Singlentor_hungry* Singlentor_hungry::hungry = new Singlentor_hungry;
//
// void test01()
// {
//	 Singlentor_lazy*p1= Singlentor_lazy::getInstance();
//	 Singlentor_lazy* p2 = Singlentor_lazy::getInstance();
//	 if (p1==p2)
//	 {
//		 cout << "两个指针指向同一块内存 是单例";
//	 }
//	 else
//	 {
//		 cout << "不是";
//	 }
//
//	 Singlentor_hungry* p3 = Singlentor_hungry::getInstance();
//	 Singlentor_hungry* p4 = Singlentor_hungry::getInstance();
//	 if (p3 == p4)
//	 {
//		 cout << "两个指针指向同一块内存 是单例";
//	 }
//	 else
//	 {
//		 cout << "不是";
//	 }
// }
//
// //内存释放问题   
// void test02()
// {
//	 Singlentor_hungry::freeSpace();
// }
//
//int main(void)
//{
//	test01();
//	cout << "main开始执行";
//	
//cout<<"";
//
//}