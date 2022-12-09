//
//  main.cpp
//  02_FunctionTypes
//
//  Created by Yuelin Qi on 2022-12-07.
//

#include <iostream>
using namespace std;
/*
 函数常见样式
 1. 无参无返
 2. 有参无返
 3. 无参有返
 4. 有参有返
 */

// 1. 无参无返
void test01()
{
    cout << "this is test01" << endl;
}

// 2. 有参无返
void test02(int a)
{
    cout << "this is test02 with parameter a="<< a << endl;
}

// 3. 无参有返
int test03()
{
    cout << "this is test03"<< endl;
    return 1000;
}

// 4. 有参有返
int test04(int num1){
    cout << "this is test04"<< endl;
    return num1+100;
}


int main(int argc, const char * argv[]) {
    //无参无返调用
    test01();
    //有参无返调用
    test02(10);
    //无参有返调用
    int result03 = test03();
    cout << "this is test03 result: "<<result03<< endl;
    //有参有返调用
    int a = 10;
    int result04 = test04(a);
    cout << "this is test04 result: "<<result04<< endl;

    return 0;
}
