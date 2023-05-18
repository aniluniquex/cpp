#include<iostream>
using namespace std;

int main(){

    int i;


    for (i = 0; i <=10; i++)
    {
        if (i==7)
        {
            break;// it terminates the loop when condition is met
        }
        cout<<i<<endl;
        
    }
    

    cout<<endl;

    for (int j = 0; j <= 5; j++)
    {
        if (j==2)
        {
            continue;// it skips the specified value when the condition is met
        }
        cout<<j<<endl;
        
    }
    

    return 0;

}