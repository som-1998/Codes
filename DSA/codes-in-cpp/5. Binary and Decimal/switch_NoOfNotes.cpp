#include<iostream>
using namespace std;

int main() {


    int n;
    cout << "Enter the amount: ";
    cin>> n;
    int a,b,c,d;
    
    switch(1) {
    case 1: a = n/100;
            cout<<"Number of 100 Rupee Note is " << a << endl;
            n = n%100;
    
    case 2: b = n/50;
            cout<<"Number of 50 Rupee Note is " << b << endl;
            n = n%50;

    case 3: c = n / 20;
            cout<<"Number of 20 Rupee Note is " << c << endl; 
            n = n%20;
            
    case 4: d = n / 1;
            cout<<"Number of 1 Rupee Note is " << d << endl;
}
return 0;
}