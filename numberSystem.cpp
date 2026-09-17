#include<iostream>

using namespace std;

int main(){
    int decimalNumber = 15;  // decimal representation of the number
    int binaryNumber = 0b00001111; // binary representation of the number
    int octalNumber = 017; // octal representation of the number
    int hexadecimalNumber = 0x0f; // hexadecimal representation of the number


    cout << "Decimal: " << decimalNumber << endl;
    cout << "Binary: " << binaryNumber << endl; 
    cout << "Octal: " << octalNumber << endl;
    cout << "Hexadecimal: " << hexadecimalNumber << endl;

    return 0;
}