//
//  main.cpp
//  04_PointerArray
//
//  Created by Yuelin Qi on 2022-12-07.
//

#include <iostream>
using namespace std;

// 指针和数组
// 利用指针访问数组中的元素

int main(int argc, const char * argv[]) {
    int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    
    int *p=arr; //arr就是首地址
    
    cout <<"利用指针访问第一个元素"<<*p<<endl;
    // 把指针向后移4字节
    p++;
    cout <<"利用指针访问第二个元素"<<*p<<endl;
    
    
    cout <<"利用指针访问元素"<<*p<<endl;
    
    int *p2 = arr;
    for (int i = 0; i < 10; i++){
        cout << *p2 << endl;
        p2++;
    }
    
    
    
    return 0;
}
