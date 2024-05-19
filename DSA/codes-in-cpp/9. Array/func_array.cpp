#include<iostream>
using namespace std;

void printarr(int arr[], int n){
    cout<<"Printing Arrays\n";
    for (int i = 0; i<n ; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    cout<<endl;
}



int main(){

    int n = 12;
    int first[12] = {1,4,6,7};

    int m = 9 ;
    int second[m] = {4,9,0,2};


    printarr(first, n);

    printarr(second , m);

}