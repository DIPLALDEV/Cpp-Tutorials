#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char message[] = "DIPLAL";

    char* result = strchr(message, 'L');

    if (result != nullptr) {
        cout << result << endl;
    }
    else {
        cout << "Character not found" << endl;
    }

    return 0;
}


// why does it print LAL instead of L

// strchr here find the first L in the string
// then return the pointer of the first and save to the result 
// if we print the result whihc store the pointer it points 
// to whole later character so it prints all of them.

// if you want to pirnt teh pointer index then you can use 
// strchr(message , 'L') - message;