#include<iostream>

using namespace std;

class Student{
    public:
    Student(){
        cout << "I am a constructor" << endl;
    }

    ~Student(){
        cout << "I am a Destructor. I run when the object's lifetime ends" << endl;
    }
};

int main(){
    Student s;
}