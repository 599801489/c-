//#include<iostream>
//using namespace std;
//class Ca
//{
//private:
//	
//	Ca()
//	{
//		
//		cout << "调用了privateCa构造函数";
//
//	}
//public:
//	static int a;
//	 static Ca* fun()
//	{
//		 if(1==a)
//		 { 
//				 a = 0;
//				return(new Ca);  //在类内new了一个Ca的对象  执行这个fun方法的时候会调用private的构造函数
//		 }
//		 else
//		 {
//			 return NULL;
//		 }
//	 }
//	 ~Ca(){   //执行析构函数时 将标记a还原成初始数值  下一次调用的时候可以进入if判断里  再执行一次private的构造方法，即再new一个对象  
//		 a = 1;
//	}
//	
//
//};
//int Ca::a = 1;//静态成员需要在类外初始化
//class cb :public Ca
//{
//public:
//	void fun()
//	{
//		cout << "cb";
//	}
//};
//
//
//
//int main()
//{
//
//	
//	
//	Ca* c = Ca::fun();
//	delete c;
//	Ca* c1 = Ca::fun();
//	delete c1;
//	//if(c1==NULL)
//	return 0;
//}
