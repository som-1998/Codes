#include<iostream>
using namespace std;

// 1 -> prime
// 0 -> not prime

bool isPrime(int n){
    for(int i = 2; i < n ; i++){
        // divisible, not prime
         if( n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    cout<<"Enter the number you want to check : ";
    int n;
    cin>> n ;

    if(isPrime(n)){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime";
    }
}

