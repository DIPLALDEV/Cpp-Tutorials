#include<iostream>

using namespace std;

int main(){
    auto value1 {'a'};
    auto value2 {26};
    auto value3 {14.7};
    auto value4 {13.0f};
    auto value5 {34.67l};


    //integer modifier

    auto value6 {123u};
    auto value7 {125ul};
    auto value8 {127ll};

    cout << sizeof(value1) << endl;
    cout << sizeof(value2) << endl;
    cout << sizeof(value3) << endl;
    cout << sizeof(value4) << endl;
    cout << sizeof(value5) << endl;
    cout << sizeof(value6) << endl;
    cout << sizeof(value7) << endl;
    cout << sizeof(value8) << endl;

    return 0;
    
}