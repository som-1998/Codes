#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> c) {
    for(int i : c){
        cout<< i << " ";
    }
}

vector<int> reverse(vector<int> ab ) {
    int s = 0; int e = ab.size()-1;
    while( s<=e) {
        swap(ab[s],ab[e]);
        s++;
        e--;
    }
    return ab; 
}

int main(){

    vector<int> v = {1,3,4,6};

    v.push_back(11);

    vector<int> ans = reverse(v);
    
    cout<<"After Reversing: ";
    print(ans);

    return 0;
}