//
//  main.cpp
//  01_while
//
//  Created by Yuelin Qi on 2022-12-06.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int num = 0;
    //while()中填入循环条件
    //注意事项：在写循环中一定要避免死循环
    while (num<10)
    {
        std::cout << num <<endl;
        num++;
    }
    return 0;
}
