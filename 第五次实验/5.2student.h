
#ifndef STUDENT_H
#define STUDENT_H

#include <cstring> 

class Student
{
public:
    // 构造函数声明
    Student();
    Student(int n, const char* nm, char s);

    // 公用成员函数原型声明
    void display();
    void set_value(int n, const char* nm, char s);

private:
    int num;
    char name[20];
    char sex;
};

#endif // STUDENT_H