#include <iostream>
#include <cmath>
#include "mytriangle.h"
using namespace std;
bool is_valid(double side1, double side2, double side3) {
	if (side1 > 0 && side2 > 0 && side3 > 0)
	{
		if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}
double area(double side1, double side2, double side3) {
	float s = (side1 + side2 + side3) / 2;
	double sq = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return sq;
}
int main() {
	int a, b, c;
	cout << "请输入三角形边长：" << endl;
	cin >> a >> b >> c;
	if (is_valid(a, b, c)) {
		double s = area(a, b, c);/*s是面积*/
		cout << "三角形面积为：" << s << endl;
	}
	else
	{
		cout << "输入错误！" << endl;
	}
	return 0;
}