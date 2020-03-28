//#include <iostream>
//using namespace std;
//
//class farther
//{
//public :
//	virtual void show() //将virtual放在函数前边  这个函数就是一个虚函数
//	{
//		cout << "class farther" << endl;
//	}
//};
//class son : public farther 
//{
//public :
//	int aa;
//	 void show()
//	{
//		cout << "son" << endl;
//	}
//};
//class son1 :public farther
//{
//public:
//	int aa;
//	void show()
//	{
//		cout << "son" << endl;
//	}
//};
//int main()
//{
//
//	farther* fa = new son;  //由类型决定指针的使用空间  父类指针指向哪个类 ，就调用哪个类的虚函数
//	fa->show(); //普通的只能调用子类的成员 如果有virtual就可以调用子类的 只有父类和子类的函数名字一样 才能达到虚函数的效果
//	return 0;
//}