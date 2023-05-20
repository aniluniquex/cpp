// CALL BY VALUE AND CALL BY REFERENCE

// call by value means it applies or shows effect within a function 

#include<iostream>
using namespace std;

int add_one(int value){
    value = value + 1;
    cout<<"The value is "<<value<<endl; //11
}


int main(){

    int x=10; 
    add_one(x);
    cout<<x<<endl;//10




}