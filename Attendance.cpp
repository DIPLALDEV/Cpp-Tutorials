#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <cctype>
#include <stdexcept>

using namespace std;

class Student_attendance
{
public:
    // this is the template for all student.

    int Roll_number;
    string full_name;
    char Status;

    void Status_of_student(int Roll_number, string full_name, char Status) /// this method updates the variable initialized inside the class.
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

    Student_attendance Students_attendance_obj[100];

    if (start == 1) // condtion to ask whether the user want to start attendance
    {
        char status;

        for (int i{0}; i < sizeof(Students) / sizeof(Students[0]); ++i) // loopint to take input of status of individual students.a
        {
            cout << "Roll Number: " << i + 1 << " " << Students[i] << " " << "Status : ";
            
            while(true){
                    cin >> status;

                    try{
                        if(status != 'a' && status != 'A' && status != 'p' && status != 'P'){
                            throw invalid_argument("Status must be P and A");
                        }
                        break;
                    } 
                    catch(invalid_argument& e){
                        cout << e.what() << endl;
                    }
                
                }
            
                
            Students_attendance_obj[i].Status_of_student(i + 1, Students[i], status);
        }

        cout << endl;
        cout << "Today Attendance!" << endl;

        int count_absent{0};
        int count_present{0};

        for (int j{0}; j < sizeof(Students) / sizeof(Students[0]); ++j)
        {
            cout << "Roll Number: " << Students_attendance_obj[j].Roll_number << ", " << "Name of the Student : " << Students_attendance_obj[j].full_name
             << ", " << "School Status : " << (char)toupper(Students_attendance_obj[j].Status) << endl;

            if (Students_attendance_obj[j].Status == 'a' || Students_attendance_obj[j].Status == 'A')
            {
                ++count_absent;
            }

            if (Students_attendance_obj[j].Status == 'p' || Students_attendance_obj[j].Status == 'P')
            {
                ++count_present;
            }
        }

        cout << endl;
        cout << "Total Present : " << count_present << endl;
        cout << "Total Absent : " << count_absent << endl;
    }
    else {
        cout << "I donot want to start attendance.";
    }
 return 0;
}

// Remaining tasks
// hiding data
// searching system
// calculating system at the end of the month.....
