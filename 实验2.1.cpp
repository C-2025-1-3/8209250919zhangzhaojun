#include <iostream>
using namespace std;
int main() {
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û: " << endl;
	char zifu;
	cin >> zifu;
	if (zifu > 'a' && zifu < 'z') {
		zifu = zifu - 32;
		cout << zifu << endl;
	}
	else
	{
		cout << static_cast<int>(zifu + 1);
	}
	return 0;
}