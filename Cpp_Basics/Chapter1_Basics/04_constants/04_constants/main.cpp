//
//  main.cpp
//  04_constants
//
//  Created by Yuelin Qi on 2022-12-05.
//

#include <iostream>
using namespace std;

//常量的定义方式
//1. #define 宏常量

#define Day 7

int main(int argc, const char * argv[]) {
    //2. const修饰的变量
    const int month = 12;
    //month = 24; //错误，const修饰变量也是常量无法修改
    
    // Day = 14; //Day为常量不可修改
    // insert code here...
    std::cout << "一周总共有："<<Day<<"天"<<endl;
    return 0;
}
