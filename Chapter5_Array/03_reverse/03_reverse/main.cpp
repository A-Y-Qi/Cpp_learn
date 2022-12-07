//
//  main.cpp
//  03_reverse
//
//  Created by Yuelin Qi on 2022-12-06.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[]={1,2,3,4,5,6,7};
    int end = (sizeof(arr)/sizeof(arr[0]))-1;
    int temp=-1;
    for (int start=0;start<(sizeof(arr)/sizeof(arr[0]))/2;start++){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        end--;
    }
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
