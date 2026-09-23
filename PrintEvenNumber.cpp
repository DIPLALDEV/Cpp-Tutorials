#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> nums = { 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for_each(nums.begin(), nums.end(), [](int x){
        if(x % 2 == 0){
            cout << x << endl;
        }
    });

    cout << "Cout of even numbers : "
    << count_if(nums.begin(), nums.end(), [](int n){ return n % 2 == 0;})
    << endl;

    return 0;
}