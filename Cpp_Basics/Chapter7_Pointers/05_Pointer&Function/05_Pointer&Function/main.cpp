//
//  main.cpp
//  05_Pointer&Function
//
//  Created by Yuelin Qi on 2022-12-07.
//

#include <iostream>
using namespace std;

//实现两个数字进行交换

//值传递
void swap01 (int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

//地址传递
void swap02 (int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}



int main(int argc, const char * argv[]) {
    int a = 10;
    int b = 20;
    //值传递：无法修改实参
    swap01(a,b);
    cout<<"值传递结果为："<<endl;  
    cout<<"a的值为："<<a<<endl;
    cout<<"b的值为："<<b<<endl;
    
    //地址传递：修改实参
    swap02(&a, &b); //注意别忘了这里传入的是地址！
    cout<<"地址传递结果为："<<endl;
    cout<<"a的值为："<<a<<endl;
    cout<<"b的值为："<<b<<endl;
    
    return 0;
}
