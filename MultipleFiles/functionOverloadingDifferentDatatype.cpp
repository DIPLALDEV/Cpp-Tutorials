#include<iostream>

using namespace std;

int add(int a, int b){ // same funciton name but different datatype.
    return a + b;

}

double add(double a, double b){
    
    return a + b;
}

int main(){
    int a {5};
    int b {4};

    int result1 = add(a, b);
    cout << result1 << endl;

    double x {1.5};
    double y {2.5};
    double result2 = add(x, y);
    cout << result2 << endl;

}