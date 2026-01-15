#include <iostream>
using namespace std;
void arrange(double nums[], int size) {
	double t;
	bool action;
	int n = size;
	do {
		action = false;
		for (int i = 0; i < n - 1; i++) {
			if (nums[i] > nums[i + 1]) {
				t = nums[i];
				nums[i] = nums[i + 1];
				nums[i + 1] = t;
				action = true;
			}
		}
		n--;
	} while (action);
	for (int i = 0; i < size; i++) {
		cout << nums[i] << '\t';
	}
}
int main() {
	double nums1[10] = { 0 };
	for (int i = 0; i < 10; i++) {
		cout << "请输入第" << i + 1 << "个数；";
		cin >> nums1[i];
	}
	arrange(nums1, 10);
	return 0;
}