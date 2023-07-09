#include <iostream>
using namespace std;
//function for swap 
// void swap(int a, int b , int temp){
// temp=a;
// a=b;
// b=temp;
//  cout << "A " << a  << endl<< "B " <<b <<endl;
// }
// main method
int main() {
int a,b,temp;
    cin >> a;
    cin >> b;  
    swap(a,b);
    cout << "A " << a  << endl<< "B " <<b <<endl;
  return 0;
}