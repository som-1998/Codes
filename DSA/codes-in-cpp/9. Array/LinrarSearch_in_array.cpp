#include<iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for (int i = 0 ; i < size ; i++){
        if(arr[i] == key){
            return 1;
        
        }
    }
    return 0;
}

int main(){

    int numbers[100] = {1,5,4,-8,1,-4,6,-5};
    int key;
    cout<<"Enter the key: ";
    cin>> key;

    bool found = search(numbers, 10 ,key );

    if (found){
        cout<<"It is present.";
    } 
    else{
        cout<<"It is not present.";
    }
}