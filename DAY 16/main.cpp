// Inline fn

// use of inline function is instead of calling function multiple times we use inline to save the execution time

#include<iostream>
using namespace std;

inline int Product(int a,int b){
    return a*b;
}




int main(){

    int x=10,y=3;

    cout<<"The product of x and y is "<<Product(x,y)<<endl;
    cout<<"The product of x and y is "<<Product(x,y)<<endl;
    cout<<"The product of x and y is "<<Product(x,y)<<endl;
    cout<<"The product of x and y is "<<Product(x,y)<<endl;
    cout<<"The product of x and y is "<<Product(x,y)<<endl;
    cout<<"The product of x and y is "<<Product(x,y)<<endl;









    return 0;

}