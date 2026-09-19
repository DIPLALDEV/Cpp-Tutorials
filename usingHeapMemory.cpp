#include <iostream>
using namespace std;

int main() {

    int* local_ptr_var{nullptr};

    {
        int local_var{33};

        local_ptr_var = new int; //dynamically allocated memory ans stores its address in local_ptr_var
    }

    *local_ptr_var = 77;

    cout << *local_ptr_var << endl;

    // Release the heap memory
    delete local_ptr_var;
    local_ptr_var = nullptr;

    return 0;
}