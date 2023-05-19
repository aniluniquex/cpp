// ENUMS
// they return only integers

#include<iostream>
using namespace std;


// DECLARING ENUM
enum Daysofweek{
    monday,
    tuesday,
    wednesday,
    Thursday,
    friday,
    saturday,
    sunday
};

int main(){

    // INITIALISING ENUM TO THE VARIABLES
    Daysofweek day = monday;
    Daysofweek day1 = tuesday;
    
    
    cout<<day<<endl;
    cout<<day1<<endl;




    return 0;

}