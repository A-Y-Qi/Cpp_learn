//
//  main.cpp
//  02_continue
//
//  Created by Yuelin Qi on 2022-12-06.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    for (int i=0; i<=100;i++){
        //如果奇数输出，偶数不输出
        if(i%2==0){
            continue; //break 会退出循环，但是continue会跳过不会退出循环
        }
        cout << i << endl; 
    }
    
    return 0;
}
