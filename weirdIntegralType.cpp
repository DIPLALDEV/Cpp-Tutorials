#include<iostream>
#include<cmath>

using namespace std;

int main(){
    short int var1 {4};
    short int var2 {5};

    
    char var3 {40};
    char var4 {50};

    cout << sizeof(var1) << endl;
    cout << sizeof(var2) << endl;
    cout << sizeof(var3) << endl;
    cout << sizeof(var4) << endl;

    auto result1 {var1 + var2};
    auto result2 {var3 + var4};

    cout << result1 << endl;
    cout << result2 << endl;

    cout << sizeof(result2) << endl;
    cout << sizeof(result1) << endl;

    return 0;

}