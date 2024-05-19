#include<iostream>
#include<math.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int i =1;
    int number = pow(n,2);
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<number<<" ";
            number--;
            j++;
        }
        cout<<endl;
        i++;
    }
}    