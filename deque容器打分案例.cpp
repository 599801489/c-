//#include<iostream>
//#include<deque>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//
////��ί��ְ�����sort�㷨����
////����5��ѡ�֣��������÷֣���10����ί��5��ѡ�ֽ��д��
////�÷ֹ���ȥ����߷֣�ȥ����ͷ֣�ȡ��ƽ����
////���÷ֶ�5��ѡ�ֽ�������
//
//
//class Player
//{
//public:
//	string name;
//	int Score;
//public:
//
//	Player() {};
//	Player(string name, int score) :name(name), Score(score) {};
//};
//
////����ѡ��
//void creat_Player(vector<Player>& v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		Player p;
//		p.name = "ѡ��";
//		p.name += nameSeed[i];
//		p.Score = 0;
//		v.push_back(p);
//	}
//}
//
//void PrintScore(int val)
//{
//	cout << val;
//}
//
////���
//void set_score(vector<Player>& v)
//{
//	for (vector<Player>::iterator it = v.begin(); it != v.begin(); it++)
//	{
//		//��ǰѧ�����д��
//		deque<int> descore;
//		for (int j = 0; j < 10; j++)
//		{
//			int score = rand() % 41 + 60;
//			descore.push_back(score);
//		}
//		//�Է������� Ĭ�ϴ�С����
//		sort(descore.begin(),descore.end());
//
//		//for_each(descore.begin(), PrintScore);
//		//ȥ����߷�  ȥ����ͷ�
//		descore.pop_front();
//		descore.pop_back();
//		
//		//��ƽ����
//		int totalscore = 0;
//		for (deque<int>::iterator dit = descore.begin(); dit != descore.end(); dit++)
//		{
//			totalscore += (*dit);
//		}
//		int avgScore = totalscore / descore.size();
//
//		//�Ž�ȥ �������
//		(*it).Score = avgScore;
//
//		cout << avgScore;
//	}
//}
////�������
//bool mycompare(Player& p1,Player& p2)
//{
//	return p1.Score > p2.Score;
//}
////����ѡ�ַ�������  sortĬ�ϴ�С���� ��������ϣ���Ӵ�С
//void print_pank(vector<Player>& v)
//{
//	sort(v.begin(), v.end(), mycompare);
//	for (vector<Player> ::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "����" << (*it).name << "�÷�" << (*it).Score << endl;
//	}
//}
//int main()
//{
//	//����vector����������ѡ����Ϣ
//	vector<Player> vPlist;
//	creat_Player(vPlist);
//	set_score(vPlist);
//	print_pank(vPlist);
//
//	return 0;
//}