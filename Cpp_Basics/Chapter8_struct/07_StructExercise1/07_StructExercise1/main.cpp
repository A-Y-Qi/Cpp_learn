//
//  main.cpp
//  07_StructExercise1
//
//  Created by Yuelin Qi on 2022-12-08.
//

#include <iostream>
#include "Student_Teacher.h"
using namespace std;

// 创建一个结构体，其中有三位老师，每位老师有五位学生
// 用函数输入每位老师的信息并用函数打印每个结构体的信息

int main(int argc, const char * argv[]) {
    // insert code here...
    Teacher tArray[3];
    int len = sizeof (tArray)/sizeof(tArray[0]);
    
    allocateSpace(tArray, len);
    printInfo(tArray, len);
    
    return 0;
}
