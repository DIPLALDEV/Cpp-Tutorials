#include<iostream>

using namespace std;

int main(){
    char value1 = 65; // assigning the character a integer value.
    cout << value1 << endl;

    char value2 = 66;
    cout << value2 << endl;
    cout << static_cast<int>(value2) << endl;

    char character1 {'a'};
    char character2 {'b'};
    char character3 {'c'};

    cout << character1 << endl;
    cout << character2 << endl;
    cout << character3 << endl;

    return 0;
}