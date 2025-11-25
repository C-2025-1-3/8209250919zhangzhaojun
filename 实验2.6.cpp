#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
//bool isInteger(double x) {
//	return x == floor(x);
//}
vector<int>yinshu(int a) {
	vector<int>vec;
	if (a <= 0) {
		return vec;
	}
	else for (int i = 1; i <= sqrt(a); ++i) {
		if (a % i == 0)
		{
			vec.push_back(i);
			if (a / i != i)
			{
				int j = a / i;
				vec.push_back(j);
			}
		}
	}
	sort(vec.begin(), vec.end(), greater<int>());
	return vec;
}
int main() {
	int a, b;
	int c1 = 1, c2 = 0;/*"c1是最大公因数，c2是最小公倍数"*/
	vector<int>nums1, nums2;
	cout << "请输入两个数字a,b(a,b>0):" << endl;
	cin >> a >> b;
	nums1 = yinshu(a);
	nums2 = yinshu(b);
	for (int num : nums1) {
		bool found = false;
		for (int i = 0; i < nums2.size(); ++i)
		{
			if (num == nums2[i]) {
				c1 = num;
				found = true;
				break;
			}
		}
		if (found) {
			break;
		}
	}
	c2 = (a / c1) * b;
	cout << "最大公因数是:" << c1 << endl << "最小公倍数是" << c2 << endl;
	//问题1:cout << a << '和' << b << "的最大公因数是:" << c1 << endl << "最小公倍数是" << c2 << endl;会出现乱码
	return 0;
}
