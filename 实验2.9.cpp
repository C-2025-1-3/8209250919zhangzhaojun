#include <iostream>
using namespace std;
int main() {
	float money = 0;
	int days = 0;
	float average_money;
	for (int i = 2; i <= 100; i = i * i) {
		money = money + 0.8 * i;
		days = days + 1;
	}
	average_money = money / days;
	cout << average_money;
	return 0;
}