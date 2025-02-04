#include <iostream>
#include <math.h>
using namespace std;

int binaryTodecimalMethod1(int n){
  // decimal Method
  int decimalno = 0;
  int i = 0;
  while(n!=0){
    int bit = n%10;
    decimalno = decimalno + bit*pow(2,i);
    i++;
    n = n/10;
  }
  return decimalno;
}

// int binaryTodecimalMethod2(int n){
//   // binary Mathod
//   int decimalno = 0;
//   int i = 0;
//   while(n!=0){
//    // pending if exist
//   }
//   return decimalno;
// }

int main() {
  int n;
  int decimal;
  cout<<"Enter the binary number: "<<endl;
  cin>>n;
  decimal = binaryTodecimalMethod1(n);
  cout<<"Using method1 the decimal number is: "<<decimal<<endl;
  // decimal = binaryTodecimalMethod2(n);
  // cout<<"Using method2 the decimal number is: "<<decimal<<endl;
}