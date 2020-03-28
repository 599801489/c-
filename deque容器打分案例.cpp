//#include<iostream>
//#include<deque>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//
////评委打分案例（sort算法排序）
////创建5个选手（姓名，得分），10个评委对5个选手进行打分
////得分规则：去除最高分，去除最低分，取出平均分
////按得分对5名选手进行排名
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
////创建选手
//void creat_Player(vector<Player>& v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		Player p;
//		p.name = "选手";
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
////打分
//void set_score(vector<Player>& v)
//{
//	for (vector<Player>::iterator it = v.begin(); it != v.begin(); it++)
//	{
//		//当前学生进行打分
//		deque<int> descore;
//		for (int j = 0; j < 10; j++)
//		{
//			int score = rand() % 41 + 60;
//			descore.push_back(score);
//		}
//		//对分数排序 默认从小到大
//		sort(descore.begin(),descore.end());
//
//		//for_each(descore.begin(), PrintScore);
//		//去出最高分  去除最低分
//		descore.pop_front();
//		descore.pop_back();
//		
//		//求平均分
//		int totalscore = 0;
//		for (deque<int>::iterator dit = descore.begin(); dit != descore.end(); dit++)
//		{
//			totalscore += (*dit);
//		}
//		int avgScore = totalscore / descore.size();
//
//		//放进去 保存分数
//		(*it).Score = avgScore;
//
//		cout << avgScore;
//	}
//}
////排序规则
//bool mycompare(Player& p1,Player& p2)
//{
//	return p1.Score > p2.Score;
//}
////根据选手分数排序  sort默认从小到大 但是我们希望从大到小
//void print_pank(vector<Player>& v)
//{
//	sort(v.begin(), v.end(), mycompare);
//	for (vector<Player> ::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名" << (*it).name << "得分" << (*it).Score << endl;
//	}
//}
//int main()
//{
//	//定义vector容器，保持选手信息
//	vector<Player> vPlist;
//	creat_Player(vPlist);
//	set_score(vPlist);
//	print_pank(vPlist);
//
//	return 0;
//}