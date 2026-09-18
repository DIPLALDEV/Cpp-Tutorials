#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    // Output manipulators
    cout << "----------------------------------------------------";
    //std::endl
    cout << "Hello" << endl;
    cout << "World" << endl;

    cout << "----------------------------------------------------";

    //std::flush => sending data directly to the devices without intermediate 
    cout << "Hello, this is me, Diplal." <<  std::endl << std::flush;

    cout << "----------------------------------------------------";
    //std:setw() => adjust the filed with for the item aboutt o be printed
    
    cout << "----------------------------------------------------";

    //unformatted table:
    int width = 30;
    cout << "firstname" << " " << "lastname" << " " << "age" << endl;
    cout << "Diplal" << " " << "Thakur" << " " << "age" << endl;

    //formatted table
    cout << "firstname" << setw(width) << "lastname" << setw(width) << "age" << endl;
    cout << "Diplal" << setw(width) << "Thakur" << setw(width) << "18" << endl;

    cout << "----------------------------------------------------";
    //Right justified
    // formatted table in the right
    cout << right;
    cout << "firstname" << setw(width) << "lastname" << setw(width) << "age" << endl;
    cout << "Diplal" << setw(width) << "Thakur" << setw(width) << "18" << endl;

    //formatted table in the left
    cout << left;
    cout << "firstname" << setw(width) << "lastname" << setw(width) << "age" << endl;
    cout << "Diplal" << setw(width) << "Thakur" << setw(width) << "18" << endl;

    cout << "----------------------------------------------------";

    //internal justified
    cout << internal;
    cout << "firstname" << setw(width) << "lastname" << setw(width) << "age" << endl;
    cout << "Diplal" << setw(width) << "Thakur" << setw(width) << "18" << endl;

    cout << "----------------------------------------------------";

    //filling the empty spaces with dash
    cout << setfill('-');
    cout << "firstname" << setw(width) << "lastname" << setw(width) << "age" << endl;
    cout << "Diplal" << setw(width) << "Thakur" << setw(width) << "18" << endl;

    cout << "----------------------------------------------------";

    //std::boolalpha

    bool a {false};
    cout << a << endl; // 0
     
    cout << boolalpha;
    cout << a << endl; // false
    
    cout << noboolalpha;
    cout << a << endl; //0

    cout << "----------------------------------------------------";
    //std::showpos

    int num1 {25};
    int num2 {-230};

    cout << num1 << endl;
    cout << num2 << endl;

    cout << showpos;
    cout << num1 << endl;
    cout << num2 << endl;

    cout << noshowpos;
    cout << num1 << endl;
    cout << num2 << endl;

    cout << "----------------------------------------------------";

    //std::dec  std::oct  std::hex
    int pos_int {3423};
    int neg_int {-234};
    double double_var {941.524};

    cout << "pos_int (dec) : " << dec << pos_int << endl;
    cout << "pos_int (hex) : " << hex << pos_int << endl;
    cout << "pos_int (oct) : " << oct << pos_int << endl;

    cout << endl;

    cout << "neg_int (dec) : " << dec << neg_int << endl;
    cout << "neg_int (hex) : " << hex << neg_int << endl;
    cout << "neg_int (oct) : " << oct << neg_int << endl; 

    cout << endl;
    
    cout << "double_var (dec) : " << dec << double_var << endl;
    cout << "double_var (hex) : " << hex << double_var << endl;
    cout << "double_var (oct) : " << oct << double_var << endl;
    
    cout << endl;

    cout << "----------------------------------------------------";

    //std::showbase
    cout << showbase;
    cout << "pos_int (dec) : " << dec << pos_int << endl;
    cout << "pos_int (hex) : " << hex << pos_int << endl;
    cout << "pos_int (oct) : " << oct << pos_int << endl;

    cout << endl;

    cout << "----------------------------------------------------";

    //std::uppercase
    cout << uppercase;
    cout << "pos_int (dec) : " << dec << pos_int << endl;
    cout << "pos_int (hex) : " << hex << pos_int << endl;
    cout << "pos_int (oct) : " << oct << pos_int << endl;


    cout << "----------------------------------------------------";
    //std::scientific (default where necessary) - std::fixed

    double a {9.497539482452345234};
    double b {2006.0};
    double c {1.34e-10};

    cout << "double values used scientific notation automatically that is default:" << endl;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    
    cout << endl;

    cout << "----------------------------------------------------";
    //forcing to be scientific
    cout << scientific;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;
    
    cout << endl;

    cout << "----------------------------------------------------";
    //forcing to be fixed;
    cout << fixed;
    cout << "a : " << a << endl;
    cout << "b : " << b << endl;
    cout << "c : " << c << endl;


    cout << endl;

    cout << "----------------------------------------------------";
    //std::setprecision

    double a {0.917349234134123};

    cout << a << endl;

    cout << setprecision(10);
    cout << a << endl;

    cout << setprecision(20);
    cout << a << endl;


    cout << "----------------------------------------------------";
    //  std::showpoint

    double d {34.1};
    double e {101.99};
    double f (12.0);
    int g {45};

    cout << endl;

    cout << "noshowpoint (default) : " << endl;
    cout << "d : " << d << endl;
    cout << "e : " << e << endl;
    cout << "f : " << f << endl;
    cout << "g : " << g << endl;
    
    cout << endl;
    
    cout << showpoint; 
    cout << "d : " << d << endl;
    cout << "e : " << e << endl;
    cout << "f : " << f << endl;
    cout << "g : " << g << endl;

    cout << endl;

    return 0;
}