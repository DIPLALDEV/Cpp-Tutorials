#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char string_1 [20] {"Hello Diplal, "};
    char string_2 [50] {"I have crush on you."};

    strcat(string_1, string_2); // using strcat library
    cout << string_1; // note theh concatenation occur on the first variable string. 


  cout << endl << endl;


    cout << "creating the dynamic array" << endl;
    
    char* des_1 = new char[30]{'H', 'E', 'L', 'L', 'O'};
    char* des_2 = new char[30] {' ','W', 'O', 'R', 'L', 'D'};

    cout << "length of the des_1 " << strlen(des_1) << endl;
    cout << "lenght of the des_2 " << strlen(des_2) << endl;

    strcat(des_1, des_2);
    cout << des_1 << endl;



    cout << "length of the des_1 after concatenation " << strlen(des_1) << endl;
    cout << strlen(des_2) << endl;


    cout << endl << endl;

    cout << "copying the string to another string " << endl;
    char source1[] {"Diplal"};
    char destination1[7];

    strcpy(destination1, source1);
    cout << destination1 << endl;
    

    cout << endl << endl;

     cout << "copying the n character into the anohter variable " << endl;

     char source [] {"Diplal"};
     char destination[4];

     strncpy(destination, source, 3);
     destination[3] ='\0';
     cout << destination << endl;
    return 0;
}