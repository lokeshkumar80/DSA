#include<iostream>
using namespace std ;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<"The reverse row pattern is"<<endl;

      for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<n-j+1<<" ";
        }
        cout<<endl;
      }
     return 0;
}