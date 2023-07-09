#include <iostream>
using namespace std;
 


/* 
    1 
    23 
    456
    78910
*/ 


void printFloydTriangle(int n) 
{ 
 int val=1;

 for(int i=1;i<=n;i++){

    for(int j=1;j<=n;j++){

        cout << val++ << " ";
    cout << endl;


    }
 }
 }

  
// Driver Code
int main() 
{ 
    printFloydTriangle(6); 
    return 0; 
} 


