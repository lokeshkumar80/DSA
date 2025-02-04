#include <iostream>
using namespace std;

int main() { 
  // Pattern - Full Pyramid
  int n;
  cin>>n;
  cout<<"Full Pyramid"<<endl;
  for(int row=0; row<n; row++){
    for(int sp = 0; sp<n-row-1; sp++){
      cout<<" ";
    }
    for(int str = 0; str<row+1; str++){
      cout<<"* ";
    }
    cout<<endl;
  }

  // Pattern - Inverted Full Pyramid
  cout<<"Inverted Full Pyramid"<<endl;
  for(int row = 0; row<n; row++){
    for(int sp = 0; sp<row; sp++){
      cout<<" ";
    }
    for(int str = 0; str<n-row; str++){
      cout<<"* ";
    }
    cout<<endl;
  }

  // Pattern - Diamond(that is combination of one full pyramid and inverted full pyramid)
  cout<<"Diamond"<<endl;
  int num = n/2;
  for(int row = 0; row<num; row++){
    for(int sp = 0; sp<num-row-1; sp++){
      cout<<" ";
    }
    for(int str = 0; str<row+1; str++){
      cout<<"* ";
    }
    cout<<endl;
  }
  for(int row = 0; row<num; row++){
    for(int sp = 0; sp<row; sp++){
      cout<<" ";
    }
    for(int str = 0; str<num-row; str++){
      cout<<"* ";
    }
    cout<<endl;
  }
  // Pattern - Hollow Pyramid
  cout<<"Hollow Pyramid"<<endl;
  for(int row = 0; row<n; row++){
    for(int sp = 0; sp<n-row-1; sp++){
      cout<<" ";
    }
    for(int str = 0; str<row+1; str++)
      if(str==0 || str==row){
        cout<<"* ";
      }
      else{
        cout<<"  ";
      }
    cout<<endl;
  }

  // Pattern - Inverted Hollow Pyramid
  cout<<"Inverted Hollow Pyramid"<<endl;
  for(int row = 0; row<n; row++){
    for(int sp = 0; sp<row; sp++){
      cout<<" ";
    }
    for(int str = 0; str<n-row; str++)
      // at first and last column, print star
      if(str==0 || str==n-row-1){
        cout<<"* ";
      }
      else{
        cout<<"  ";
      }
    cout<<endl;
  }
  // Pattern - Hollow Diamond
  cout<<"Hollow Diamond"<<endl;
  
  for(int row = 0; row<num; row++){
    for(int sp = 0; sp<num-row-1; sp++){
      cout<<" ";
    }
    for(int str = 0; str<row+1; str++)
      if(str==0 || str==row){
        cout<<"* ";
      }
      else{
        cout<<"  ";
      }
    cout<<endl;
  }
  for(int row = 0; row<num; row++){
    for(int sp = 0; sp<row; sp++){
      cout<<" ";
    }
    for(int str = 0; str<num-row; str++)
      if(str==0 || str==num-row-1){
        cout<<"* ";
      }
      else{
        cout<<"  ";
      }
    cout<<endl;
  }
  
}