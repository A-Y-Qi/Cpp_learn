//
//  main.cpp
//  03_MultiConditionIf
//
//  Created by Yuelin Qi on 2022-12-06.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int score = 0;
    cout<<"请输入考试分数："<<endl;
    cin>>score;
    cout<<"您的分数为"<<score<<endl;
    if (score>600)
    {
        cout<<"恭喜考上了一本大学"<<endl;
    }
    else if (score>500)
    {
        cout<<"不错考上了二本大学"<<endl;
    }
    else if (score>400)
    {
        cout<<"不错考上了三本大学"<<endl;
    }
    else{
        cout<<"可惜没考上本科"<<endl;
    }
    return 0;
}
