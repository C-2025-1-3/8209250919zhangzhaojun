#include <iostream>
using namespace std;
int main() {
	int i = 1;
	while (i < 6) {
		for (int j = 0 ; j < i; j++) {
			cout << '*';
		}
		cout << endl;
		i++;
	}
	return 0;
}