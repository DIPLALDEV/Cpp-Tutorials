
#include "student.h"
#include<iostream>
#include<string>

Student :: Student(std::string f, int a){
    full_name = f;
    age = a;
}


void Student::display(){
    std::cout << full_name << "  " << age;
}