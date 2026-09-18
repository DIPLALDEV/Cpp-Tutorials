#include<iostream>

using namespace std;

int main(){

    int num1;
    int num2;

    cin >> num1;
    cin >> num2;


    if(num1 == num2){
        cout << "They are Equal numbers" << endl;
    }
    if(num1 < num2){
        cout << "Num1 is smaller than Num2" << endl;
    }
    if(num1 > num2){
        cout << "Num1 is greater than Num2" << endl;
    }
    if(num1 <= num2){
        cout << "Num1 is less than or equal to num2" << endl;

    }
    if(num1 != num2){
        cout << "Num1 is not equal to num2" << endl;
    }
  cout << boolalpha;
    cout << (num1 > num2) << endl;

    return 0;
}