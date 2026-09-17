#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    float number1 { 1.22836423684299112f};
    double number2 { 1.22836423684299112};
    long double number3 { 1.22836423684299112L};


    // print out the sizes of the floating points

    cout << "sizeof(float): " << sizeof(float) << " bytes" << endl;
    cout << "sizeof(double): " << sizeof(double) << " bytes" << endl;
    cout << "sizeof(long double): " << sizeof(long double) << " bytes" << endl;


   // precision
   cout << std::setprecision(20);
   cout << "number1: " << number1 << endl;
    cout << "number2: " << number2 << endl;
    cout << "number3: " << number3 << endl;


    // some problems

    float number4 {1141597435.4f};
    double number5 {1141597435.4f}; // due to f at the end it is still the float
    long double number6 {1141597435.4f}; // same it is float again

    double number7 {1141597435.4};
    long double number8 {1141597435.4l};

    cout << setprecision(20);
    cout << number4 << endl;
    cout << number5 << endl;
    cout << number6 << endl;
    cout << number7 << endl;
    cout << number8 << endl;

    return 0;
}