#include<iostream>
#include<string>

using namespace std;


class Student{
    public:
        string full_name;
        int age;

        void student_details(string fn, int age){
            cout << "Hello I " << fn << endl;
            cout << "I am " << age << endl;
        }
};

int main(){
    Student s1;
    s1.student_details("Diplal", 18);

    return 0;

}