#include<iostream>
using namespace std;

int main(){
    int n = 5; // normal integer variable
    int &k = n; // reference variable referring to n
    int &c = n; //  reference variable referring to n

    cout<<"n : "<<n<<endl;
    cout<<"k : "<<k<<endl; // nick name given to n
    cout<<"c : "<<c<<endl; // nick name given to n

    k++;

    cout<<"n : "<<n<<endl;
    cout<<"k : "<<k<<endl;
    cout<<"c : "<<c<<endl;
    return 0;
}