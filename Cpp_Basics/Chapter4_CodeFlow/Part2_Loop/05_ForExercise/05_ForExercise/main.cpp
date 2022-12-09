//
//  main.cpp
//  05_ForExercise
//
//  Created by Yuelin Qi on 2022-12-06.
//

#include <iostream>
using namespace std;
// 敲桌子游戏：遇到7的倍数或者个位十位含有7的数字输出敲桌子，其余时间打印数字本身

int main(int argc, const char * argv[]) {
    for (int i = 1; i < 100; i++)
    {
        if (i/10==7 || i%7==0 || i%10 == 7)
        {
            cout<<"敲桌子"<<endl;
        }
        else
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
