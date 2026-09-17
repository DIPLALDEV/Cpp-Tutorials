#include<iostream>

using namespace std;

int main(){
    int value = 45;
    value += 5; //50
    cout << value << endl;

    value = 45;
    value -= 5; 
    cout << value << endl; //40

    value = 45;
    value *= 5;
    cout << value << endl; 

    value = 45;
    value /= 5; 
    cout << value << endl;

    value = 45;
    value %= 10;
    cout << value << endl;

    return 0;
}