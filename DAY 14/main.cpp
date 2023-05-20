// FUNCTIONS 

#include<iostream>
using namespace std;

void message(){
    cout<<"Hello world"<<endl;
}

int add(int a,int b){
    int sum = a + b;
    return sum;
}



int main(){


    int x = 5;
    int y = 10;

   int c = add(x,y);
    cout<<"The sum is "<<c<<endl;


    message();




    return 0;
}