//
//  main.cpp
//  06_NamingRules
//
//  Created by Yuelin Qi on 2022-12-05.
//

#include <iostream>
using namespace std;

//标识符命名规则
//1. 标识符不可以是关键字
//2. 标识符是由字母，数字，下划线构成
//3. 标识符第一个字母只能是字母或者下划线
//4. 标识符是区分大小写的

int main(int argc, const char * argv[]) {
    //1. 标识符不可以是关键字
    // int int = 10;
    
    
    //2. 标识符是由字母，数字，下划线构成
    int abc = 10;
    int _abc = 20;
    int _123abc = 30;
    
    
    //3. 标识符第一个字母只能是字母或者下划线
    // int 123abc = 40;
    
    //4. 标识符是区分大小写的
    int aaa = 100;
    int AAA = 200;
    cout << aaa<<endl;
    cout << AAA<<endl;
    return 0;
    
    //建议：给变量起名最好能够见名知意
    
    
}
