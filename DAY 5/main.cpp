#include<iostream>
using namespace std;


int main(){
    int a,b;
    a = 20;
    b = 30;

    cout<<"The sum of a and b is "<<a+b<<endl;
    cout<<"The diffrence of a and b is "<<a-b<<endl;
    cout<<"The product of a and b is "<<a*b<<endl;
    cout<<"The quotient of a by b is "<<a/b<<endl;
    cout<<"The remainder of a by b is "<<a%b<<endl;
    cout<<"The value of a++ is "<<a++<<endl; //20
    cout<<"The value of a-- is "<<a--<<endl; //20
    // a is 20 now
    cout<<a<<endl;
    cout<<"The value of ++a is "<<++a<<endl; //21
    cout<<"The value of --a is "<<--a<<endl; //20

    // Comparison operator

    cout<<"The value of a==b is "<<(a==b)<<endl; //0
    cout<<"The value of a!=b is "<<(a!=b)<<endl;//1
    cout<<"The value of a>b is "<<(a>b)<<endl;//0
    cout<<"The value of a<b is "<<(a<b)<<endl;//1
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;

    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;  //0 true and false is false
    cout<<"The value of this logical and operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;  //1 true or false is true
    cout<<"Value of (!(a==b)) is "<<(!(a==b))<<endl; //1
    
    
    
    
    
    
    
    
    return 0;


}