// NESTING OF MEMBER FUMCTION IN CPP

// in this nesting of a member function means calling a member in another member of same class
#include<iostream>
using namespace std;

class empty{
    public:
    void function(){
        fun2();
    }

    private:
    void fun2(){
        cout<<"Hello !!!"<<endl;
    }
};

int main(){


    empty one;
    one.function();




    return 0;

}