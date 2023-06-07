// PRIVATE CLASS

#include<iostream>
using namespace std;

class Data{
    private:
        int salary;
};

class derivedclass : public Data{
    public:
    int fn(int amount){
        int salary;
        salary = amount;
        cout<<salary;
    }
};


int main(){

    int x = 56;

    derivedclass person1;
    person1.fn(x);


}
