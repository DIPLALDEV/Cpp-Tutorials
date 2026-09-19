#include<iostream>

using namespace std;

int main(){

    int *p_number; // not valid // dangling unitialize pointer
    cout << endl;

    cout << "Case 1: Uninitialized pointer " << endl;
    cout << "p_number : " << p_number << endl;
    cout << "*p_number : " << *p_number << endl;

    cout << endl << endl;
    cout << "Case 2: Deleted Pointer "  << endl;
    int* p_number1 {new int {45}};
    cout << "Before deleting p_number1 : " << *p_number1 << endl;
    delete p_number1;
    cout << "After deleting p_number1 : " << *p_number1 << endl;

    cout << endl << endl;
    
    
    cout << "Case 3: Multiple pointer pointing at the same address. " << endl;

    int *p_number2 {new int {5}}; // this is a master pointer 
    int *p_number3 {p_number2};

    cout << "p_number2 " << p_number2 << " *p_number2 " << *p_number2 << endl;
    cout << "p_number3 " << p_number3 << " *p_number3 " <<  *p_number3 << endl;

    delete p_number2;

    cout << "p_number2 " << p_number2 << " *p_number2 " << *p_number2 << endl;
    cout << "p_number3 " << p_number3 << " *p_number3 " <<  *p_number3 << endl;



    int *p_number4 { new int {4}};
    
    if( p_number4 !=  nullptr){
        cout << "p_number4 is : " << p_number4 << endl;
    }
    else{
        cout << "Invalid address. " << endl;
    }

    return 0;
}