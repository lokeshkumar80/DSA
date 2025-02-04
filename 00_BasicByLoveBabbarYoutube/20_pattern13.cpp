#include<iostream>
using namespace std ;

int main()
{
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     // space print krlo
    //     for(int space=i-1;space;space--){
    //         cout<<" ";
    //     }
    //     // row number column times
    //     for(int j=1; j<=n-i+1; j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     // space print krlo
    //     for(int space=n-i;space;space--){
    //         cout<<" ";
    //     }
    //     // row number row timess
    //     for(int j=1; j<=i; j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     // space print krlo
    //     for(int space=i-1;space;space--){
    //         cout<<" ";
    //     }
    //     // numbers
    //     int k = i;
    //     for(int j=1; j<=n-i+1; j++){
    //         cout<<k;
    //         k++;
    //     }
    //     cout<<endl;
    // }

    int n;
    cin>>n;
    int k=1;
    for(int i=1; i<=n; i++){
        // space print krlo
        for(int space=n-i;space;space--){
            cout<<" ";
        }
        // numbers
        for(int j=1; j<=i; j++){
            cout<<k;
            k++;
        }
        cout<<endl;
    }
     return 0;
}