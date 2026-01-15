#include <iostream>
using namespace std;
int main() {
	const int Maxn = 10;
	int nums1[Maxn] = { 0 };
	int k = 0;
	for (int i = 0; i < 10; i++)
	{
		int a;
		bool Found = 0;
		cout << "ÇëÊäÈë£º";
		cin >> a;
		for (int j = 0; j < k; j++)
		{
			if (nums1[j] == a) {
				Found = 1;
				break;
			}
		}
		if (Found == 0)
		{
			nums1[k] = a;
			k++;
			Found = 0;
		}
	}
	for (int i = 0; i < k; i++) {
		cout << nums1[i];
	}
	return 0;
}