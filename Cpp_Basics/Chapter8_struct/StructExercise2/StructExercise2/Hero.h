//
//  Hero.h
//  StructExercise2
//
//  Created by Yuelin Qi on 2022-12-08.
//

#include <iostream>
using namespace std;

struct Hero{
    string name;
    int age;
    string gender;
};

void BubbleSort(struct Hero hlist[], int len);
void printHero(Hero hlist[], int len);
