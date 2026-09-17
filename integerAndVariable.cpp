#include<iostream>

using namespace std;

int main(){

    //Curly braces initialization 
    int number1 {3}; //curly braces initialization
    int number2 {5}; 
    int sum1 {number1 + number2};
    cout << "Sum1: " << sum1 << endl;

    
    /*
      //braced initialization
    int braced_initialization{6.9}; // this will give compiler warning
    cout << "Number7: " << braced_initialization << endl;
    */




    //Assignment Initialization
    int number3 = 7; //assignment initialization                
    cout << "Number3: " << number3 << endl;

    //if we compile decimal number with int datatype
    int number5 = 3.9; // this will give compiler warning
    cout << "Number5: " << number5 << endl; // will print 3




    //Functional initialization
    // this is less safe because it allows narrowing conversions and do not give compiler warning
    int narrowing_conversion_functional(6.9);
    cout << "Number6: " << narrowing_conversion_functional << endl;



    //check the size of int using sizeof operator
    cout << "Size of int: " << sizeof(number1) << endl; // it will give you the 4 bytes 
  
    return 0;
}
