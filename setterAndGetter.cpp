#include<iostream>

using namespace std;

class Student {
    private:
        string full_name;
        int age;

    public:
    void makeSet(string f, int a){
        full_name = f;
        age = a;
    }

    int makeGet(){
        cout << "Hi I am " << full_name << endl;
        cout << "I am "<< age << endl;
    }

};

int main(){
    Student s1;
    s1.makeSet("Diplal", 18);
    s1.makeGet();

}