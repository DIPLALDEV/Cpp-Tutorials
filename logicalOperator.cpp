#include<iostream>

using namespace std;

int main(){
    bool a {true};
    bool b {false};
    bool c {true};

    cout << boolalpha;
    cout <<(!(a && b) || c )<< endl; // AND and OR operator

    cout << !a << endl; // NOT operator
    cout << !b << endl;
    cout << !c << endl;

    return 0;
}