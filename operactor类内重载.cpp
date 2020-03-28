//#include<iostream>
//using namespace std;
//class stu {
//public:
//	int age;
//	stu()
//	{
//		age = 12;
//	}
//	int operator+(int a) //类内只写一个整数  默认有一个隐含参数  一个是this指针  相当于+号左侧 是一个对象  右侧是一个参数
//	//类内的局限性  当常数+对象   这种方式是实现不了的  
//	{
//		return(this->age + a); //类内 写不写this都可以
//	} 
//};
//int main()
//{
//	stu st;
//	cout<<(st + 12);
//	return 0;
//
//}