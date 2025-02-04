#include<iostream>
using namespace std ;

int main()
{
    int n;
    cin>>n;
    //without using extra variable k
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i-j+1<<" ";
        }
        cout<<endl;
    }
    //with using k
    // int k=0;
    // for(int i=1; i<=n; i++){
    //     k=i;
    //     for(int j=1; j<=i; j++){
    //         cout<<k<<" ";
    //         k--;
    //     }
    //     cout<<endl;
    // }
     return 0;
}