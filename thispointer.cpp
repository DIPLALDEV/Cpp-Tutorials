#include<iostream>

using namespace std;

class Student{
    public:
    string name;
    int age;

    Student(string name, int age){
        this->name = name;
        this -> age = age;
        // class member         // parameter variable
        cout << name << " " << age << endl;
    }
};

int main(){

    Student s("Diplal", 18);
    return 0;
}