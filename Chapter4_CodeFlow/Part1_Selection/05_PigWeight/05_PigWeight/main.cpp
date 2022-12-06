//
//  main.cpp
//  05_PigWeight
//
//  Created by Yuelin Qi on 2022-12-06.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    cout <<"请输入小猪A的体重"<< endl;
    cin >> a;
    cout <<"请输入小猪B的体重"<< endl;
    cin >> b;
    cout <<"请输入小猪C的体重"<< endl;
    cin >> c;
    if(a>b && a>c)
    {
        cout <<"小猪A最重"<< endl;
    }
    else if (b>c && b>a)
    {
        cout <<"小猪B最重"<< endl;
    }
    else if (c>b && c>a)
    {
        cout <<"小猪C最重"<< endl;
    }
    else
    {
        cout <<"没有最重的小猪"<< endl;
    }
    
    
    return 0;
}
