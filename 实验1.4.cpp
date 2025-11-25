#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	unsigned int textUnint = 65534;
	cout << "output in unsigned type:" << textUnint << endl;
	cout << "output in char type:" << static_cast<char>(textUnint) << endl;
	cout << "output in short type:" << static_cast<short>(textUnint) << endl;
	cout << "output in int type:" << static_cast<int>(textUnint) << endl;
	cout << "output in double type:" << static_cast<double>(textUnint) << endl;
	cout << "output in double type:" <<setprecision(4)<< static_cast<double>(textUnint) << endl;
	cout << "output in Hex type:" << hex << textUnint << endl;
	cout << "output in Oct type:" << oct << textUnint << endl;
	cout << "output in int type:" << static_cast<int>(5.88) << endl;
	return 0;
}