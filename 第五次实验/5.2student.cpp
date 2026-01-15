// student.cpp
#include <iostream>
#include "5.2student.h"
#include <cstring>

using namespace std;

// 默认构造函数
Student::Student()
{
    num = 0;
    name[0] = '\0';
    sex = ' ';
}

// 带参数的构造函数
Student::Student(int n, const char* nm, char s)
{
    set_value(n, nm, s);
}

// 在类外定义display成员函数
void Student::display()
{
    cout << "num: " << num << endl;
    cout << "name: " << name << endl;
    cout << "sex: " << sex << endl;
}

// 设置值的成员函数
void Student::set_value(int n, const char* nm, char s)
{
    num = n;
    strncpy_s(name, nm, 19);  // 安全复制，防止溢出
    name[19] = '\0';        // 确保字符串以null结尾
    sex = s;
}