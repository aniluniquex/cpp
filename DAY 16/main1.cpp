#include<iostream>
using namespace std;

int add(int a,int b=3){
    return a+b;
}

int main(){

    int x,y;
    cin>>x;
    cin>>y;

    cout<<"The sum of x and y is "<<add(x,y)<<endl; // adds x and y
    cout<<"The sum of x and y is "<<add(x)<<endl; // adds x and 3 where in add function we used


    
    
    
    return 0;

}