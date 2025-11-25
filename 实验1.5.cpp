#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double H,S;
	cout << "请输入一个华氏温度: " << endl;
	cin >> H;
	S = (H - 32) * 5 / 9;
	cout << "对应的摄氏温度是: " << fixed << setprecision(2) << S << endl;
	return 0;
}