//
//  main.cpp
//  01_definition
//
//  Created by Yuelin Qi on 2022-12-07.
//

#include <iostream>
using namespace std;

/*
 函数的定义：
 语法：
    返回值类型 函数名 （参数列表）{函数体语句 return表达式}
 */

//加法函数
int add(int num1, int num2) //num1 和 num2 为形式参数
{
    int sum = num1 + num2;
    return sum;
}

/*
 值传递
    定义函数，实现两个数字进行交换的函数
 */

// 如果函数无需返回值，声明时可以写void
void swap(int num1, int num2)
{
    cout << "交换前" << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "交换后" << endl;
    cout << "num1=" << num1 << endl;
    cout << "num2=" << num2 << endl;
    //return 可写可不写
}

int main(int argc, const char * argv[]) {
    //调用函数
    // a 和 b 这里为实际参数
    int a = 10;
    int b = 20;
    
    int c = add(a,b);
    cout << "c=" << c << endl;
    
    swap(a,b);
    //注意，这里a和b的值并没有发生改变， 因为形参的改变不会影响实参
    
    return 0;
}
