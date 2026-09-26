#include<iostream>

using namespace std;

 class Student_1 {
        public:
        Student_1(){  // constructor with teh same name as class
            cout << "I am constructor."<< endl;
        }
    };

class Student_2{
    public:
    string full_name;
    int age;

    Student_2(string f, int a):full_name (f), age(a)   // memory initializer list
    {

        cout << "I am constuctor with parameters"<< endl;
        cout << "Hi I am " << full_name << ". I am " << age  << endl;
        }
};

int main(){
    Student_1 s1; // when object is created then constructor is called not need to call function 

    Student_2 s2("Diplal", 18);

    return 0;
   
}