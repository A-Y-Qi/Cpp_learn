//
//  main.cpp
//  02_WhileExercise
//
//  Created by Yuelin Qi on 2022-12-06.
//

#include <iostream>
#include <ctime>
using namespace std;

//猜数字游戏
//随机生成一个数字，让玩家猜测这个数字，并给出这个数字大了还是小了的提示

int main(int argc, const char * argv[]) {
    srand((unsigned int)time(NULL));
    int num = rand()%100+1;
    int input = 0;
    cout << "请输入您猜测的数字" <<endl;
    cin >> input;
    while (input != num){
        if (input>num)
        {
            cout << "您猜测的数字大了" <<endl;
        }
        else
        {
            cout << "您猜测的数字小了" <<endl;
        }
        cout << "请重新输入您猜测的数字" <<endl;
        cin >> input;
        
    }
    cout << "恭喜您，您猜对了，数字是" << num <<endl;
    
    return 0;
}
