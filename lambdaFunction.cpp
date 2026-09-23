#include<iostream>
#include<cstring>
#include<string>

using namespace std;


int main(){

    cout << "Printing Lambda Functions : ";
    auto sayHello = []{  // without parameter
        cout << "Hello World!";
    };

    cout << sayHello << endl;

    cout << "Printing lambda function with parameter :";

    auto squareOfNumber = [](int x){ // with parameter
        return x * x;  // lambda with return type
    };

    cout << squareOfNumber(5) << endl;


    auto square = [](int x)
    { // with parameter
        return x * x;  // lambda with return type
    };
    
    cout << "Printing lambda function with return type : "<< square(5) << endl;

    
    //capture list in lambda concept

    int multiplier = 10;
    auto multiply = [multiplier](int x){
        cout << x * multiplier;
    };

    multiply(3);

}