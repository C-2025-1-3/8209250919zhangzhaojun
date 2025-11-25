#include <iostream>
#include <string>
using namespace std;
int main() {
	int letters = 0, spaces = 0, Chinese = 0, digits = 0, others = 0;
	cout << "请输入一串字符:" << endl;
	string input;
	getline(cin, input);
	for (int i = 0; i < input.size();) {
		unsigned char c = static_cast<unsigned char>(input[i]);
		if ((c <= 'z' && c >= 'a') || (c >= 'A' && c <= 'Z')) {
			++letters;
			++i;
		}
		else if (c == ' ')
		{
			++spaces;
			++i;
		}
		else if (c > 127) {
			++Chinese;
			i = i + 2;
		}
		else if (c <= '9' && c >= '0') {
			++digits;
			++i;
		}
		else
		{
			++others;
			++i;
		}
	}
	cout << "这串字符的英文字母有:" << letters << "个." << endl;
	cout << "这串字符的中文字母有:" << Chinese << "个." << endl;
	cout << "这串字符的空格有:" << spaces << "个." << endl;
	cout << "这串字符的数字字符有:" << digits << "个." << endl;
	cout << "这串字符的其他字符有:" << others << "个." << endl;
	return 0;
}