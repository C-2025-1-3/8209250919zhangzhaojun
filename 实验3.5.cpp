#include <iostream>
using namespace std;
int total(int n) {
	int sum;
	if (n == 1) {
		sum = 1;
	}
	else
	{
		sum = (total(n - 1) + 1) * 2;
	}
	return sum;
}
int main() {
	cout << total(10);
	return 0;
}