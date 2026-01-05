#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> get_yinshu(int a) {
	vector<int> num1;
	for (int i = 1; i * i <= a; i++) {
		if (a % i == 0)
		{
			if (a / i == i)
			{
				num1.push_back(i);
			}
			else
			{
				num1.push_back(i);
				num1.push_back(a / i);
			}
		}
	}
	sort(num1.begin(), num1.end(), greater<int>());
	return num1;
}
int get_yueshu(int a, int b) {
	if (a > b)
	{
		swap(a, b);
	}
	vector<int> num1 = get_yinshu(a);
	vector<int> num2 = get_yinshu(b);
	for (int i = 0; i < num1.size(); i++) {
		for (int j = 0; j < num2.size(); j++) {
			if (num1[i] == num2[j])
			{
				int d = num1[i];
				return d;
			}
		}
	}
	return 1;
}
int main() {
	int a, b;
	cout << "请输入两个数字(要求大于0)：" << endl;
	cin >> a >> b;
	if (a <= 0 || b <= 0)
	{
		cout << "您的输入不合理" << endl;
	}
	else
	{
		int c = get_yueshu(a, b);/*c是最大公约数*/
		int d = a / c * b;/*d是最小公倍数*/
		cout << "最大公约数是:" << c << endl;
		cout << "最小公倍数是:" << d << endl;
	}
	return 0;
}