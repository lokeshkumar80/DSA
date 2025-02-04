#include<iostream>
using namespace std ;

int main()
{
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     //space print krlo
    //     for(int space=n-i; space; space--){
    //         cout<<" ";
    //     }
    //     // star print krlo
    //     for(int j=1; j<=i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     int star= n-i+1;
    //     for(int j=1; j<=star; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        // space print krlo
        for(int space=i-1; space; space--){
                cout<<" ";
        }
        int star= n-i+1;
        for(int j=1; j<=star; j++){
            cout<<"*";
        }
        cout<<endl;
    }

     return 0;
}