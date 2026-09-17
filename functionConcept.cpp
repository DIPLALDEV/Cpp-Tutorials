#include<iostream>

int Add(int x, int y){ // defining a function 
    return x + y;
}

int main(){
    int a, b; // declargin two variables
    std::cin >> a;  // taking input of the numbers
    std::cin >> b;

    int sum = Add(a, b); // calling the function Add
    std::cout << "Sum of Two numbers is: " << sum << std::endl; // printing output

    return 0;
}