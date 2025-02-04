#include<iostream>
using namespace std;

// // Call by value 
// int incrementBy1(int n){
//     n = n+1;
//     return n;
// }

// Call by reference
int incrementBy1(int &k){
    k = k+1;
    return k;
}

int main(){
    int n;
    cout<<"Enter value : ";
    cin>>n; 
    cout<<"n : "<<n<<endl;
    int m = incrementBy1(n);
    cout<<"m : "<<m<<endl;
    cout<<"n : "<<n<<endl;
    return 0;
}