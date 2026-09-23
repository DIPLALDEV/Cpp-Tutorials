#include<iostream>

using namespace std;

int add(int a, int b){
    return a + b;
}

int main(){

    int a, b;
    cout << "a : ";
    cin >> a;

    cout << "b : ";
    cin >> b;

    int result = add(a, b);
    cout << "Sum of the two numbers : " <<  result << endl;

    return 0;




}