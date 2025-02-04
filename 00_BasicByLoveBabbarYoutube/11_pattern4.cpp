#include<iostream>
using namespace std ;

int main()
{
    int n;
    int k=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            k++;
            cout<<k<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Reverse order of previous pattern"<<endl;
    int l=n*n;
     for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<l<<" ";
            l--;
        }
        cout<<endl;
    }
     return 0;
}