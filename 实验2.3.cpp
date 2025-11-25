#include <iostream>
using namespace std;
int main() {
	float a, b, c;
	cout << "请输入三角形的三边长度(cm):" << endl;
	cin >> a >> b >> c;
	if (a>0&&b>0&&c>0)
	{
		if ((a + b) > c && (b + c) > a && (a + c) > b) {
			cout << "三角形的周长为:" << a + b + c << endl;
			if (a==b||b==c||a==c)
			{
				cout << "该三角形为等腰三角形";
			}
			else
			{
				cout << "该三角形不是等腰三角形";
			}
		}
		else
		{
			cout << "请输入合理的三边长!";
		}

	}
	else
	{
		cout << "请输入合理的三边长!";
	}
}