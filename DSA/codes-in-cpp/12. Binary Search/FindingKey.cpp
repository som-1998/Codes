#include<iostream>
using namespace std;

int FindingKey(int arr[], int size, int key){
    int s = 0;
    int e = size-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        else if (arr[mid] < key){
            s = mid + 1;
        }
        else{ 
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}

int main(){
    int even[6] = {2,5,7,8,11,18};
    int odd[5] = {1,2,5,8,10};

    cout<< "Index of 5 in even array is "<< FindingKey(even,6,5)<<"\n";
    cout<< "Index of 5 in odd array is "<< FindingKey(odd,5,5);
}
