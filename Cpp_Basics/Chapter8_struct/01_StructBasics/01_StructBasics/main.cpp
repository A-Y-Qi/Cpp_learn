//
//  main.cpp
//  01_StructBasics
//
//  Created by Yuelin Qi on 2022-12-08.
//

#include <iostream>
#include <string>
using namespace std;
/*
 结构体属于用户自定义的数据类型，允许用户存储不同的数据类型
    - 一些类型集合组成的一个类型
 
 语法：
    - struct 结构体名 {结构体成员列表};
 
 通过结构体创建变量的方式有三种：
    - struct 结构体名 变量名
    - struct 结构体名 变量名 = {成员1值，成员2值...}
    - 定义结构体时顺便创建变量
 在创建结构体时，struct不能省略，但是在创建变量时，struct可以省略
 */

//1. 创建学生数据类型: 学生包括 （姓名，年龄，分数）
struct Student {
    // 成员列表
    // - 姓名
    string name;
    // - 年龄
    int age;
    // - 分数
    int score;
}s3;



int main(int argc, const char * argv[]) {
    //2. 通过学生类型创建具体学生
    // 方法一：struct 结构体名 变量名
    struct Student s1;
    s1.name="张三";
    s1.age = 18;
    s1.score = 99;
    cout << "姓名："<<s1.name<<"\t年龄："<<s1.age<<"\t分数"<<s1.score<<endl;
    
    // 方法二：struct 结构体名 变量名 = {成员1值，成员2值...}
    Student s2 = {"李四",  18, 68}; // struct可以省略
    cout << "姓名："<<s2.name<<"\t年龄："<<s2.age<<"\t分数"<<s2.score<<endl;
    
    //方法三：定义结构体时顺便创建变量
    s3.name="王五";
    s3.age=10;
    s3.score=89;
    cout << "姓名："<<s3.name<<"\t年龄："<<s3.age<<"\t分数"<<s3.score<<endl;

    
    return 0;
}
