
// adding 1 to N numbers using recursion without global variable

#include<iostream>
using namespace std;

void adding (int lstNo , int sum){

    if(lstNo<1){
        cout << sum << endl;
        return ;
    }
    else {
        adding(lstNo-1,sum+lstNo);
    }
  

}

int main (){

    cout << "enter  the number from where you want to have the sum "<<endl;
    int lstNo;
    cin >> lstNo;

    adding(lstNo, 0);


}