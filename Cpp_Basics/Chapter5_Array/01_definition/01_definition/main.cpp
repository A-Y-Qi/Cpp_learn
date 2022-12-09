//
//  main.cpp
//  01_definition
//
//  Created by Yuelin Qi on 2022-12-06.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // 数组
    /*
     1. 数据类型 数组名[ 数组长度 ]
     2. 数据类型 数组名[ 数组长度 ] = {值1， 值2 ... }
     3. 数据类型 数组名[] = {值1，值2 ... }
     */
    // 1. 数据类型 数组名[ 数组长度 ]
    int arr[5];
    //给数组中的元素赋值
    //下标是从0开始的
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    cout << arr[0]<<endl;
    cout << arr[1]<<endl;
    cout << arr[2]<<endl;
    cout << arr[3]<<endl;
    cout << arr[4]<<endl;
    
    // 2. 数据类型 数组名[ 数组长度 ] = {值1， 值2 ... }
    int arr2[5] = {10,20,30,40,50};
    for(int i = 0; i<5;i++)
    {
        cout << arr2[i]<<endl;
    }
    
    // 3. 数据类型 数组名[] = {值1， 值2 ... }
    int arr3[] = {1,2,3,4,5};
    for(int i = 0; i<5;i++)
    {
        cout << arr3[i]<<endl;
    }
    
    
    //数组名用途
    //1. sizeof：统计整个数组在内存中的长度
    cout << "size of arr " << sizeof(arr)<<endl;
    cout << "size of arr[0] " << sizeof(arr[0])<<endl;
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "length of arr " << length <<endl;
    
    //2. 可以通过数组名查看数组首地址
    cout << "address of arr " << (long)arr <<endl;
    cout << "address of arr[0] " << (long)&arr[0] <<endl;
    cout << "address of arr[1] " << (long)&arr[1] <<endl;
    
    //数组名是一个常量，不可以重新赋值 
    
    return 0;
}
