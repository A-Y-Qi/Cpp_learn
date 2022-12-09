//
//  main.cpp
//  06_StructConst
//
//  Created by Yuelin Qi on 2022-12-08.
//

#include <iostream>
#include "Student_Teacher.hpp"
using namespace std;
//将函数中的形参改为指针可以减少内存空间，而且不会复制新的副本，非常的快
void printStudents(const Student *s){
    //s->age = 150; //加入const之后，一旦有修改操作就会报错，可以防止我们误操作
    cout << "姓名："<<s->name<<"\t年龄"<<s->age<<"\t分数"<<s->score<<endl;
}

int main(int argc, const char * argv[]) {
    Student s = {"张三",20,80};
    printStudents(&s); 
    
    return 0;
}
