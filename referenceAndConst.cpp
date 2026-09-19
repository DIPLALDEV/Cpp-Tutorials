#include<iostream>

using namespace std;

int main(){
    int age {10};
    // referencing and constant 
    int& reference_age {age};
    
    cout << "reference age : " << age << endl;

    reference_age = 50;

    cout << "after modification reference age : " << reference_age << endl;
    cout << "after modification age : " << age << endl;

    return 0;
}