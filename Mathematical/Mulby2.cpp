//Multiply the given number by 2 such that it is divisible by 10

#include <iostream>
using namespace std;


//Driver code
int main(){
    int n=1;
    if(n%10==0){
        cout <<  0;
    }
    else{

        n=n*2;

        if(n%10==0){
            cout <<  0;
        }
        else{
        cout <<  -1;
        }

        return 0;

    }
}