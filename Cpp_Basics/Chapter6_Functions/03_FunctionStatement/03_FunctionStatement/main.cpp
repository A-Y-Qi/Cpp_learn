//
//  main.cpp
//  03_FunctionStatement
//
//  Created by Yuelin Qi on 2022-12-07.
//

#include <iostream>
using namespace std;

//函数声明
//比较函数，实现两个整型数字进行比较，返回比较大的值

//可以利用函数声明提前告诉编译器函数的存在

//函数声明,声明后可以把函数定义写在执行函数后面，不会报错
//声明可以写多次，但是定义只能写一次
int max(int a, int b);


int main(int argc, const char * argv[]) {
    int a = 10;
    int b = 20;
    cout << max(a,b)<<endl;
    return 0;
}

//定义
int max(int a, int b){
    return a<b?b:a;
}
