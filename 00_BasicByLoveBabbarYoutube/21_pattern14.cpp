#include<iostream>
using namespace std ;

int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        //space print krlo
        for(int space=n-i; space; space--){
            cout<<" ";
        }
        //pattern1 1st triangle
        int k=0;
        for(int j=1; j<=i; j++){
            k++;
            cout<<k;
        }
        //pattern2 2nd triangle
        for(int j=1; j<=i-1; j++){
            k--;
            cout<<k;
        }
        cout<<endl;
    }
     return 0;
}