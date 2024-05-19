#include<iostream>
using namespace std;

void alternative_swap(int arr[], int size){
    int start = 0;

    while(start<size){
        swap(arr[start], arr[start+1]);
        start+=2;

    }

}

void printArr(int arr[], int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {

    int myArr[10] = {1,2,3,4,5,6};

    cout<<"My array is: ";
    printArr(myArr,6);

    cout<< endl;

    cout<<"After Reversing: ";
    alternative_swap(myArr,6);
    printArr(myArr,6);


}

