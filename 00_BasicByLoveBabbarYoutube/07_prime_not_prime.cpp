#include<iostream>
using namespace std ;

int main()
{
    int n;
    cout<<"Enter your number"<<endl;
    cin>>n;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            cout<<"The given number is not prime number"<<endl;
            break;
        }
        if(i==n-1){
            cout<<"The given number is prime number";
        }
    }
    
     return 0;
}