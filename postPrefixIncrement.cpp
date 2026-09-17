#include<iostream>

using namespace std;

int main(){ 
    // Postprefix increment

    int value {5};

    cout << value ++ << endl;
    cout << value << endl;
    cout << ++value << endl;

    cout << value -- << endl;
    cout << value << endl;
    cout << --value << endl;

    return 0;
}
