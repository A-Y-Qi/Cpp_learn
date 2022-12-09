//
//  main.cpp
//  StructExercise2
//
//  Created by Yuelin Qi on 2022-12-08.
//

#include <iostream>
#include "Hero.h"
using namespace std;

//设计一个英雄的结构体，包括成员姓名，年龄，性别
//创建数组并存放五位英雄
//通过冒泡算法对英雄按照年龄进行升序排序
//最终打印排序结果

int main(int argc, const char * argv[]) {
    struct Hero h1 = {"刘备",23,"男"};
    struct Hero h2 = {"关羽",22,"男"};
    struct Hero h3 = {"张飞",20,"男"};
    struct Hero h4 = {"赵云",21,"男"};
    struct Hero h5 = {"貂蝉",19,"女"};
    
    Hero hlist[5]={h1,h2,h3,h4,h5};
    int len = sizeof(hlist)/sizeof(hlist[0]);
    BubbleSort(hlist, len);
    printHero(hlist, len);
    
    return 0;
}
