// UNION


// in q there the datatypes should be same only and we should access only one datatype in main function
#include<iostream>
using namespace std;

union q
{
    int money;
    int dollars;

};




int main(){


    q m;




    m.money = 100;
    // m. dollars = 1;

    cout<<m.money<<endl;
    // cout<<m.dollars<<endl;





}