#include<iostream>
using namespace std;

int sum = 56;

int main(){
    int a,sum,b;
    
    
    
    cout<<"Enter the value of a:"<<endl;
    cin>>a;

    cout<<"Enter the value of b:"<<endl;
    cin>>b;

    sum = a + b;

    cout<<"The sum of a and b is "<<sum<<endl;
    cout<<"The value of the global sum is "<<::sum<<endl;


    // we can use the global sum by using :: if we the variable is already present in main


    // float 
    float p = 10.88;
    double x = 90.568923456878889;
    long double e = 34.14L;

    cout<<"The value of p is "<<p<<endl;
    cout<<"The value of x is "<<x<<endl;
    cout<<"The value of e is "<<e<<endl;

    // size of operator
    cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"the size of 55.88 is "<<sizeof(55.88123)<<endl;
    cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;//4
    cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;//4
    cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;//16
    cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;//16


    // cpp randomly takes the any number like 34.8 as double not as float

    
    // Reference variable 
    int x1 = 66;
    int &y1 = x1;//stores the x1 value in the memory of y1


    cout<<x1<<endl; //66
    cout<<y1<<endl; //66 


    // Typecasting

    int a1 = 69;
    float b1 = 23.4654;

    cout<<"The value of a1 is "<<float(a1)<<endl;//69
    cout<<"The value of a1 is "<<(float)a1<<endl;//69
    
    

    cout<<"The value of b1 is "<<int(b1)<<endl;
    cout<<"The value of b1 is "<<(int)b1<<endl;

    cout<<a1+b1<<endl;
    cout<<float(a1)+b1<<endl;
    
    cout<<"The value is "<<a1+int(b1)<<endl;
    cout<<"The value is "<<a1+(int)b1<<endl;//we can also write above one like this

    return 0;

}