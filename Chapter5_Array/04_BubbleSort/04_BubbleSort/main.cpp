//
//  main.cpp
//  04_BubbleSort
//
//  Created by Yuelin Qi on 2022-12-07.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[9]={4,2,8,0,5,7,1,3,9};
    bool flag=true;
    int temp = -10;
    for(int i = sizeof(arr)/sizeof(arr[0])-1;i>0;i--)
    {
        int j = 0;
        flag = true;
        while (j<i)
        {
            if (arr[j]>arr[j+1])
            {
                flag = false;
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            j++;
        }
        if (flag)
        {
            break;
        }
    }
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    return 0;
}
