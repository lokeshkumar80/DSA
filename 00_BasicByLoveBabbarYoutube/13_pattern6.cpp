#include<iostream>
using namespace std ;

int main()
{
    int n;
    int k=0;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            k++;
            cout<<k<<" ";
        }
        cout<<endl;
    }
     return 0;
}