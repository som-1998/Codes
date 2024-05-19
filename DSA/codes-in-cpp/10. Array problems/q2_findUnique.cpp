
// Code forces -> Find Unique

#include<iostream>
using namespace std;


int findUnique(int *arr, int size)
{
    //Write your code here
    int ans = 0;
    for (int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int MyArr[5] = {1,2,3,1,2};
    cout<<findUnique(MyArr,5);
}