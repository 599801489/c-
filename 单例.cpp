//#include<iostream>
//using namespace std;
//class Ca
//{
//private:
//	
//	Ca()
//	{
//		
//		cout << "������privateCa���캯��";
//
//	}
//public:
//	static int a;
//	 static Ca* fun()
//	{
//		 if(1==a)
//		 { 
//				 a = 0;
//				return(new Ca);  //������new��һ��Ca�Ķ���  ִ�����fun������ʱ������private�Ĺ��캯��
//		 }
//		 else
//		 {
//			 return NULL;
//		 }
//	 }
//	 ~Ca(){   //ִ����������ʱ �����a��ԭ�ɳ�ʼ��ֵ  ��һ�ε��õ�ʱ����Խ���if�ж���  ��ִ��һ��private�Ĺ��췽��������newһ������  
//		 a = 1;
//	}
//	
//
//};
//int Ca::a = 1;//��̬��Ա��Ҫ�������ʼ��
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
