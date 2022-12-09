//
//  printInfo.cpp
//  07_StructExercise1
//
//  Created by Yuelin Qi on 2022-12-08.
//

#include <iostream>
#include "Student_Teacher.h"
using namespace std;

void printInfo(struct Teacher tArray[], int len){
    string nameSeed="ABCDE";
    for (int i = 0; i<len;i++){
        cout<<"老师名字是"<<tArray[i].tName<<endl;
        for (int j = 0; j<5;j++){
            cout<<"\t 学生名字是："<<tArray[i].sArray[j].Name<<"\t成绩是："<<tArray[i].sArray[j].score<<endl;
        }
    }
}
