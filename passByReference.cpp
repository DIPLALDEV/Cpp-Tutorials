#include<iostream>

using namespace std;
void change(int &a){
    a = 100;
}

int main(){
    int x = 10;
    change(x);

    cout << x ; // 100

    return 0;

}