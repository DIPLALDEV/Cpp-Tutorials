#include<iostream>
#include<string>


using namespace std;


// first write the general template 

template <typename T>
void sayHello(T a)
{
    cout << a << endl;
}

// tehn write the template for the particular datatype

template <>  // templates
void sayHello<string>(string a)
{
    cout << a << endl;
}

int main(){
    int a;
    cin >> a;
    sayHello(a);
    

    return 0;

}