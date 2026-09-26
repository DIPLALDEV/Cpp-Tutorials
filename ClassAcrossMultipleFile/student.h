
#include<string>

class Student {
    private:
        std::string full_name;  
        int age;
      
    public:
        Student(std::string f, int a);
        void display();
};
