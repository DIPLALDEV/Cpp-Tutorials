#include<iostream>

using namespace std;

int main(){
    float num1 {3.5};
    float num2 {};
    float num3 {};

    float result1 {num1 / num2};
    float result2 {num2 / num3};

    cout << result1 << endl;
    cout << result2 << endl;
    
    return 0;
}