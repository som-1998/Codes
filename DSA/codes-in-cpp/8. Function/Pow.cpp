#include<iostream>
using namespace std;

int power(int n , int m){

    int ans = 1 ;
    for( int i = 1; i <= m ; i++){
            ans = ans * n;
    }
    return ans ;
}

int main(){
    int a , b;
    cout << "Enter the base :";
    cin >> a;
    cout << "Enter the power :";
    cin >> b;

    int answer = power(a,b);
    cout<< "The answer is " << answer << endl ;
}