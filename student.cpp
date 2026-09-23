#include<iostream>
#include "student.h"

using namespace std;

int main(){
    Student s1;
   std::cout <<  s1.sum(5, 6);
   std::cout << endl;

   std::cout << s1.diff(6 , 2) <<  endl;

   return 0;
}