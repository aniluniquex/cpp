// CONSTANTS , MANIPULATORS AND OPERATOR PRECEDENCE 
#include<iostream>
#include<iomanip>
// it is must to use iomanip file when using setw
using namespace std;

int main(){

    int apples = 56;
    int banana = 23;
    int x = 9699;
    int z = 23334;
    // const char x = 'a';
    // x = 'b';

    // cout<<x<<endl;
    // we cannot changre the variable when it is declared as constant

    cout<<apples<<endl;
    cout<<banana<<endl;

    // manipulators are endl which made the program come to new line that is endl

    // another manipulator is setw which create spaces in the output

    cout<<setw(4)<<banana<<endl; // This create some spaces by setting the width to 4 in the output the output is 23 if we use setw to 4 then it creates 2 spaces before the number
    cout<<setw(4)<<x<<endl;//no spaces because it already has 4 digits

    cout<<setw(4)<<z<<endl; //when we use a 5 digit number and setw to 4 it doesnot has any effect to the original number


    // OPERATOR PRECEDENCE
        /*
        Basic operators

        zeroth priority ()
        first priority *, /, %
        second priority +,-


        */
    
    cout<<"The value of this operation is "<<(3*7/2+5-8)<<endl; //7








return 0;
}
