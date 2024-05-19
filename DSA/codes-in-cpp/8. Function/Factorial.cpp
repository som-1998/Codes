// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int ans = 1;
//     int a = n;
//     for (int i = 1 ; i <= n ; i++ ){
//         ans = ans * a;
//         a--;
//     }
//     return ans ;
// }


// int main(){
//     int n ; 
//     cout << "Enter the number ";
//     cin >> n;
//     int answer = factorial(n);
//     cout << "Factorial of "<< n <<" is "<< answer;
// }




// #include<iostream>
// using namespace std;

// int factorial(int n){
//     int ans = 1;
//     for (; n > 0 ; n-- ){
//         ans = ans * n;
//     }
//     return ans ;
// }


// int main(){
//     int n ; 
//     cout << "Enter the number ";
//     cin >> n;
//     int answer = factorial(n);
//     cout << "Factorial of "<< n <<" is "<< answer;
// }


#include<iostream>
using namespace std;

int factorial(int n){
    int ans = 1;
    for (int i = 1 ; i <= n ; i++ ){
        ans = ans * i; 
    }
    return ans ;
}


int main(){
    int n ; 
    cout << "Enter the number ";
    cin >> n;
    int answer = factorial(n);
    cout << "Factorial of "<< n <<" is "<< answer;
}