#include<iostream>

using namespace std;

int main(){

    // first case
    //Direct printing the message
    char message1 [5] {'H', 'E', 'L', 'L', 'O'}; // not null terminated
    cout << "message1 : "<< message1;
    cout << endl;


    //second case
    // running loop in the strng until i find the character '\0'
    char message2[6] {'H', 'E', 'L', 'L', 'O'}; // null termainated
    
    unsigned int i{};
    cout << "message2 : ";
    while(message2[i] != '\0'){ //while loop
        cout << message2[i];
        ++i;
    }

    cout << endl;

    // ranged for loop
    cout << "ranged for loop" << endl;

    cout << "message2 : ";
    for(auto c : message2){
        cout << c;
    }

    cout << endl;




    //third case
    //using array without mentioning the size of the array

    char message3 [] {'H', 'E', 'L', 'L', 'O'};
    cout << "message3 : " << message3 << endl;
    cout << sizeof(message3);

    cout << endl;

    //fourth case
    //literal c string --> it is called null terminator
    // here null terminator is automatically added

    char message4 [] {"Hello"};
    cout << "message4 : " << message4 << endl; // Hello
    cout << sizeof(message4) << endl; // 6


    return 0;
}