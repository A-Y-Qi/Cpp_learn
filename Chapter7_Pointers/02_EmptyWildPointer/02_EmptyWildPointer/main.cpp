//
//  main.cpp
//  02_EmptyWildPointer
//
//  Created by Yuelin Qi on 2022-12-07.
//

#include <iostream>
using namespace std;
/*
 空指针：指针变量指向内存中编号为0的空间
 用途：初始化指针变量
 注意：空指针指向的内存是不可以访问的
 */

/*
 野指针：指针变量指向非法的内存空间
 */

int main(int argc, const char * argv[]) {
    // 空指针
    // 1. 空指针用于给指针变量初始化
    int *p1 = NULL;
    // 2. 空指针是不能访问的
    // 0-255之间的内存编号是系统占用的，因此不可以访问
    
    //  野指针
    // 在程序中，尽量避免出现野指针
    int * p2 = (int *) 0x1100;
    
    // cout << *p2 << endl; 会报错因为无法访问
    return 0;
}
