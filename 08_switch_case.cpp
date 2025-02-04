#include<iostream>
using namespace std;

int main()
{
    float a , b;
    cout<<"Enter the values of a and b :"<<endl;
    cin>>a>>b;
    int op;
    cout<<"Enter the operation you want to execute :"<<endl;
    // 1 for addition , 2 for subtraction , 3 for multiplication , 4 for division
    cin>>op;
    float ans=0;

    switch(op){
        case 1:
            cout<<"Add case"<<endl;
            ans = a+b;
            break;
        case 2:
            cout<<"Sub case"<<endl;
            ans = a-b;
            break;
        case 3:
            cout<<"Mul case"<<endl;
            ans = a*b;
            break;
        case 4:
            cout<<"div case"<<endl;
            ans = a+b;
            break;
        default:
            cout<<"Invalid Operator"<<endl;
            return 0;
    }
    cout<<"Your answer is :"<<ans;
     return 0;
}