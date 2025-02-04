#include<iostream>
using namespace std ;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        // 1st triangle
        int k=0;
        for(int j=1; j<=n-i+1; j++){
            k++;
            cout<<k;
        }
        // 2nd triangle
        for(int j=1; j<=i-1; j++){
            cout<<"**";
        }
        //3rd triangle
        for(int j=1; j<=n-i+1; j++){
            cout<<k;
            k--;
        }
        cout<<endl;
    }
     return 0;
}