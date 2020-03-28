//#include<iostream>
//#include<iomanip>
//using namespace std;
////标准输出流
//void test01()
//{
//	cout << "hello world"<<endl;
//	//cout << flush();
//	cout.put('a').put('b').put('c');
//	cout.write("你好",strlen("helloworld"));
//}
//
////格式化输出
//void test2()
//{
//	//成员方法的格式
//	int number = 10;
//	
//	cout.unsetf(ios::dec);//卸载默认的10进制输出方式
//	cout << number << endl;
//	cout.setf(ios::oct);//按照8进制输出
//	cout.setf(ios::showbase);
//	cout << number << endl;
//	cout.unsetf(ios::oct);//卸载8进制
//	cout.setf(ios::hex);
//	cout << number << endl;
//	cout.width(10); //设置宽为10
//	cout.fill('*');//空的地方用*代替
//	cout.setf(ios::left);//设置为左对齐
//	cout << number << endl;
//
//	//通过控制符
//	int number2 = 12;
//	cout << hex
//		<< setiosflags(ios::showbase)
//		<< setw(10)
//		<< setfill('~')
//		<<setiosflags(ios::left)
//		<< number2 << endl;
//
//
//}
//int main()
//{
//	test2();
//}
