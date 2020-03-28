//#include<iostream>
//#include<vector>
//#include<map>
//#include<algorithm>
//#include<numeric>
//#include<functional>
//#include<deque>
//#include<time.h>
//using namespace std;
//class player
//{
//public:
//	string name;
//	int score[3];
//};
////创建选手
//void create_player(map<int, player> &mPlist , vector<int> &v1)
//{
//	string seedName = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	for (int i = 0; i < 24; i++)
//	{
//		player p;
//		p.name = "选手:";
//		p.name += seedName[i];
//		for (int j = 0; j < 3; j++)
//		{
//			p.score[j] = 0;
//		}
//		int uid = 100 + i;
//		mPlist.insert(make_pair(uid, p)); //保存选手个人信息
//		v1.push_back(uid);
//	}
//}
//
////选手抽签
//void set_Randow(vector<int>& v)
//{
//	random_shuffle(v.begin(), v.end());
//
//}
//
////比赛
//void set_score(int index, vector<int>& v1, map<int, player>& mPlist, vector<int>& v2)
//{
//	srand((unsigned int)time(NULL));
//	//第一个int为分数，根据分数自动排序，第二个为编号
//	multimap<int, int,greater<int>> mGroup; //默认根据分数 从小到大
//	int group = 0;
//	for (vector<int>::iterator it = v1.begin();it != v1.end(); it++)
//	{
//		deque<int> dScore;
// 		//打分
//		for (int i = 0; i < 10; i++)
//		{	
//			int score = rand() % 30 + 60;
//			dScore.push_back(score);
//		}
//		//排序
//		sort(dScore.begin(), dScore.end());
//		//去除最高最低分
//		dScore.pop_back();
//		dScore.pop_front();
//		//求平均分
//	int total=accumulate(dScore.begin(), dScore.end(), 0);
//	int avg = total / dScore.size();
//	mPlist[*it].score[index - 1] = avg;
//	//把当前的选手编号放到mgroup周；
//	mGroup.insert(make_pair(avg, *it));
//	group++;
//	if (group % 6 == 0)
//	{
//		int numIdx = 0;
//		for (multimap<int, int>::iterator mit = mGroup.begin();mit!=mGroup.end();mit++)
//		{
//			if (numIdx>=3)
//			{
//				break;
//			}
//			v2.push_back((*mit).second);
//			numIdx++;
//		}
//		mGroup.clear();
//	}
//	}
//}
////打印晋级名单
//void show_Good_player(int index, vector<int>& v, map<int, player>& mPlist)
//{
//	cout << "第" << index << "伦名单" << endl;
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名:" << mPlist[*it].name << " " << mPlist[*it].score[index - 1] << endl;
//	}
//
//}
//int main(void)
//{
//	//定义map容器,保存选手编号信息
//	map<int, player> mPlist;
//	//第一轮比赛参数列表
//	vector<int> v1; //24人晋级12人
//
//	//第二轮比赛的参赛列表
//	vector<int> v2; //12人晋级6人
//
//	//第三轮比赛的参赛列表
//	vector<int> v3;//6人晋级3人
//
//	//最后的前三名
//	vector<int> v4;
//
//	create_player(mPlist, v1);
//
//	//第一轮比赛
//	set_Randow(v1);
//	set_score(1, v1, mPlist, v2);//打分
//	show_Good_player(1, v2, mPlist);
//
//	//第二轮比赛
//	set_Randow(v2);
//	set_score(2, v2, mPlist, v3);//打分
//	show_Good_player(2, v3, mPlist);
//
//	//第三轮比赛
//	set_Randow(v3);
//	set_score(3, v3, mPlist, v4);//打分
//	show_Good_player(3, v4, mPlist);
//}