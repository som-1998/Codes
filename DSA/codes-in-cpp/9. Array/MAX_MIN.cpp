#include<iostream>
using namespace std;

void counting(int arr[]){
    for( int i = 0 ; i < 10 ; i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl;
    
}


int maxi(int arr[]){
    int max = INT32_MIN;
    for (int  i = 0 ; i<10 ; i++){
        if(arr[i]>max){
            max = arr[i] ;
        }
    }
    return max;
}

int mini(int arr[]){
    int min = INT32_MAX;
    for (int i = 0; i < 10 ; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;

}

int main(){
    int collection[10] = {1,2,4,6,8};

    cout<<"Values : ";
    counting(collection);

    cout<<"The max  value is :" << maxi(collection) << endl;  
    cout<<"The min  value is :" << mini(collection) << endl;  
}