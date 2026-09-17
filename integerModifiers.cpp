#include<iostream>
using namespace std;

int main(){

    int value1 {10};
    int value2 {-400};

    cout << "value1: " << value1 << endl;
    cout << "value2: " << value2 << endl;

    cout << "sizeof value1: " << sizeof(value1) << endl;
    cout << "sizeof value2: " << sizeof(value2) << endl;


    signed int value3 {10};
    signed int value4 {-400};

    cout << "value3: " << value3 << endl;
    cout << "value4: " << value4 << endl;

    cout << "sizeof value3: " << sizeof(value3) << endl;
    cout << "sizeof value4: " << sizeof(value4) << endl;


    unsigned value5 {10}; // only allow positive number
  //unsigned value6 {-400};// this is the compile error

    cout << "value5: " << value5 << endl;
  //cout << "value6: " << value6 << endl;

    cout << "sizeof value5: " << sizeof(value5) << endl;
 // cout << "sizeof value6: " << sizeof(value6) << endl;




    short short_var {32767}; // 2 Bytes
    short int short_int {32767};
    signed short signed_short {32767};
    signed short int signed_short_int {32767};
    unsigned short unsigned_short {65535};
    unsigned short int unsigned_short_int {65535};

    int int_var {2147483647}; // 4 bytes
    signed signed_int {2147483647}; // signed is used as datatype 
    signed int signed_int_var {2147483647}; // signed is used as integer modifier
    unsigned unsigned_int {4294967295};
    unsigned int unsigned_int_var {4294967295};

    long long_var {2147483647}; // 4 bytes or 8 bytes 
    long int long_int {2147483647};
    signed long signed_long {2147483647};
    signed long int signed_long_int {2147483647};
    unsigned long unsigned_long {4294967295};
    unsigned long int unsigned_long_int {4294967295};

    long long long_long {9223372036854775807}; //8 Bytes
    long long int long_long_int {9223372036854775807};
    signed long long signed_long_long {9223372036854775807};
    signed long long int signed_long_long_int {9223372036854775807};
    unsigned long long unsigned_long_long {18446744073709551615};
    unsigned long long int unsigned_long_long_int {18446744073709551615};


    cout << "sizeof short_var: " << sizeof(short_var) << endl;
    cout << "sizeof short_int: " << sizeof(short_int) << endl;  
    cout << "sizeof signed_short: " << sizeof(signed_short) << endl;
    cout << "sizeof signed_short_int: " << sizeof(signed_short_int) << endl;
    cout << "sizeof unsigned_short: " << sizeof(unsigned_short) << endl;        
    cout << "sizeof unsigned_short_int: " << sizeof(unsigned_short_int) << endl;

    cout << "sizeof int_var: " << sizeof(int_var) << endl;
    cout << "sizeof signed_int: " << sizeof(signed_int) << endl;
    cout << "sizeof signed_int_var: " << sizeof(signed_int_var) << endl;
    cout << "sizeof unsigned_int: " << sizeof(unsigned_int) << endl;
    cout << "sizeof unsigned_int_var: " << sizeof(unsigned_int_var) << endl;
    
    cout << "sizeof long_var: " << sizeof(long_var) << endl;
    cout << "sizeof long_int: " << sizeof(long_int) << endl;
    cout << "sizeof signed_long: " << sizeof(signed_long) << endl;
    cout << "sizeof signed_long_int: " << sizeof(signed_long_int) << endl;
    cout << "sizeof unsigned_long: " << sizeof(unsigned_long) << endl;
    cout << "sizeof unsigned_long_int: " << sizeof(unsigned_long_int) << endl;

    cout << "sizeof long_long: " << sizeof(long_long) << endl;
    cout << "sizeof long_long_int: " << sizeof(long_long_int) << endl;
    cout << "sizeof signed_long_long: " << sizeof(signed_long_long) << endl;
    cout << "sizeof signed_long_long_int: " << sizeof(signed_long_long_int) << endl;
    cout << "sizeof unsigned_long_long: " << sizeof(unsigned_long_long) << endl;
    cout << "sizeof unsigned_long_long_int: " << sizeof(unsigned_long_long_int) << endl;

    return 0;
}