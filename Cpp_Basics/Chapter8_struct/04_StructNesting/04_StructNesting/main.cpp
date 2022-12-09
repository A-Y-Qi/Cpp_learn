//
//  main.cpp
//  04_StructNesting
//
//  Created by Yuelin Qi on 2022-12-08.
//

#include <iostream>
using namespace std;
#include"Student_Teacher.hpp"

Student s1 = {"张三",18,99};
Student s2 = {"李四",28,99};
Student s3 = {"王五",88,99};
Student t1_s[3] = {s1,s2,s3};

Teacher t1 = {123,"罗翔", 45, {}};

int main(int argc, const char * argv[]) {
    // insert code here...
    cout<<t1.name<<endl;
    return 0;
}
