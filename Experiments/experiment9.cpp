

// code using functions with return type its printing sum 1 to n
#include<iostream>
using namespace std ;

int returning (int n){

    if(n == 0 ){
        return 0;
    }

    return n + returning(n-1);

}

int main(){

    int n ;
    cin >> n ;
    cout<<(returning(n))<<endl;
}