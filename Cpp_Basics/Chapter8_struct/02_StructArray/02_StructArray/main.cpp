//
//  main.cpp
//  02_StructArray
//
//  Created by Yuelin Qi on 2022-12-08.
//

#include <iostream>
using namespace std;
#include <string>

/*
 结构体数组
    struct 结构体名 数组名[元素个数] = {{},{},{}....{}}
 */

// 1. 定义结构体
struct Student
{
    string name;
    int age;
    int score;
};

int main(int argc, const char * argv[]) {
    // 2. 创建结构体数组
    struct Student stuArray[3]={
        {"张三", 18, 100},
        {"李四", 28, 99},
        {"王五",38,66}
    };
    // 3. 给结构体数组中的元素赋值
    stuArray[2].name = "赵六";
    stuArray[2].age = 80;
    stuArray[2].score = 60;
    // 4. 遍历结构体数组
    for (int i = 0; i < 3; i++){
        cout << "姓名："<<stuArray[i].name<<"\t 年龄"<<stuArray[i].age<<"\t 分数"<<stuArray[i].score<<endl;
    }
    
    return 0;
}
