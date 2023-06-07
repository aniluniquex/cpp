// PROTECTED CLASS
#include<iostream>
using namespace std;

class Myclass{

    protected: //This is a protected class
        int protected_one;//with a member of protected one


};

class Derivedclass: public Myclass{
    //created a new class by the name of derivedclass which is derived my class by making my class as a public class
    public: //making the function to be public to be accessed
    int print(){
        
        // cin>>a;
        // protected_one;
        cout<<protected_one;//used to print protected_one value
    }

};

int main(){

    

    Derivedclass secretnum; //declaring a variable secretnum
    secretnum.print();//printing the protected number under the variable of secretnum
    // This is the way we access protected class

    return 0;
}
