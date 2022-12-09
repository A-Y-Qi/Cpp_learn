//
//  main.cpp
//  06_2DArrayExercise
//
//  Created by Yuelin Qi on 2022-12-07.
//

#include <iostream>
#include <string>
using namespace std; 

// 有三位同学的语数英成绩，求他们每个人的平均成绩
int main(int argc, const char * argv[]) {
    int scores[3][3] =
    {
        {100,100,100},
        {90,50,100},
        {60,70,80}
    };
    string names[]={"张三","李四","王五"};
    for (int i = 0; i < 3; i++){
        int sum = 0;
        for (int j = 0; j < 3; j++){
            sum+=scores[i][j];
        }
        cout<<names[i]<<"的平均分为"<<sum/3<<endl;
    }
    
    return 0;
}
