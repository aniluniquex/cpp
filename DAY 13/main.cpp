#include<iostream>
using namespace std;
struct Data
{
    int age;
    string name;
    float salary;
};






int main(){

    Data person1;
    

    person1.age = 15;
    person1.name = "Anil varma";
    person1.salary = 123000.8560;

    

    cout<<person1.age<<endl;
    cout<<person1.name<<endl;
    cout<<person1.salary<<endl;

    return 0;
}