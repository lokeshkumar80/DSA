#include<iostream>
using namespace std ;

int main()
{
    int a=0;
    int b=1;
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
   
    for(int i=1; i<=n; i++){
         if(i==1){
            cout<<a<<", ";
        }
        else if(i==2){
            cout<<b<<", ";
        }
        else{
            int nextNum = a+b;
            cout<<nextNum<<", ";
            a = b;
            b = nextNum;
        }
    }
    
     return 0;
}