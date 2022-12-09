//
//  main.cpp
//  02_MultilineIf
//
//  Created by Yuelin Qi on 2022-12-06.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // 选择结构 - 多行if语句
    // 输入考试分数，如果分数大于600，一本大学
    // 如果小于600， 未考上
    int score = 0;
    cout<<"请输入考试分数："<<endl;
    cin>>score;
    cout<<"你的考试分数为："<<score<<endl;
    if(score>600)
    {
        cout<<"恭喜你考上了一本"<<endl;
    }
    else{
        cout<<"没有考上一本"<<endl;
    }
    
    return 0;
}
