// const arguement 
// used to not change the values in main function



#include<iostream>
using namespace std;

// while using const arg we should use only void only
void print_integer(const int value=20) {
    cout << value << endl;
}

int main(){

    
    int value = 10;
    print_integer(value);









    return 0;
}