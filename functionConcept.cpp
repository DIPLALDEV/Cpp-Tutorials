#include<iostream>

int Add(int x, int y){
    return x + y;
}

int main(){
    int a, b;
    std::cin >> a;
    std::cin >> b;

    int sum = Add(a, b);
    std::cout << "Sum of Two numbers is: " << sum << std::endl;

    return 0;
}