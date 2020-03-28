//#include<iostream>
//using namespace std;
//class stu
//{
//public:
//	int a;
//	int b;
//	int c;
//	double d;
//	int nerror;
//	stu()
//	{
//		a = 12;
//		b = 13;
//		c = 14;
//		d = 15.16;
//		nerror = -1;
//	}
//
//	void* operator[](int a)
//	{
//		
//		switch (a)
//		{
//		case 0:
//			return &a;
//		case 1:
//			return &d;
//
//		}
//		return &nerror;
//	}
//
//};
//
//
//int main()
//{
//
//	stu st;
//	cout<<*(double*)st[1];//ÀàĞÍ×ª»»  
//	*(double*)st[1] = 16.19;
//	cout << *(double*)st[1] << endl;
//	*(int *)st[0] = 14;
//	cout << *(int*)st[0];
//	return 0;
//}