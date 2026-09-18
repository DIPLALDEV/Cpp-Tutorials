#include<iostream>

using namespace std;

int main(){

    int pen {12};
    int marker {34};
    int circle {32};
    int rectangle {56};
    int ellipse {45};

    int tool {pen};


    if(tool == marker){
        cout << "Active tool is a marker" << endl;
    }
    else if ( tool == pen){
        cout << "Active tool is a pen" << endl;
    }
    else if ( tool == circle){
        cout << "Active tool is a circle" << endl;
    }
    else if (tool == rectangle){
        cout << " Active tool is a rectangle" << endl;
    }
    else if (tool == ellipse){
        cout << "Active tool is a ellipse" << endl;
    }

    return 0;
}