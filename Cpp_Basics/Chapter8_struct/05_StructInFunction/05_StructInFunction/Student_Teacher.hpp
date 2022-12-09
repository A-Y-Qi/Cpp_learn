//
//  Student_Teacher.hpp
//  04_StructNesting
//
//  Created by Yuelin Qi on 2022-12-08.
//

#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int age;
    int score;
};
struct Teacher{
    int id;
    string name;
    int age;
    Student *student;
};
