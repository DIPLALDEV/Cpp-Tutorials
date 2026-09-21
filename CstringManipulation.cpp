#include<iostream>
#include<cctype>
#include<cstring>


using namespace std;

int main(){

    //finding the length of the string

    const char message1 [] {"The sky is blue."};
    const char* message2 [] {"The sky is blue."}; //Array decays into the pointer

    cout << "Message1 : " << message1 << endl;

    // strlen ignores the null character
    cout << "strlen(message1) : " << strlen(message1) << endl;

    // sizeof include the null character
    cout << "sizeof(message1)" << sizeof(message1) << endl;

    // strlen still works with decayed arrays
    //cout << "strlen(message2) : " << strlen(message2) << endl;


    //prints size of pointer
    cout << "sizeof(message2) : " << sizeof(message2) << endl;

    return 0;


}