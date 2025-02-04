#include <iostream>
using namespace std;

int age = 25;
int main() { 
  // int a;
  // int b;
  // cin>>a;
  // cin>>b;
  // cout<< (a&b) <<endl;
  // cout<< (a|b) <<endl;

  // int num=1;
  // cout<<~num<<endl;
  // cout<<~(num)<<endl;
  // cout<<(~num)<<endl;


// here bool gives error
//  // bool num1=1;
//  // cout<< ~num1 <<endl;
//  // cout<< ~(num1) <<endl;
//  // cout<< (~num1) <<endl;
//  // bool a=false;
//  // cout<<~a<<endl;

  // int a=5;
  // int b=5;
  // int c=10;
  // int d=-5;
  // cout<< (a^b) <<endl;
  // cout<< (a^c) <<endl;
  // cout<< (a^d) <<endl;

  // // Left and Right Shift Operator
  
  // int a = 7;
  // cout<<(a<<1)<<endl;
  // cout<<(a<<2)<<endl;

  // int n=100;
  // cout<<(n>>1)<<endl;
  // cout<<(n>>2)<<endl;
  // int b=-100;
  // cout<<(b>>1)<<endl;
  
  // // here right shift operator is giving high positive value
  // unsigned int c=-100;
  // cout<<(c>>1)<<endl;
  // and it is not a garbage value it is fixed high positive value everytime

  // int d=10;
  // cout<<(d<<-1)<<endl; // if shift count is negative then here it is giving error and also sometime it is giving garbage valuec

  // // Increment And Decrement Operator
  // int a=21;
  // cout<<++a<<endl;
  // // here first increment then print so a=22
  // cout<<a++<<endl;
  // // here first print then increment so a=22
  // // let's verify 
  // cout<<a<<endl; // it should be now a=23
  
  // int b = 10;
  // cout<<(--b)*10<<endl;
  // int c = 10;
  // cout<<(c--)*10<<endl;
  // cout<<c*10<<endl;

  // int d=10;
  // int temp = ++d;
  // cout<<(temp * d++)<<endl;

  // int e=10;
  // int temp1 = e++;
  // cout<<(temp1 * ++e)<<endl;

  // int f=5;
  // int temp2=++f;
  // cout<<(temp2)*(++f)<<endl;

  // // Break And Continue Statement

  // for(int i=0; i<5; i++){
  //   cout<<"Hey I am Rahul"<<endl;
  //   break;
  //   cout<<"Hello"<<endl;
  // }
  
  // for(int i=0; i<5; i++){
  //   cout<<"Hey I am Lokesh"<<endl;
  //   continue;
  //   cout<<"Hello"<<endl;
  // }

  // Variable Scoping 

  // int b=5;
  // if(true){
  //   int b=7;
  //   cout<<b<<endl;
  // }
  // cout<<b<<endl;
  
  // int num1=10;
  // if(true){
  //   cout<<"inside if() num1"<<endl;
  //   int num1=100;
  //   if(true){
  //     cout<<"inside if() num2"<<endl;
  //     int num1=12;
  //     cout<<num1<<endl;
  //   }
  //   cout<<num1<<endl;  
  // }
  // cout<<num1<<endl;
  
  // cout<<age<<endl;
  return 0;
}