#include "student.h"

int main(){
    Student s("Diplal", 18);
    s.display();


    Student *ptr = &s;  //arrow pointer call Notation
    ptr -> display();

    (*ptr).display();

    return 0;
}