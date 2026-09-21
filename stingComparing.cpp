#include<iostream>
#include<cstring>

using namespace std;

int main(){
    //comparing sting usign std::strcmp

    // strcmp -signature : int strcmp(const char *lhs, const char *rhs)
    //Returns negative value if lhs appears before rhs in lexicographical order
    //zero if lhs and rhs compare equal
    // and positive value if lhs appearas afte rhs in lexicographical order

        const char* string_data1 {"Alabama"};
        const char* string_data2 {"Blabama"};

        cout << strcmp(string_data1, string_data2) << endl;
        cout << strcmp(string_data2, string_data1) << endl;

        cout << endl;

        string_data1 = "Alabama";
        string_data2 = "Alabama";

        cout << strcmp(string_data1, string_data2) << endl;



return 0;
    
}