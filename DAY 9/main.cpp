// LOOPS IN CPP
/*
    1. for loop
    2.while loop
    3. do while loop
*/

#include<iostream>
using namespace std;

int main(){

    int i = 0;
    int x = 0;

    // FOR LOOP

    // for (i = 0; i <100; i++)
    // {
    //     cout<<i<<endl;
    // }
    
    // WHILE LOOP
    while (i<10)
    {
        cout<<i<<endl;
        i++;
    }
    cout<<endl;
    
    // DO WHILE LOOP
    
    do{
        
        cout<<x<<endl;
        x++;
    }while(x<10);
    



    return 0;
}