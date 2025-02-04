#include<iostream>
using namespace std ;

int main()
{
    cout<<(17<<1)<<endl;
    cout<<(17<<2)<<endl;
    cout<<(19>>1)<<endl;
    cout<<(19>>2)<<endl;
    
    int i=7;
    cout<<(++i)<<endl;
    // i=8, print 8
    cout<<(i++)<<endl;
    //print 8, i=9
    cout<<(i--)<<endl;
    //print 9, i=8
    cout<<(--i)<<endl;
    // i=7, print 7
     return 0;
}