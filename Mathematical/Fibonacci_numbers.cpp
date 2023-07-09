#include <iostream>
using namespace std;
//fib 

int fib(int n){

    if(n==0){
        return 0;

    }else if(n==1){
        return 1;

    }
    else 
    return fib(n-1)+fib(n-1);

}

//Driver code
int main(){

  int n = 7;
      for(int i = 0; i < n; i++)
    {
        cout << fib(i) << endl;
    }
    return 0;

}