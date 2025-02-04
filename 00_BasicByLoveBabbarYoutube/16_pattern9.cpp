#include<iostream>
using namespace std ;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            char ch = 'A' + i - 1;
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         char ch = 'A' + j - 1;
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // char ch = 'A';
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // char ch;
    // for(int i=1; i<=n; i++){
    //     ch = 'A' + i - 1;
    //     for(int j=1; j<=n; j++){
    //         cout<<ch<<" ";
    //         ch++;
    //     }
    //     cout<<endl;
    // }

         // OR
    // int n;
    // cin>>n;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=n; j++){
    //         char ch = 'A'+i+j-2;
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}