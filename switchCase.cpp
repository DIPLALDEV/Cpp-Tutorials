#include<iostream>

using namespace std;

    const int Pen {12}; // out the main function these varialbe should be constant.
    const int Marker {13};
    const int Circle {45};
    const int Brush {23};

int main(){

    int tool {Pen};

    switch(tool){
        case Marker:{
            cout << "Active tool is Marker." << endl;
        }

        case Pen: {
            cout << "Active tool is Pen. " << endl;
        }
        break;
        

        case Circle: {
            cout << "Active tool is Circle." << endl;
        }
        

        case Brush:{
            cout << "Active tool is Brush." << endl;
        }
        

        default:{
            cout << "None of the tools is active." << endl;
        }
    }

    return 0;
}