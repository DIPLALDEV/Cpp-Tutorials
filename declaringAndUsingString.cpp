#include<iostream>
#include<string>

using namespace std;

int main(){

    string fullname;

    string planet {"Earth"};

    string prefered_planet{planet};

    string message {"Hello there", 5}; // intiatialize with part of a string literal contain hello

    string weird_message(4, 'e'); // initializing iwth multiple copies of a char constain eeee

    string greeting {"Hello world"};

    string saying_hello {greeting, 6, 5}; //starting at index 6 and taking 5 character fromt that index


    // no use of pointer and char and array

    cout << fullname << endl;

    cout << planet << endl;

    cout << prefered_planet << endl;

    cout << message << endl;

    cout << weird_message << endl;

    cout << greeting << endl;

    cout << saying_hello << endl;

    return 0;
}