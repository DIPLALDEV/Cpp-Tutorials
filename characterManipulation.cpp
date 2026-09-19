#include<iostream>

using namespace std;

int main(){
    // check if:
    // character is alphanumeric ==> isalnum()
    
  
    cout << " C is alphanumeric : " << isalnum('C') << endl;
    cout << "^ is alphanumeric : " << isalnum('^') << endl;

    // character is alphatetic ==> isalpha()

    cout << " C is alpha : " << isalpha('C') << endl;
    cout << "^ is alpha : " << isalpha('^') << endl;



    // character is blank ==> isblank()
    cout << "  is blank : " << isblank(' ') << endl;
    cout << "^ is blank : " << isblank('^') << endl;



    // character is lowercase or uppercase ==> islower()

    cout << " C is upper : " << islower('C') << endl;
    cout << "c is low : " << isupper('c') << endl;


    // character is a digit ==> isdigit()



    // character to lowercase/uppercase using the std::tolower() and std::toupper functions

    char message [] {"Hello, my name is Diplal Thakur Barhi."};

    char u [sizeof(message)];
    char l [sizeof(message)];

    for (unsigned int i{}; i < sizeof(message); ++i){
        u[i] = toupper(message[i]);
         cout << u[i];
    }

    cout << endl;

    for (unsigned int i{}; i < sizeof(message); ++i){
        l[i] = tolower(message[i]);
        cout << l[i];
    }
    
}