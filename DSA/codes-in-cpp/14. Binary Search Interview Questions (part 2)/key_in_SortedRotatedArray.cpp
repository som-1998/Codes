#include<iostream>
using namespace std;

int getPivot(int arr[], int size){
    int s= 0;
    int e = size - 1;
    int mid = s + (e-s)/2;

    while(s<e){
        if(arr[mid] >= arr[0]){
            s = mid +1 ;
        }
        else {
            e = mid;
        }
        mid = s + (e-s)/2;
    }
    return mid;
}

int BinarySearch(int arr[], int s, int e, int k){
    
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == k){
            return mid;
        }
        else if (arr[mid] > k){
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int main(){
    int k;
    cout<<"enter the key(between 1 to 6) ";
    cin>> k;
    int arr[6] = {5,6,1,2,3,4};


    int pivot = getPivot(arr,6);
    if(k >= arr[0]){
        cout<< "Index of the key is "<< BinarySearch(arr,0, pivot-1, k )<<endl;
    }
    else{
        cout<< "Index of the key is "<< BinarySearch(arr,pivot, 5 , k )<<endl;
    }
}