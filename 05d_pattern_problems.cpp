#include <iostream>
using namespace std;

// int main() { 
//   int n;
//   cin>>n;
//   for(int row=0;row<n;row++){
//     char ch;
//     for(int col=0;col<row+1;col++){
//       int number = col + 1;
//       ch = number + 'A' - 1;
//       cout<<ch;
//     }
//     for(char alphabet = ch; alphabet>'A';){
//       alphabet = alphabet - 1;
//       cout<<alphabet;
//     }
//     cout<<endl;
//   }
  
//   return 0;
// }

// // Pattern Problem 1 Numeric Hollow inverted half pyramid
// int main(){
//   int n;
//   cin>>n;
//   for(int row=0;row<n;row++){
//     for(int col=0;col<n-row;col++){
//       if(row==0){
//         cout<<col+1;
//       }
//       else if(col==0){
//         cout<<row+1;
//       }
//       else if(col==n-row-1){
//         cout<<n;
//       }
//       else{
//         cout<<" ";
//       }
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// // Problem Numeric pallindrome equilateral pyramid
// int main(){
//   int n;
//   cin>>n;
//   for(int row=0;row<n;row++){
//     for(int sp=0; sp<n-(row+1); sp++){
//       cout<<" ";
//     }
//     for(int col=0;col<row+1;col++){
//       cout<<col+1;
//     }
//     for(int pdm = row; pdm>0; pdm--){
//       cout<<pdm;
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// // Special Pattern
// int main(){
//   int n;
//   cin>>n;
//   for(int row=0;row<n;row++){
//     for(int col=0;col<2*n-row-2; col++){
//       cout<<"*";
//     }
//     for(int col=0;col<2*row+1;col++){
//       if(col%2==0){
//         cout<<row+1;
//       }
//       else {
//         cout<<"*";
//       }
//     }
//     for(int col=0;col<2*n-row-2; col++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// // Solid Haft Diamond
// int main(){
//   int n;
//   cin>>n;
//   for(int row=0; row<n; row++){
//     for(int col=0; col<row+1; col++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
//   for(int row=n; row<2*n-1; row++){
//     for(int col=0; col<2*n-row-1; col++){
//       cout<<"*";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// // Floyd's Triangle
// int main(){
//   int n;
//   cin>>n;
//   int i=0;
//   for(int row=0; row<n; row++){
//     for(int col=0; col<row+1; col++){
//       i++;
//       cout<<i<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }

// Butterfly Pattern
int main(){
  int n;
  cin>>n;
  for(int row=0; row<n; row++){
    for(int col=0; col<row+1; col++){
      cout<<"*";
    }
    for(int sp=0; sp<2*n-2*(row+1); sp++){
      cout<<" ";
    }
    for(int col=0; col<row+1; col++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int row=0; row<n; row++){
    for(int col=n-row; col>0; col--){
      cout<<"*";
    }
    for(int sp=0; sp<2*row; sp++){
      cout<<" ";
    }
    for(int col=n-row; col>0; col--){
      cout<<"*";
    }
    cout<<endl;
  }
  return 0;
}