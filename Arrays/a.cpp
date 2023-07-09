#include <bits/stdc++.h>
using namespace std;
//max function
int largest(int arr[] , int n){

int max=arr[0];

for(int i=1;i<n;i++){


if(arr[i]>max)
    max=arr[i];


return max;


}


}
//Driver code 
int main(){
 
   int arr[] = { 10, 324, 45, 90, 9808 };
    int n = sizeof(arr) / sizeof(arr[0]);
   
    // Function call
    cout << "Largest in given array is " << largest(arr, n);
    return 0;
    

}