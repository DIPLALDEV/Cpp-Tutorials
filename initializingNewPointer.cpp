#include<iostream>

using namespace std;

int main(){
    int *p_numbers1 {new int}; //store junk but in heap memory
    int *p_numbers2 {new int (22)}; //direct initialization
    int *p_numbers3 {new int {23}}; //use uniforma intialization

    cout << p_numbers1 << endl;
    cout << *p_numbers1 << endl << endl; // stores junk

    cout << p_numbers2 << endl; // memory address
    cout << *p_numbers2 << endl << endl; // value

    cout << p_numbers3 << endl; // memroy address
    cout << *p_numbers3 << endl << endl; // value

    //remember to realease the memory

    delete p_numbers1;
    p_numbers1 = nullptr;

    delete p_numbers2;
    p_numbers2 = nullptr;

    delete p_numbers3;
    p_numbers3 = nullptr;

    return 0;
}