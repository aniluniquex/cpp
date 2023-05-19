// ARRAYS


#include<iostream>
using namespace std;

int main(){
    
    int marks[10] = {10,15,8,7,6,23,88,91};


    

    cout<<"The marks is "<<marks[0]<<endl;
    cout<<"The marks is "<<marks[1]<<endl;
    cout<<"The marks is "<<marks[2]<<endl;
    cout<<"The marks is "<<marks[3]<<endl;
    cout<<"The marks is "<<marks[4]<<endl;
    cout<<"The marks is "<<marks[5]<<endl;
    cout<<"The marks is "<<marks[6]<<endl;
    cout<<"The marks is "<<marks[7]<<endl;

    cout<<endl;

    // POINTERS AND ARRAYS

    int *p = marks;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;





    return 0;

}