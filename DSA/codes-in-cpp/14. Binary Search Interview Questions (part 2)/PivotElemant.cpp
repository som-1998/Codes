#include<iostream>
using namespace std;

int getPivotInd(int arr[], int size){
    int s = 0;
    int e = size-1;

    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{ 
            e = mid;
        }
        mid = s + (e-s)/2;
    } 
    return s;

}

int getPivot(int arr[], int size){
    int s = 0;
    int e = size-1;

    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{ 
            e = mid;
        }
        mid = s + (e-s)/2;
    } 
    return arr[s];

}

int main(){
    int arr[5] = {4,5,1,2,3};
    cout<<"The pivot element index is "<< getPivotInd(arr,5)<<"\n";
    cout<<"The pivot element is "<< getPivot(arr,5);
}