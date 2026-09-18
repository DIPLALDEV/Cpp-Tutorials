#include<iostream>

using namespace std;

int main(){
    char Name[6] {'D', 'I', 'P', 'L', 'A', 'L'};

    //LOOPING TO PRINT 
    for(unsigned int i{}; i < sizeof(Name); ++i){
        cout << Name[i];
    }

    cout << endl;

    //DIRECT PRINT
    char message[5] {'H', 'e', 'l', 'l' ,'o'};
    cout << "message : " << message << endl;

    return 0;
}