//
//  main.cpp
//  06_NestedLoop
//
//  Created by Yuelin Qi on 2022-12-06.
//

#include <iostream>
using namespace std;

//乘法口诀表

int main(int argc, const char * argv[]) {
    for (int i=1;i<10;i++)
    {
        for (int j=1; j<=i;j++){
            cout<<i<<"*"<<j<<"="<<i*j<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
