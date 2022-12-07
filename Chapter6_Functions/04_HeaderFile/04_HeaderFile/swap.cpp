//
//  swap.cpp
//  04_HeaderFile
//
//  Created by Yuelin Qi on 2022-12-07.
//

#include <stdio.h>
#include "swap.h"
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
}
