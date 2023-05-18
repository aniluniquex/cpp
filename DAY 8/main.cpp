// CONTROL STRUCTURES IN CPP
/*  1.sequence 
    2.selection
    3.repetetion
*/
#include<iostream>
using namespace std;

int main(){

    int age=18;
    
    
    //sequence
    // This program prints the numbers from 1 to 10.

    for (int i = 1;i<=10;i++){
        cout<<i;
    }
    cout<<endl;
    //selection
    if(age<18){
        cout<<"You are not elegible for driving license"<<endl;
    }
    else{
        cout<<"You are eligible for driving license"<<endl;
    }
    int number,count=0;
    cin>>number;

    // repetetition
    for (int i = 1; i <= 100; i++)
    {
        if (i==number)
        {
            count++;
        }
        
    }

    cout<<"The number of times "<<number<<" appeared is "<<count<<endl;
    
    // There is one more important case is switch case
    switch (age)
    {
    case 18:
        cout<<"Your age is 18";
        break;
    
    default:
        cout<<"Your age is not 18";
        break;
    }


    return 0;
}