//
//  main.cpp
//  03_ConstPointer
//
//  Created by Yuelin Qi on 2022-12-07.
//

#include <iostream>
using namespace std;
/*
 const 修饰指针有三种情况
    1. const修饰指针 -- 常量指针
        - 特点：指针指向可以修改，但是指针指向的值不可以修改
    2. const修饰常量 -- 指针常量
        - 特点：指针指向不可以修改，但是指针指向的值可以修改
    3. const既修饰指针，又修饰常量
        - 特点：指针指向和指针指向的值都不可以修改
 */

int main(int argc, const char * argv[]) {
    // 1. const修饰指针 -- 常量指针
    int a = 10;
    int b = 10;
    
    const int *p1 = &a; // const 修饰的是 *p1，是指针指向的值，因此值不能修改，但是地址p1可以修改
    
    // 2. const修饰常量 -- 指针常量
    int * const p2 = &a;    //这里const修饰的是地址p2，所以地址不能修改，但是指针指向的值*p2可以修改
    
    // 3. const既修饰指针，又修饰常量
    int const * const p3 = &a; //这里const修饰了地址p3，也修饰了指针指向的值*p3，所以地址和值都不能修改
    
    
    
    
    
    return 0;
}
