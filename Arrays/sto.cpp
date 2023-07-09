#include<bits/stdc++.h>
using namespace std;
//Opp function 
int convertOpposite(string str){
// GeEkSfOrGeEkS
 
 for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        else if (str[i] >= 'A' && str[i] <= 'Z')
            // Convert uppercase to lowercase
            str[i] = str[i] + 32;
}


}
//Driver code 
int main(){

   string str = "GeEkSfOrGeEkS";
    // Calling the Function
    convertOpposite(str);
 
    cout << str;
    return 0;

}