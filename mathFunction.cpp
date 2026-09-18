#include<iostream>
#include<cmath>

using namespace std;

int main(){

// floor function
double value1 {7.7};
cout << floor(value1) << endl; // 7


//ceiling function
cout << ceil(value1) << endl;  // 8


// absolute value
double value2 {-5000};
cout << abs(value2) << endl;


// exponential of the functions
double exponential = exp(0);
cout << exponential << endl;

// powwer of the value
int num {3};
cout << pow(num, 3) << endl;

//lograrithmic function

cout << log10(10000) << endl;
cout << log2(32) << endl;

//sqrt
cout << sqrt(81) << endl;

//round 
cout << round(1.56) << endl;
return 0;

}