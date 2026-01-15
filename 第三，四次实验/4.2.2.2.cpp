#include<iostream>
#include<cstring>
using namespace std;

int parseHex(const char* const hexString)
{
	if (hexString == NULL)return 0;
	int result = 0;
	int len = strlen(hexString);
	for(int i = 0; i < len; i++)
	{
		int j;
		char c = hexString[i];
		if (c >= '0' && c <= '9')
			j = c - '0';
		else if (c >= 'A' && c <= 'F')
			j = c - 'A' + 10;
		else if (c >= 'a' && c <= 'f')
			j = c - 'a' + 10;
		else return 0;
		result = result * 16 + j;
	}
	return result;
}

int main() {
	char hexstring[100];
	cout << "请输入16进制的一个数：" << endl;
	cin.getline(hexstring, 100);
	long result = parseHex(hexstring);
	cout << "对应的十进制数字为：" << result << endl;

	return 0;
}