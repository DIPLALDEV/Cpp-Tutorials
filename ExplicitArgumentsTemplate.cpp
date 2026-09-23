#include<iostream>

using namespace std;


template <typename T>  // templates
T add(T a, T b){
    return a + b;
}

int main(){
    // here while calling the function i am telling the compiler hey buddy 
    // these parameters are int and dobule you do not need to burn you energy.
    
    cout << add<int>(2, 5) << endl; //7
    cout << add<double>(4.5, 4.5) << endl; //9

    return 0;

}