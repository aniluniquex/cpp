// FUNCTION OVERLOADING
// fun with same name but with diffrent parameters

#include<iostream>
using namespace std;

void print_fn(string a){
    cout<<a<<endl;
}
void print_fn(int a){
    cout<<a<<endl;
}
void print_fn(float a){
    cout<<a<<endl;
}

int main(){



    int x = 13;
    string name = "anil";
    float i = 122.55;


    print_fn(name);
    print_fn(x);
    print_fn(i);



    return 0;
}