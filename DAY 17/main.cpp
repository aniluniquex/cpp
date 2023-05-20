// RECURSSION
// means calling a fun inside a function

#include<iostream>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
    return n*fact(n-1);
    }

}

/*assume n is 5
    5 * fact(4) = 5*4*3*2*1

*/


int main(){


    int number = 5;

    int c = fact(number);
    cout<<c<<endl;




    return 0;
}