#include<iostream>

using namespace std;

int main(){
    float number1 { 1.22836423684299112};
    cout << "number1: " << number1 << endl;
    cout << "sizeof(number1): " << sizeof(number1) << " bytes" << endl;

    double number2 { 1.22836423684299112};
    cout << "number2: " << number2 << endl;
    cout << "sizeof(number2): " << sizeof(number2) << " bytes" << endl;

    long double number3 { 1.22836423684299112};
    cout << "number3: " << number3 << endl;
    cout << "sizeof(number3): " << sizeof(number3) << " bytes" << endl;

    
    // SCIENTIFIC NOTATION
    float number4 { 1.22836423684299112e-10};
    cout << "number4: " << number4 << endl; 

    double number5 { 1.22836423684299112e-10};
    cout << "number5: " << number5 << endl;

    double number6 { 1.22836423684299112e+10};
    cout << "number6: " << number6 << endl;

    return 0;
}