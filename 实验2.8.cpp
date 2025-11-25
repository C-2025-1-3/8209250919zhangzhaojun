#include <iostream>
#include <cstdlib>
using namespace std;
double sqr(double a) {
	if (a < 0) {
		cout << "您输入的值不合理!";
		exit(1);
	}
	double x1, x2;
	x1 = a;
	x2 = (x1 + a / x1) / 2;
	if (a == 0) {
		return 0;
		exit(1);
	}
	while (x2 - x1 > 1e-5 || x2 - x1 < -1e-5) {
		x1 = x2;
		x2 = (x1 + a / x1) / 2;
	}
	return x2;
}
int main() {
	double a;
	cout << "请输入要求平方根的值:";
	cin >> a;
	double result = sqr(a);
	cout << result << endl;
	return 0;
}