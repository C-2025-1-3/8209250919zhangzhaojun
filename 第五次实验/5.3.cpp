#include<iostream>
using namespace std;
class changfangti
{
private:
	double length,width,height;
public:
	/*void set_value(double a, double b, double c)
	{
		length = a;
		width = b;
		height = c;
	}*/
	double volumn(double length,double width,double height){
		double v;
		v = length * width * height;
		return v;
	}

};

int main() {
	double length, width, height,v;
	changfangti cft;
	for (int i = 0; i < 3; i++) {
	cout << "请输入长方体的长："; 
	cin >> length;
	cout << endl << "请输入长方体的宽：";
	cin >> width;
	cout << endl << "请输入长方体的高：";
	cin >> height;
	//cft.set_value(length,width,height);
	v=cft.volumn(length, width, height);
	cout << "第" << i + 1 << "个长方体的体积是：" << v << endl;
	}

	return 0;
}