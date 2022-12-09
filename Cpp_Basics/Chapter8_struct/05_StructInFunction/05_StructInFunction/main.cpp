//
//  main.cpp
//  05_StructInFunction
//
//  Created by Yuelin Qi on 2022-12-08.
//

#include <iostream>
#include "Student_Teacher.hpp"
using namespace std;
//打印学生信息函数
//1. 值传递
void printStudent1(struct Student s)
{
    s.age = 100;
    cout<<"子函数中 姓名："<<s.name<<"\t 年龄"<<s.age<<"\t 分数"<<s.score<<endl;
}
//2. 地址传递
void printStudent2(struct Student *p)
{
    p->age = 200;
    cout<<"子函数2中 姓名："<<p->name<<"\t 年龄"<<p->age<<"\t 分数"<<p->score<<endl; //注意结构中指针访问元素一定要用箭头！
}


int main(int argc, const char * argv[]) {
    Student s = {"张三", 20,85};
    //1. 值传递
    printStudent1(s);
    cout<<"子函数后 姓名："<<s.name<<"\t 年龄"<<s.age<<"\t 分数"<<s.score<<endl;
    
    //2. 地址传递
    printStudent2(&s);
    cout<<"子函数2 后 姓名："<<s.name<<"\t 年龄"<<s.age<<"\t 分数"<<s.score<<endl;

    return 0;
}
