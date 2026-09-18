#include<iostream>
#include<limits>


using namespace std;

int main(){

    cout << numeric_limits<short>::min() << "  to  " << numeric_limits<short>::max() << endl;

    cout << numeric_limits<unsigned short>::min() << "  to  " << numeric_limits<unsigned short>::max() << endl;

    cout << numeric_limits<int>::min() << "  to  " << numeric_limits<int>::max() << endl;

    cout << numeric_limits<long>::min() << "  to  " << numeric_limits<long>::max() << endl;

    cout << numeric_limits<float>::min() << "  to  " << numeric_limits<float>::max() << endl;

    cout << numeric_limits<double>::min() << "  to  " << numeric_limits<double>::max() << endl;
    return 0;

} 
