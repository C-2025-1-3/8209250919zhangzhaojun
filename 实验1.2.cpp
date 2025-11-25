#include <iostream>
using namespace std;
int main() {
	const double PI = 3.14;
	double r;
	double h;
	cout << "请输入圆锥的半径:" << endl;
	cin >> r;
	cout << "请输入圆锥的高:" << endl;
	cin >> h;
	cout << "圆锥的体积是: " << (PI * r * r * h) / 3;
	return 0;
}