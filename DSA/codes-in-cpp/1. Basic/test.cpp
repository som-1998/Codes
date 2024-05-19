#include<iostream>
using namespace std;

void nStarTriangle(int n) {
    // Write your code here.
    for(int i = 1; i<=n; i++){
        for(;i<n;i++){
            cout<<" ";
        }
        for(;i>0;i--){
            cout<<"*";
        }
        for(;i-1>0;i--){
            cout<<"*";
        }
        cout<<endl;
    }

}

int main(){
    nStarTriangle(3);
}