#include <bits/stdc++.h>
using namespace std;



//function for wood cuts 

int wc(int n){


    //hz cut 
    int x=n/2;
    //vt cut 
    int vt=(n-x);

    return (x+1)*(vt+1);





}

//Driver code 

int main(){


    int n=3;
    int fr=wc(n);
    cout << fr;
    

}