#include <iostream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

class Student_attendance
{
public:
    // this is the template for all student.

    int Roll_number;
    string full_name;
    char Status;

    void Status_of_student(int Roll_number, string full_name, char Status)
    {
        this->Roll_number = Roll_number;
        this->full_name = full_name;
        this->Status = Status;
    }
};

int main()
{
    // attendance system

    // when it start attendance it will ask either present or absent p for present and a for absent
    // and it will save the data and if again i want to know if any roll number is presetn or not i will just
    // call it by its roll number and it will tell me either he is absent or present.

    // i will create object array to store individual student data

    string Students[6] = {"Diplal", "Aman", "Aadarsh", "Aayansh", "Aaditya", "Biraj"};

    cout << "Let's Start Attaindance." << endl;
    cout << "Are you ready? PRESS [1 for Yes] and [2 for No] : ";
    int start;
    cin >> start;

    Student_attendance Students_attendance_obj[50];

    if (start == 1)
    {

        char status;

        for (int i{0}; i < sizeof(Students) / sizeof(Students[0]); ++i)
        {

            cout << "Roll Number: " << i + 1 << " " << Students[i] << " " << "Status : ";
            cin >> status;

            Students_attendance_obj[i].Status_of_student(i + 1, Students[i], status);
        }
    }
    
    cout << endl;
    cout << "Today Attendance!" << endl;

    for (int j{0}; j < sizeof(Students) / sizeof(Students[0]); ++j)
    {
        cout << "Roll Number: " << Students_attendance_obj[j].Roll_number << ", " << "Name of the Student : " << Students_attendance_obj[j].full_name
             << ", " << "School Status : " << Students_attendance_obj[j].Status << endl;
    }

    return 0;
}



// Remaining tasks
// hiding data
// searching system
// calculating system at the end of the month.....
