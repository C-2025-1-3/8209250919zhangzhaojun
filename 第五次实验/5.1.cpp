#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:             // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void hour_(int *hour) { cin >> *hour; }
	void minute_(int *minute) { cin >> *minute; }
	void second_(int *second) { cin >> *second; }
	void time(int hour, int minute, int second)
	{
		cout << hour << ":" << minute << ":" << second << endl;
	}
};
int main()
{
	int h=0, m=0, s=0;
	int* h1, * m1, * s1;
	h1 = &h; m1 = &m; s1 = &s;
	Time t1;           //定义t1为Time类对象
	t1.hour_(h1);      //输入设定的时间 
	t1.minute_(m1);
	t1.second_(s1);
	if (h >= 0 && h <= 60 && m >= 0 && m <= 60 && s >= 0 && s <= 60)
	{
		t1.time(h,m,s);
		return 0;
	}
	else {
		cout << "请输入正确时间！" << endl;
		return -1;
	}
}	
