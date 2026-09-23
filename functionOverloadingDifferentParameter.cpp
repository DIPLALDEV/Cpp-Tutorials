#include<iostream>

using namespace std;

int add(int a, int b){ // same funciton name but 
    // different number of paramters passing in the functions.
    return a + b;

}

int add(int a, int b, int c){
    
    return a + b + c;
}

int main(){
    int a {5};
    int b {4};

    int result1 = add(a, b);
    cout << result1 << endl;

    int x {1};
    int y {2};
    int z {3};

    int result2 = add(x, y, z);
    cout << result2 << endl;

}