//#include<iostream>
//using namespace  std;
//class COut
//{
//public:
//	 int a;
//	 COut():in(this) //通过this指针的初始化列表进行传递
//	 {
//		 a = 12;
//	 }
//public:
//	class CIn //再类的里面创建了一个类 就叫内部类
//	{
//	public:
//		int b;
//		COut* co;
//		CIn(COut* pf) :co(pf) //传入指针 指针初始化
//		{
//			b = 16;
//			
//		}
//		void funin()
//		{
//			
//			cout << co->a; //内部类不能使用外部类的成员
//			
//			
//		}
//	};
//public:
//	CIn in;  //需要再外部类中创建一个内部类对象
//	
//};
//int main()
//{
//	COut Cu;  //创建一个外部类对象
//	Cu.a = 15; 
//	Cu.in.funin(); //通过外部类对象调用内部类对象，再调用类部类对象里的函数；
//	return 0;
//}