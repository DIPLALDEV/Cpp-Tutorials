#include<iostream>

using namespace std;


template <typename T>  // templates
T add(T a, T b){
    return a + b;
}

int main(){
    cout << add(2, 5) << endl; //7 // this is actually reduced 
    cout << add(4.5, 4.5) << endl; //9 // we do not want to mention datatyep compiler will decide

    return 0;

}