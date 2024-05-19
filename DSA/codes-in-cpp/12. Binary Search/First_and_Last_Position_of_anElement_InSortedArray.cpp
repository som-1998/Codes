#include<iostream>
using namespace std;

int firstOcc(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            e = mid-1;
            ans = mid;
        }
        else if (key > arr[mid]){
            s = mid + 1;
        }
        else{ 
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid] == key){
            s = mid+1;
            ans = mid ;
        }
        else if (key > arr[mid]){
            s = mid + 1;
        }
        else{ 
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int even[6] = {2,11,11,11,11,11};


    cout<< "First Index of 11 in this array is "<< firstOcc(even,6,11)<<"\n";
    cout<< "Last Index of 11 in this array is "<< lastOcc(even,6,11)<<"\n";

}
