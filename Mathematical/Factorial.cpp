#include <iostream>
using namespace std;


//Main method
int fact(int n){

    if(n==0|| n==1){ return 1;}
    return n*fact(n-1);
}
//Driver Code
int main(){
    int n=5;
    int fr=fact(n);
    cout << fr;
    return 0;

}