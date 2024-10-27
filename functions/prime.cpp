#include<iostream>
using namespace std;

// function for checking prime number
bool isPrime(int n){
    
    for (int i = 2; i<n; i++){
        if(n%i==0){
            return 0;
            break;
        }
    }
    return 1;
}
// main function for doing all  the things
int main(){
    int n;
    cout<<"Enter the value of the Number"<<endl;
    cin>>n;
    if(isPrime(n)){
        cout<<"It is a prime number"<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }

    return 0;
}