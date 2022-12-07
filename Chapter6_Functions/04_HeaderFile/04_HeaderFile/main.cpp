//
//  main.cpp
//  04_HeaderFile
//
//  Created by Yuelin Qi on 2022-12-07.
//

/*
 函数分文件编写一般有四个步骤
 1. 创建后缀名为.h的头文件
 2. 创建后缀名为.cpp的源文件
 3. 在头文件中写函数的声明
 4. 在源文件中写函数的定义
 */


#include <iostream>
using namespace std;

#include "swap.h" //包含头文件之后就可以运行这个函数了

int main(int argc, const char * argv[]) {
    int a = 10;
    int b = 20;
    swap(a,b);
    return 0;
}
