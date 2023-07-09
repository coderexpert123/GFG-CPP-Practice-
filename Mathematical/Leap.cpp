#include <iostream>
using namespace std;
int main() {

    //check leap YEAR 
    int y=2020;
    if(y%400==0){
    cout <<"leap";
    }
    else if(y%100==0){
        cout << "Not leap";
    }
    else if(y%4){

    cout << " leap";


    }
    return 0;

}