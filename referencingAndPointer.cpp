#include<iostream>

using namespace std;

int main(){

    // declaration and reading by referencing and pointer concepts
    int int_value {5};
    int& reference_int_value {int_value};
    int* pointer_int_value {&int_value};

    cout << "int_value : " << int_value << endl;
    cout << "reference_int_value : " << reference_int_value << endl;
    cout << "pointer_int_value : " << pointer_int_value << endl;
    cout << "*pointer_int_value : " << *pointer_int_value << endl;

 
}