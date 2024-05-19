#include<iostream>
using namespace std;

void counting(int arr[], int size){
    for( int i = 0 ; i < size ; i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl;
    
}


int maxi(int arr[], int size ){
    int max = INT32_MIN;
    for (int  i = 0 ; i< size ; i++){
        if(arr[i]>max){
            max = arr[i] ;
        }
    }
    return max;
}

int mini(int arr[], int size){
    int min = INT32_MAX;
    for (int i = 0; i < size ; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;

}

int main(){
    int collection[100] = {};
    int size;
    cout<<"size: ";
    cin>>size;
    cout<<"Give the inputs: ";
    for (int i = 0; i<size; i++){
            cin>> collection[i];
    }
        
    cout<<"Values : ";
    counting(collection, size);

    cout<<"The max  value is :" << maxi(collection, size) << endl;  
    cout<<"The min  value is :" << mini(collection, size) << endl;  
}