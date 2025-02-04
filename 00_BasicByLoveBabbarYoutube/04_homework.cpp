#include<iostream>
using namespace std ;

int main()
{
    int ch;
    cout<<"Your ASCII value"<<endl;
    cin>>ch;
    if(ch>=48 && ch<=57){
        cout<<"Your Entry is Numeric"<<endl;
    }
    else if(ch>=65 && ch<=90){
        cout<<"Your entry is Uppercase"<<endl;
    }
    else if(ch>=97 && ch<=122){
        cout<<"Your entry is Lowercase"<<endl;
    }
    else{
        cout<<"Your entry is other than basic need"<<endl;
    }
     return 0;
}