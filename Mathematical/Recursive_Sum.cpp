#include <iostream>
using namespace std;

//Function for rc
int fr(int calculate, int n , int current){
// of the series f(n)= (1) + (2*3) + (4*5*6) ... n 
int cur=1;
int i;


 if(current==n+1){
    return 0 ;
    }
for( i=calculate ;i<calculate+current;i++)
{
cur=cur*i;
}
return cur+fr(i,current+1,n);

}
//Driver code
int main(){
   // input number of terms in the series
    int n = 5;
 
    // invoking the function to
    // calculate the sum
    cout<<fr(1, 1, n)<<endl;
 
    return 0;
}