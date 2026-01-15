// main.cpp
#include <iostream>
#include "5.2student.h"

using namespace std;

int main()
{
    // 1. 使用默认构造函数创建对象，然后设置值
    Student stud;
    stud.set_value(123, "张三", 'm');
    cout << "第一个学生信息：" << endl;
    stud.display();
    cout << endl;

    // 2. 使用带参数的构造函数创建对象
    Student stud1(456, "李四", 'f');
    cout << "第二个学生信息：" << endl;
    stud1.display();
    cout << endl;

    // 3. 创建对象后再修改值
    Student stud2;
    cout << "第三个学生信息（初始）：" << endl;
    stud2.display();
    cout << endl;

    stud2.set_value(789, "王五", 'm');
    cout << "第三个学生信息（修改后）：" << endl;
    stud2.display();

    return 0;
}