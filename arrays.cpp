#include<iostream>

using namespace std;

int main(){

    
    string Classmates[5];

    Classmates[0] = "Diplal";
    Classmates[1] = "Aman";
    Classmates[2] = "Aadarsh";
    Classmates[3] = "Aayansh";
    Classmates[4] = "Sandesh";

    for(unsigned int i {}; i < 5; ++i){
        cout << "[" << i << "]: " <<  Classmates[i] << endl;
    }
   



   string fruits[5];

    for(unsigned int i{}; i < 5 ; ++i){
        cout << "Fruits [" << i << "] : ";  
        cin >> fruits[i];
        cout << endl;
        continue;
    }

    for(size_t i{}; i < 5 ; ++i){
        cout << fruits[i] << " ";
    }



    

 // constant array 

   const int vehicles[] {1, 2, 3, 4, 5, 6, 7};

    for(int vech : vehicles){
        cout << vech << endl;
    }


    



    //Operation on Array

    int numbers[] {1, 2, 3, 4, 5, 6};
    int sum {0};

    for(int num : numbers){
        sum +=num;
    }

    cout << "Sum of the array is : " << sum << endl;





 //size of an array 

string vegetables[] {"brinjal", "cauliflower", "tomato", "potato"};
int length1 = sizeof(vegetables);


int Numbers[] {1, 2, 3, 4, 5, 6};
int length2 = sizeof(Numbers);

cout << length1 << endl;
cout << length2 << endl;

cout << "Number of the elements in the array : ";

cout << length1 / sizeof(vegetables[0]);


  return 0;
}