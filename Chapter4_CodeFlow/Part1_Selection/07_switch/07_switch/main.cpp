//
//  main.cpp
//  07_switch
//
//  Created by Yuelin Qi on 2022-12-06.
//

#include <iostream>
using namespace std;
// 给电影打分
int main(int argc, const char * argv[]) {
    int score = 0;
    // 1. 提示用户打分
    cout <<"请给电影打分"<<endl;
    // 2. 用户打分
    cin >> score;
    cout <<"请给电影打分"<<endl;
    // 3. 根据用户打分给出最后结果
    cout <<"你的打分是"<<score<<"分"<<endl;
    switch (score)
    {
        case 10:
            cout <<"您认为是经典电影"<<endl;
            break;
        case 9:
            cout <<"您认为是经典电影"<<endl;
            break;
        case 8:
            cout <<"您认为是电影很好看"<<endl;
            break;
        case 7:
            cout <<"您认为是电影很好看"<<endl;
            break;
        case 6:
            cout <<"您认为是电影很一般"<<endl;
            break;
        case 5:
            cout <<"您认为是电影很一般"<<endl;
            break;
        default:
            cout <<"您认为是电影是烂片"<<endl;
            break;
    }
    // if 和 switch区别？
    // switch缺点：只能判断整型和字符型，无法判断区间
    // switch优点：结构清晰，执行效率高
    return 0;
}
