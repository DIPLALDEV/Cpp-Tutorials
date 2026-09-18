#include<iostream>

using namespace std;

int main(){


bool green {true};
bool police_stop;
cout << "Police Stopped : ";
cin >> boolalpha >> police_stop;

if(green){
    if(police_stop){
        cout << "stop" << endl;
    }
    else{
        cout << "Go" << endl;
    }
}


// nested condition alternative 

if(green && !police_stop){
    cout << "Go" << endl;
}
else{
    cout << "Stop" << endl;
}

return 0;
}