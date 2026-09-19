#include<iostream>

using namespace std;

int main(){

    //declaring and using references 

    int int_val {12};
    double double_val {12.6};

    int& reference_to_int_value {int_val};
    double& reference_to_double_value {double_val};

    cout << "int_value : " << int_val << endl;
    cout << "double_value : " << double_val << endl;
    cout << "reference_to_int_value : " << reference_to_int_value << endl;
    cout << "reference_to_double_value : " << reference_to_double_value << endl;

    cout << "&int_value : " << &int_val << endl;
    cout << "&double_value : " << &double_val << endl;
    cout << "reference_to_int_value : " << &reference_to_int_value << endl;
    cout << "reference_to_double_value : " << &reference_to_double_value << endl;

    return 0;


}