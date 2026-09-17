#include<iostream>

using namespace std;

int main(){
    bool red_light {true};

    if (red_light){
        cout << "stop!" << endl;
    }
    else{
        cout << "Go through!" << endl;
    }

    cout << "Size of boolean is: " << sizeof(bool)<< " " << (sizeof(bool)==1? "byte" : "bytes" )<< endl;
    return 0;
}
