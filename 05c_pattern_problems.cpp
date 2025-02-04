#include <iostream>
using namespace std;

// // Pattern Problem 1

// int main() { 
//   int n;
//   cin>>n;
//   for(int row=0;row<n;row++){
//     for(int col=0;col<row+1;col++){
//       if(col==row){
//         cout<<row+1;
//       }
//       else{
//         cout<<row+1<<"*";
//       }
//     }
//     cout<<endl;
//   }
//   for(int row=0;row<n;row++){
//   for(int col=0;col<n-(row+1);col++){
//     if(col==(n-(row+1)-1)){
//       cout<<n-(row+1);
//     }
//     else{
//       cout<<n-(row+1)<<"*";
//     }
//   }
//   cout<<endl;
//   }

//   // // both code are correct with different way of thinking
//   // // that is even odd 
//   // for(int row=0;row<n;row++){
//   //   for(int col=0;col<2*row+1;col++){
//   //     if(col%2==0){
//   //       cout<<row+1<<" ";
//   //     }
//   //     else{
//   //       cout<<"* ";
//   //     }
//   //   }
//   //   cout<<endl;
//   // }
//   return 0;
// }


// // Pattern Problem 2

// int main(){
//   int n;
//   cin>>n;
//   for(int row=0;row<n;row++){
//     for(int col=0;col<n-row;col++){
//       if(row==0){
//         cout<<"*";
//       }
//       else if(col ==0 || col == n-row-1){
//         cout<<"*";
//       }
//       else{
//         cout<<" ";
//       }
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// Pattern Problem 3

int main(){
  int n;
  cin>>n;
  for(int row = 0; row < n; row++){
    for(int col = 0; col < row+1; col++){
      if(row==0 || row==n-1){
        cout<<col+1;
      }
      else if(col==0){
        cout<<col+1;
        for(int sp=0; sp<row; sp++){
          cout<<" ";
        }
      }
      else if(col==row){
        cout<<col+1;
        }
    }
    cout<<endl;
  }
  return 0;
}