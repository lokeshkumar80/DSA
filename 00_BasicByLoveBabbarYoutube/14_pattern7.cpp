#include<iostream>
using namespace std ;

int main()
{
    // The number starting in the each row is 
    // the row number in the triangular pattern  
    int n;
    cin>>n;
    // int k=0;
    // for(int i=1; i<=n; i++){
    //       k=i;
    //     for(int j=1; j<=i; j++){
    //        cout<<k<<" ";
    //        k++;
    //     }
    //     cout<<endl;
    // }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
           cout<<i+j-1<<" ";
        }
        cout<<endl;
    }
     return 0;
}