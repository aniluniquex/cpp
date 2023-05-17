#include<iostream>
using namespace std;

int main(){
    int a = 10;

    cout<<a++<<endl; //10 prints a and then increases now a value is 11
    cout<<a--<<endl; // 11 prints the a value and then decreases now a is 10
    cout<<a<<endl;//10
    cout<<++a<<endl; //increases by 1 and a becomes 11
    cout<<a<<endl; //a is 11
    cout<<--a<<endl;//10
    cout<<a; //10
}