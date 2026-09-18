#include<iostream>

using namespace std;

int main(){


    // for loops
    cout << "for loop" << endl << endl;
    for(unsigned int i{}; i < 5; i++){
        cout << "Hello, my name is Diplal" << endl;
    }

    cout << endl;

    for (size_t i{}; i < 5; i++){ // use of size_t
        cout << "Hello, my name is Diplal" << endl;
    }

    cout << endl << endl;

    cout << "---------------------------------------" << endl;

    //while loop
    cout << "while loop" << endl;

    const unsigned int count {5};
    unsigned int i {};

    while(i < count){
        cout << "Hello, my name is Diplal" << endl;
        ++i;
    }


    //do while loop
    cout << "do while loop" << endl;
   const unsigned int count1 = 5;
   unsigned int j = 1;
    do{
       cout << "Hello, my name is Diplal" << endl; 
        ++j;
    }while(j < count1 );

return 0;

}