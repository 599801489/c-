//#include<iostream>
//using namespace std;
// 
//class stu
//{
//public:
//	int age;
//	double height;
//	stu()
//	{
//		age = 0;
//		height = 0.0;
//	}
//	void show()
//	{
//		cout << age;
//	}
//	friend istream& operator>>(istream& is, stu& st);
//};
//istream& operator>>(istream& is, stu& st)
//{
//	is >> st.age;
//	is >> st.height;
//	if (is.fail())
//	{
//		cout << "ÊäÈë´íÎó";
//	}
//
//	return is;
//}
//int main()
//{
//	stu st;
//	cin >> st.age>>st.height;
//	st.show();
//	return 0;
//}