#include<iostream>

using namespace std;

int main(){
    //declaring pointer

    int * p_number {}; // int pointer can only store the address of int variable
    double * p_fractional_number {};
     //note: double pointer can only store the pointer of the double variable.


    //initializing with the nullptr
    int * p_number{nullptr};
    double * p_fractional_number1 {nullptr};


    //note all pointer variable are of the same size

    cout << "size of number pointer : " << sizeof(p_number) << endl;
    cout << "size of fractional pointer : " << sizeof(p_fractional_number1) << endl;



 //Assigning data to pointer variables

 int int_var {10};
 int* p_int_var {&int_var};

 cout << "integer : " << int_var << endl;
 cout << "pointer : " << p_int_var << endl;

 // Dereferencing a pointer
 cout << "printing value using pointer : " << *p_int_var << endl;
 cout << "printing value using pointer : " << *&int_var << endl;


 
 //pointer to char

 char letter {'D'};
 char* p_letter {&letter};

 cout << "printing directly from the variable : " << letter << endl;
 cout << "printing the address where the value is stored : " << p_letter << endl;
 cout << "printing data using the dereferencing concpet : " << *p_letter << endl;



 //initialize with string literal : c - string
 char* p_message {"Hello World!"};

// printing out the message
 cout << " The message is :"  << p_message << endl; // Hello World!

 //dereferencing the pointer
 cout << " The value stored at the p_message is : " << * p_message << endl; //H



 //disaster
 * p_message = 'B';
 cout << "The message is : " << p_message << endl;
 cout << "The value store is : " << * p_message << endl;
 

//changing any character of the string literal

char message2[]{"Hello World!"};
message2[0] = 'T';
cout << "message2 : " << message2 << endl;

 return 0;
}

