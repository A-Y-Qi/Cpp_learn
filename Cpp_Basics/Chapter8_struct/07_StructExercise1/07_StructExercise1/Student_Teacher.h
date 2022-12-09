//
//  Student_Teacher.h
//  07_StructExercise1
//
//  Created by Yuelin Qi on 2022-12-08.
//

#include <iostream>
#include<string>
using namespace std;
struct Student{
    string Name;
    int score;
};
struct Teacher{
    string tName;
    struct Student sArray[5];
};

void allocateSpace(struct Teacher tArray[], int len);
void printInfo(struct Teacher tArray[], int len);
