//
//  main.cpp
//  02_ArrayExercise
//
//  Created by Yuelin Qi on 2022-12-06.
//

#include <iostream>
using namespace std;
//给你一数组的小猪体重，找出最重小猪体重并打印

int main(int argc, const char * argv[]) {
    int arr[] = {100,200,400,450,30,500,700,34};
    int heavy = 0;
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        heavy= max(heavy,arr[i]);
    }
    cout<<"最重小猪重"<<heavy<<"斤"<<endl;
    
    return 0;
}
