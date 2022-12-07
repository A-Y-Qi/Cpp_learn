//
//  main.cpp
//  03_Goto
//
//  Created by Yuelin Qi on 2022-12-06.
//

#include <iostream>
using namespace std;

//了解goto的存在，不推荐使用

int main(int argc, const char * argv[]) {
    //
    cout<<"1"<<endl;
    cout<<"2"<<endl;
    goto FLAG; //跳过之后的语句，直接执行flag后的语句
    cout<<"3"<<endl;
    cout<<"4"<<endl;
    FLAG: //写了goto一定要有flag，不然会报错
    cout<<"5"<<endl;
    
    return 0;
}
