#include<iostream>

using namespace std;

int main(){
    
    int num1;
    int num2;

    cout << "Num1: " ;
    cin >> num1;
    cout << endl;

    cout << "Num2: ";
    cin >> num2;
    cout << endl;


    if(num1 > num2){
        cout << num1 << " is greater than " << num2  << endl;
    }
    else if(num1 < num2){
        cout << num1 << " is less than " << num2 << endl;
    }else{
        cout << num1 << " is equal to " << num2 << endl;
    }

    cout << endl;

    return 0;

}