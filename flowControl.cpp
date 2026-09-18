#include<iostream>

using namespace std;

int main(){
    bool red {true};
    bool yellow {false};
    bool green {true};

    if (red){
        cout << "Stop" << endl;
    }

    if (yellow){
        cout << "yellow" << endl;
    }

    if (green){
        cout << "Go" << endl;
    }

    return 0;
}
