//
//  main.cpp
//  03_StructPointer
//
//  Created by Yuelin Qi on 2022-12-08.
//

#include <iostream>
using namespace std;
//结构体指针

//定义学生结构体
struct student
{
    string name;    //姓名
    int age;    //年龄
    int score;  //分数
};

int main(int argc, const char * argv[]) {
    //1. 创建学生结构体变量
    struct student s = {"",18,80};
    //2. 通过指针指向结构体变量
    struct student *p = &s; //因为接受的是一个class的地址，所以指针要用student结构接受
    //3. 通过指针访问结构体变量中的数据
    //通过结构体指针 访问结构体中的属性，需要利用 “->”
    cout << "姓名："<< p->name<<"\t 年龄："<<p->age<<"\t 分数："<<p->score<<endl;
    return 0;
}
