#include <bits/stdc++.h>
using namespace std;

//Program to find Sum of the series 1*3 + 3*5 + ….
//Driver code 
int main(){

    // 2 1*3 + 3*5 =3+15=18

    // Sn = n*(4*n*n + 6*n - 1)/3

    int n=4;

    int res= n*(4*n*n + 6*n - 1)/3;
    cout << res;




}