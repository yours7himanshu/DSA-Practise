#include<iostream>
using namespace std;

int count = 0;

void cal(){

//  agr is functin ke ander hi variable declare krdeta to ye bug bnjata haha hahahahah
// int count = 0;
    while(count !=4){
        cout<<count<<endl;
        count++;

        cal();
        
    }
    return ;

}

int main (){
    cal();
}