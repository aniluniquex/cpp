// CALL BY REFERENCE
// HERE WHILE USING REFERENCE THE EFFECT IS SHOWN ON MAIN FUNCTION
#include<iostream>
using namespace std;

void swap(int &x,int &y){
    int temp = x;
    x = y;
    y = temp;
}


int main(){

    int a = 10;
    int b = 20;

    swap(a,b);

    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    return 0;
}
