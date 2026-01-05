#include <iostream>
using namespace std;
bool is_prime(int num) {
	for (int i = 2; i < num; i++) {
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main() {
	for (int i = 2, j = 0; i < 1e15; i++) {
		if (is_prime(i)) {
			cout << i << '\t';
			j++;
		}
		if (j % 10 == 0)
		{
			cout << endl;
		}
		if (j == 200)
		{
			break;
		}
	}
	return 0;
}
