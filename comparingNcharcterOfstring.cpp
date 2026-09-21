#include<iostream>
#include<cstring>

using namespace std;

int main(){

    // we use the function called "strncmp" to compare along with teh nubme of character we want. 

    const char* data_1 {"This is Diplal. From Nepal."};
    const char* data_2 {"This is Diplal. From Nepal."};
    unsigned int n{10};

    cout << strncmp(data_1, data_2, n);

    return 0;
}