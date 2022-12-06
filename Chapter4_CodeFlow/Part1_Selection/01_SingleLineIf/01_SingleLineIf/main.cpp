//
//  main.cpp
//  01_SingleLineIf
//
//  Created by Yuelin Qi on 2022-12-06.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // 选择结构 单行if语句
    // 用户输入分数，>600输出
    //1. 用户输入分数
    int score = 0;
    cout <<"请输入一个分数"<<endl;
    cin >> score;
    //2. 打印用户输入的分数
    cout << "您输入的分数为"<<score<<endl;
    //3. 判断分数是否大于600
    //注意事项： if代码后面不能加分号，分号会把if条件和执行代码分离
    if (score>600)
    {
        cout<<"恭喜您考上了一本大学"<<endl;
    }
    
    return 0;
}
