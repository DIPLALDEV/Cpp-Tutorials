#include<iostream>

using namespace std;


template <typename T>  // templates
T add(T& a){
    return a;
}

int main(){
    int a {5};
    cout << add(a) << endl; //7

    return 0;

}

// when you pass & in the template function then it is reference
// but if you pass & while calling the function this is pass by pointer