#include <iostream>
#include<string>
using namespace std;
class Student
{
private:
	int score;
	string id;
public:
	void set_value(string a, int b) {
		id = a;
		score = b;
	}
	
	Student() {
		id = '\0';
		score = 0;
	}
	Student(char a, int b) {
		id = a;
		score = b;
	}
	string getid() { return id; }
	int getscore() { return score; }
//	Student* max(Student* array[],int n);
};

Student*  max(Student* array[],int n)
{
	Student* maxstu = array[0];
	for (int i = 0; i < n; i++) {
		if (array[i]->getscore() > maxstu->getscore())
			maxstu = array[i];
	}
	return maxstu;
}

int main() {
	Student array[5];
	Student* stu[5];
	Student* best;
	for (int i = 0; i < 5; i++)
	{
		stu[i] = &array[i];
	}
	array[0].set_value("0001", 65);
	array[1].set_value("0002", 59);
	array[2].set_value("0003", 98);
	array[3].set_value("0004", 91);
	array[4].set_value("0005", 78);
	best = max(stu,5);
	cout << "成绩最高的学生学号为：" << best->getid() << endl;
	cout << "成绩为：" << best->getscore() << endl;
	return 0;
}