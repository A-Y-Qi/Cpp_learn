//
//  main.cpp
//  01_PointerBasics
//
//  Created by Yuelin Qi on 2022-12-07.
//

#include <iostream>
using namespace std;
/*
 指针作用：可以通过指针直接访问内存
 
 - 内存编号一般是从0开始记录的， 一般用十六进制数字表示
 - 可以利用指针变量保存地址
 */


int main(int argc, const char * argv[]) {
    int a = 10;
    //1. 定义指针
    //  -定义语法： 数据类型 * 指针变量名;
    int *p;
    //让指针记录变量a的地址 -- 指针就是地址
    p = &a;
    cout<<"a的地址为："<<&a<<endl;
    cout<<"指针p为："<<p<<endl;
    
    //2.使用指针
    //  -可以通过解引用的房子来找到指针指向的内存
    //  -指针前加 * 代表解引用，找到指针指向的内存中的数据
    *p = 1000; //修改内存中的数据
    
    cout <<"a的值为"<<a<<endl; // a 的值也修改了
    
    
    //指针所占用的内存大小：32位操作系统：4字节；64位操作系统：8字节
    cout <<"sizeof (int*) = "<<sizeof (int *)<<endl; //8字节
    return 0;
}
