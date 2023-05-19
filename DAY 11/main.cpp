// POINTERS     

#include<iostream>
using namespace std;

int main(){

    int *ptr; //declaring a pointer
    int x = 10; // we declared a variable x which is 10

    ptr = &x; // assigning the address of x to the ptr

    cout<<x<<endl;
    cout<<"The address of x is "<<&x<<endl;
    cout<<"The value at ptr is "<<ptr<<endl; // here the pointer stored the address as another variable
    
    
    cout<<"The address of pointer is "<<&ptr<<endl;
    // This prints the address of the pointer variable
    
    
    
    // to find the what the value the pointer pointed is by using * we can access the what the value is pointed

    cout<<"The pointed value where the pointer pointed "<<*ptr<<endl;







    return 0; 

}