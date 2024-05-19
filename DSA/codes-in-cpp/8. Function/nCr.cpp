// In this function we made two functions, one is factorial and the other one is nCr.

#include<iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (; n > 0; n--){
        fact = fact * n;
    }
    return fact;
}

int nCr (int n , int r){
    
    // nCr = n!/ r! * (n-r)! 

    int numerator = factorial(n);    

    int denominator = factorial(r) * factorial(n-r);

    return numerator/denominator;
}

int main() {
    int n , r;

    cout<<"Enter n : ";
    cin>>n; 

    cout<<"Enter r : ";
    cin >> r;

    cout<<"nCr = " << nCr(n,r) <<endl ;
}