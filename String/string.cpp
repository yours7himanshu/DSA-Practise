// checking wether the string is recursion or not using recursion


#include<iostream>
using namespace std;

bool palindromeChecking(int i , string s){

    if(i >= s.size()/2) return true;

    if(s[i]!=s[s.size()-i-1]) return false;

   return palindromeChecking(i+1,s);


}


int main(){

    string x = "madam";

    cout << palindromeChecking(0,x)<<endl;



}