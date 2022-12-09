//
//  main.cpp
//  01_Break
//
//  Created by Yuelin Qi on 2022-12-06.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // 1. 出现在switch语句中
    // 例如电影打分
    int score = 0;
    cout <<"请给电影打分"<<endl;
    cin >> score;
    cout <<"请给电影打分"<<endl;
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
    // 2. 出现在循环语句中
    for (int i = 0; i<10;i++){
        cout <<i<<endl;
        if (i==7){
            break;
        }
    }
    // 3. 出现在嵌套语句中
    for (int i = 0; i < 10; i++){
        for (int j=0; j<10; j++){
            if (j==3){
                break; //退出内层循环
            }
            cout<<"*";
            
        }
        cout<<endl;
    }
    
    return 0;
}
