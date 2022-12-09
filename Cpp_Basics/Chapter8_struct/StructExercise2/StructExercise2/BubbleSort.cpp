//
//  BubbleSort.cpp
//  StructExercise2
//
//  Created by Yuelin Qi on 2022-12-08.
//


#include <iostream>
#include "Hero.h"
using namespace std;

void BubbleSort(struct Hero hlist[], int len){
    
    for (int i = len-1; i > 0; i--){
        bool flag = true;
        for (int j = 0; j<i; j++){
            if (hlist[j].age > hlist[j+1].age){
                flag=false;
                Hero temp = hlist[j];
                hlist[j]=hlist[j+1];
                hlist[j+1]=temp;
            }
        }
        if (flag){
            break;
        }
    }
}
    
    
