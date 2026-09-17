#include<iostream>

int main(){
   
    std::string fullname;
    std::cout << "Enter your full name: ";
    std::getline(std::cin, fullname);
    
    int age;
    std::cin >> age;
    std::cout << "Hello, " << fullname << "! You are " << age << " years old." << std::endl;
    
 /*
    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name; // taking input of the name
    std::cout << "Hello, " << name << "! Welcome to the C++ world." << std::endl; // printing output
*/
    return 0;
}