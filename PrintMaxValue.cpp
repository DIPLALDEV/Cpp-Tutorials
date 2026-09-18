#include<iostream>

using namespace std;

int main(){

    /*
    int num1;
    int num2;

    cout << "Num1 : ";
    cin >> num1;

    cout << "Num2 : ";
    cin >> num2;

    string result = (num1 > num2)? "num1 is greater than num2" : "num1 is smaller than num2";
    cout << result;
 */

    //ternary Initialization
    bool fast {false};
    int speed {fast ? 500 : 100};
    cout << speed << endl;

    return 0;

}