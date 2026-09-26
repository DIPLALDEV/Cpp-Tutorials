#include<iostream>
#include<string>

using namespace std;

class Student {
    public:
        string full_name;
    

    void sendOutside(string f){
        full_name = f;
        cout << "My name is "<< full_name << endl;
    }

    private:
        int age;

};

int main(){
    Student s1;
    s1.sendOutside("Diplal");

    // now i cannot access age variable

    

    return 0;
    

}