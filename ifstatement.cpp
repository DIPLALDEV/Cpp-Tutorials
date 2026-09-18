#include<iostream>

using namespace std;

int main(){
    int num1 {42};
    int num2 {24};

    bool result = (num1 < num2);

    if(result){
        cout << num1 << " is less than " << num2 << endl;
    }

    if(!(result==true)){
        cout << num1 << " is greater than " << num2 << endl;
    }

    return 0;
}