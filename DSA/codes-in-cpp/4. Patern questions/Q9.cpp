// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<i-j+1<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }




#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int i = 1;
    while(i<=n){
        int j = 1;
        int p = i;
        while(j<=i){
            cout<<p<<" ";
            p--;
            j++;
        }
        cout<<endl;
        i++;
    }
}