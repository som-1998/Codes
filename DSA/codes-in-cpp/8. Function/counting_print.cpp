#include<iostream>
using namespace std;

//Function Signature
void counting(int n){
    //Function Body
    for(int i = 1; i <= n; i++ ){
        cout<< i <<" ";
    }    
}

int main(){

    int n;
    cout<<"Enter the number: ";
    cin>> n;

    //Function Call
    counting(n);
    return 0;
}