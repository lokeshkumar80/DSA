#include <iostream>
#include <math.h>
using namespace std;

int decimalToBinarymethod1(int n){
  // decimalMethod
  int binaryno = 0;
  int i = 0;
  while(n>0){
    int bit = n%2;
    binaryno = bit*pow(10,i) + binaryno;
    i++;
    n = n/2;
  }
  return binaryno;
}

int decimalToBinarymethod2(int n){
  // Bitwise Method
  int binaryno = 0;
  int i = 0;
  while(n>0){
    int bit = n&1;
    binaryno = bit*pow(10,i) + binaryno;
    i++;
    n = n>>1;
  }
  return binaryno;
}

int main() {
  int n;
  int binary;
  cout<<"Enter the number"<<endl;
  cin>>n;
  binary = decimalToBinarymethod1(n);
  cout<<binary<<endl<<"Using Method 1"<<endl;
  binary = decimalToBinarymethod2(n);
  cout<<binary<<endl<<"Using Method 2"<<endl;
}