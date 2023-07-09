#include <iostream>
using namespace std;


// Gcd Function 
int find_gcd(int a,int b){


if(a==0){
    return b;

}  
if(b==0){
    return a;

}  

if(a==b){
    return a;

}

if(a>b){
    return find_gcd(a-b,b);

}

return find_gcd(a,b-a);


}

//Driver Code
int main(){

    int a=98;
    int b=56;

    int fr=find_gcd(a,b);

    cout <<fr;


    return 0;

}