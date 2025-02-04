#include <iostream>
using namespace std;

int main() { 
  int num;
  cin>>num;
  int n;
  n = num/2;
  for(int row = 0; row < n; row++){
    for(int strL=0; strL<n-row; strL++){
      cout<<"* ";
    }
    for(int sp = 0; sp < 2*row+1;sp++){
      cout<<"  ";
    }
    for(int strR=0; strR<n-row; strR++){
      cout<<"* ";
    }
    cout<<endl;
  }
  
  for(int row = n; row < num; row++){
    for(int strL=0; strL<(row+1)-n; strL++){
      cout<<"* ";
    }
    for(int sp = 0; sp < 2*(num-row)-1;sp++){
      cout<<"  ";
    }
    for(int strR=0; strR<(row+1)-n; strR++){
      cout<<"* ";
    }
    cout<<endl;
  }
  
}