#include<iostream>
#include<string>

using namespace std;


double weight {}; // declaration and definitino 


double add(double a, double b) { // we cannot make multiple definition of free standing variable
    return a + b;
}

int main(){
    //one defintion Rule

    cout << add(12.5, 32.6) << endl;

    return 0;

}