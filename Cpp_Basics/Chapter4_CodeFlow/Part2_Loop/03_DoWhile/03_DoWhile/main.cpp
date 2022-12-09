//
//  main.cpp
//  03_DoWhile
//
//  Created by Yuelin Qi on 2022-12-06.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    //do...while和while循环的区别在于do...while会先执行一次循环语句
    srand((unsigned int)time(NULL));
    int num = rand()%100+1;
    int input = 0;
    do {
        cout << "请输入您猜测的数字" <<endl;
        cin >> input;
        if (input>num)
        {
            cout << "您猜测的数字大了" <<endl;
        }
        else
        {
            cout << "您猜测的数字小了" <<endl;
        }
    }
    while (input != num);
    cout << "恭喜您，您猜对了，数字是" << num <<endl;
    return 0;
}
