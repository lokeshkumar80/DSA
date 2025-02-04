#include<iostream>
using namespace std ;

int main()
{
    int n;
    cout<<"The value of n is "<<endl;
    cin>>n;

    cout<<"The first " << n <<" natural numbers are : ";
    int i=1;
    while(i<=n){
        cout<<i;
        if(i<n){
            cout<<", ";
        }
        i++;
    }

    int sum=0;
    int j=1;
    while(j<=n){
    sum+=j;
    j++;
    }
    cout<<endl<<"The sum of first "<<n<<" natural numbers is : "<<sum<<endl;

    int sum1=0;
    int k=2;
    while(k<=n){
        sum1+=k;
        k+=2;
    }
    cout<<"The sum of even numbers only is : "<<sum1<<endl;
     return 0;
     
}