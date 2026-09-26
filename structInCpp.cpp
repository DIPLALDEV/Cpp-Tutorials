#include<iostream>
#include<string>

using namespace std;

struct Student{
    string name; // variable inside structure
    int age;

    // even structure have constructor inside it
    Student(string name, int age){
        cout << name << " " << age << endl;
    }

    // even structure have function inside it
    void display(){
        cout << "I am constructor inside Structure" << endl;
    }
};

int main(){

    Student s("Diplal", 18);
    s.display();
    return 0;
}