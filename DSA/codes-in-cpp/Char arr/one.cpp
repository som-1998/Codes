#include<bits/stdc++.h>
using namespace std;

int ind = 0;
char mostOcc( char str[] , int size){
    int arr[26] = {0};
    for( int i = 0; i< size; i++){
        ind = str[i] - 'a';
        str[ind]++;
    }

    int max = -1, ans = 0;
    for (int i = 0; i < arr.length(); i++)
    {
        if( max < arr[i])
        {
            max = arr[i];
            int ans = i;
        }            
    }

    return 'a'+ ans ;
    
}
int length(char str[]){
    int count = 0;
    for( int i = 0; str[i] != '\0' ; i++){
        count++;
    }
    return count;
}
int main(){
    char ch[20];
    cout<<"enter your string\n";
    cin>> ch;
    cout<< ch;

    cout<< "Most occering char is: "<< mostOcc( ch, 5);
}