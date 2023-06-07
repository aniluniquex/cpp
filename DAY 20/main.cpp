#include<iostream>
using namespace std;
class Myclass{  //declaring class with the name of my class

    public:
        int apples;
        int mangos;
    private:
        int amount;
    protected:
        int protected_member;
};

int main(){

    Myclass person;
    Myclass person1;

    int x;
    

    person.apples = 100;
    x= person1.mangos = 23;
    // person1.private_member = 23;
    // we cannot access a private class outside Members declared as private can only be accessed by the member functions inside the class.
   

    cout<<person.apples<<endl;
    cout<<x<<endl;



    return 0;
}