#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int a,int b) {
		x = a;
		y = b;
	}
	void setPoint(int i, int j)
	{
		x = x + i;
		y = y + j;
	}
	void display() {
		cout << "x=" << x << endl;
		cout << "y=" << y << endl;
	}
};

int main() {
	Point p1(60, 80);
	Point* p = &p1;
	int i, j;
	cout << "输入x,y的改变值：" << endl;
	cin >> i >> j;

	p1.setPoint(i,j);
	p->display();

	return 0;
}
