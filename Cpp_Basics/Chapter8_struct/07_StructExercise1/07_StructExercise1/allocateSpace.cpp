//
//  Allocate.cpp
//  07_StructExercise1
//
//  Created by Yuelin Qi on 2022-12-08.
//

#include <iostream>
#include "Student_Teacher.h"
using namespace std;

void allocateSpace(struct Teacher tArray[], int len){
    string nameSeed="ABCDE";
    srand((unsigned int) time(NULL));
    for (int i = 0; i<len;i++){
        tArray[i].tName = "Teacher_";
        tArray[i].tName +=nameSeed[i];
        
        for (int j = 0; j<5;j++){
            tArray[i].sArray[j].Name="Student_";
            tArray[i].sArray[j].Name+=nameSeed[j];
            
            int random = rand()%61+40;
            tArray[i].sArray[j].score = random;
        }
    }
}
