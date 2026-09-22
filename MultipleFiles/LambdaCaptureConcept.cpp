#include<iostream>

using namespace std;

int main(){
    //caputer by value
    int x = 5;
    auto variable = [x](){cout << x << endl;};
    variable();


    //capture by reference
    int p = 6;
    auto reference_variable = [&p]()
    {   p = 5;
        cout << p << endl;
    };
    reference_variable();


    // capture all in context
    int a = 2;
    int b = 4;

    auto AllCapture = [=]()
    {
        cout << a + b << endl;
    };

    AllCapture();

    

    //capture all by reference

    int c = 6;
    int d = 4;

    auto AllCapByReference = [&]()
    {
        cout << 6 + 4 << endl;
    };

    AllCapByReference();

    return 0;
}