#include<iostream>

using namespace std;

int main(){
    int numbers[] {1,2,3,4,5,6,7,8,9,0};
    cout << numbers[12] << endl;

    numbers[12879670] = 12;
    cout << numbers[12879670] << endl;

    return 0;

    //suggestion, dont go outside the boundary, use the allocated location to store data....
}