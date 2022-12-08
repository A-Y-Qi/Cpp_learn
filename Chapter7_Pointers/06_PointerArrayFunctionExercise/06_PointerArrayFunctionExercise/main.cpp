//
//  main.cpp
//  06_PointerArrayFunctionExercise
//
//  Created by Yuelin Qi on 2022-12-07.
//

#include <iostream>
using namespace std;

/*
 Exercise:
    封装一个函数，利用冒泡排序，实现对整型数组的升序排序
 */

//冒泡排序
void bubblesort(int *arr, int length){
    int temp = 0;
    
    for (int i = length-1; i > 0; i--){
        int j = 0;
        bool flag = true;
        while (j<i){
            if (arr[j]>arr[j+1]){
                flag = false;
                temp = arr[j]; //这里注意，arr[j] = *(arr+j*sizeof(arr[0])) 实际上是地址传递
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            j++;
        }
        if (flag){
            break;
        }
    }
    cout<<"打印arr[0]="<<arr[0]<<endl;
}
//打印数组
void printArray(int *arr, int length){
    for (int i = 0; i < length; i++){
        cout<<arr[i]<<"\t"<<endl;
        cout<<(long)&arr[i]<<"\t"<<endl;
    }
}

int main(int argc, const char * argv[]) {
    //1. 创建数组
    int arr[10] = {3,4,0,2,7,5,1,9,6,8};
    int len = sizeof (arr)/sizeof (arr[0]);
    cout<<"Before Swap"<<endl;
    printArray(arr, len);
    //2. 创建函数，实现冒泡排序
    bubblesort(arr, len);
    //3. 打印排序后的数组
    cout<<"After Swap"<<endl;
    printArray(arr, len);
    
    
    return 0;
}
