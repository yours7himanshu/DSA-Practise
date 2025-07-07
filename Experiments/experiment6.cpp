// print from 1 to N but you are not allowed to use +1 in the function parameter


#include<iostream>
using namespace std ;

void backtrack(int i , int num){

    if(i<1) return ;
    else {
        backtrack(i-1,num);
        cout << i<< endl;
    }

}

int main(){
cout << "Enter any number "<< endl;
int num ;
cin>> num;

backtrack(num,num);


}