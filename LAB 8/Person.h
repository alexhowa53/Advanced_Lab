#pragma once

#include <iostream>

using namespace std;

class Person {
    public:
    Person();
    Person(string firstname,float netWeight, int age);

    ~Person();
     Person operator+(const Person & other); 
     bool operator==(const Person & other);  
     bool operator!=(const Person & other); 
     bool operator<(const Person & other);  
     bool operator>(const Person & other);  


    //Overload operator + (const Person and other person)

    operator int();
    operator string();
    operator float();


    private:
    float nWeight;
    string nFirstname;
    int mAge;
    
};