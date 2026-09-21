#include<iostream>

using namespace std;

int main(){

    char message []{"Hello 123, I am 456. What are you up to?"};

    int count_blank {0};
    int count_digit {0};

    for (auto c : message){
        if(isblank(c)){
            count_blank++;
        }
        if(isdigit(c)){
            count_digit++;
        }
    }

    cout << "Results: " << endl;
    cout << "Total number of blank : " << count_blank << endl;
    cout << "Total number of digit : " << count_digit << endl;

    cout << "Another method to print the requirement." << endl;

    for (unsigned int i{}; i < sizeof(message) ; ++i){
        if(isblank(message[i])){
            count_blank++;
        }
        if(isdigit(message[i])){
            count_digit++;
        }
    }

    cout << "Results: " << endl;
    cout << "Total number of blank : " << count_blank/2 << endl;
    cout << "Total number of digit : " << count_digit/2 << endl;
    return 0;
}