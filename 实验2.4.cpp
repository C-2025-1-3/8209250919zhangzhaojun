#include <iostream>
using namespace std;
int main() {
	double a, b;
	char op;
	cout << "请输入您要计算的式子:" << endl;
	cin >> a >> op >> b;
	switch (op) {
	case '+': {
		cout << "结果是:" << a + b << endl;
		break;
	}
	case '-': {
		cout << "结果是:" << a - b << endl;
		break;
	}
	case '*': {
		cout << "结果是:" << a * b << endl;
		break;
	}
	case '/': {
		if (b == 0)
		{
			cout << "除数不能为0";
			break;
		}
		else
		{
			cout << "结果是:" << a / b << endl;
		}
		break;
	}
	case '%': {
		if (b == 0)
		{
			cout << "除数不能为0";
			break;
		}
		else if (a != (int)a || b != (int)b) {
			cout << "a,b必须为整数." << endl;
			break;
		}
		else {
			cout << "结果是:" << (int)a % (int)b << endl;
		}
	}
	default: {
		cout << "运算符不规范." << endl;
	}
	}
	return 0;
}