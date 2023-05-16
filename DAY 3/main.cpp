#include<iostream>
using namespace std;

int glo = 53;

void print(){
    int x;
    cout<<glo<<endl;

}

int main(){
    int glo = 69;
    int apple = 5;
    float pi = 3.14;
    char name = 'a';
    bool is_true = true; // if 1 true 0 false
    double value = 9.88776662234;


    cout<<apple<<endl;
    cout<<pi<<endl;
    cout<<name<<endl;
    cout<<is_true<<endl;
    cout<<value<<endl;

    cout<<glo<<endl;

    print();
    glo = 88;
    cout<<glo<<endl;

    return 0;

}


//global variable is accessed globally and local variable is accessed inside a function

// local variable is declared and accessed within a function
// global variable is deeclared outside a function and can be accessed anywhere