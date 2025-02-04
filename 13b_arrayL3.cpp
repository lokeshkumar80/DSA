#include <iostream>
#include<limits.h>
#include<vector>
using namespace std;

// row wise access of 2D array.
void printArray(int arr[][4], int row, int col) {
  for(int i=0; i<row; i++ ) {
    for(int j=0; j<col; j++) {

      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

// column wise access of 2D array
void colWisePrint(int arr[][4], int row, int col ){
  for(int i=0; i<col; i++) {
    for(int j=0; j<row; j++) {
      cout << arr[j][i] << " ";
    }
    cout << endl;
  }
}

bool findTarget(int arr[][4], int row, int col, int target ) {
  
  for(int i=0; i<row; i++) {
    for(int j=0; j<col; j++) {
      if(arr[i][j] == target) {
        //if found, return true
        return true;
      }
    }
  }
  //iss line pr tabhi aa skte ho,
  //jab saare k saare elements check
  //ho chuke honge and target nahi mila hoga
  //return krdo false;
  return false;
}

int findMax(int arr[][4], int row, int col) {
  int maxAns = INT_MIN;

  for(int i=0; i<row; i++) {
    for(int j=0; j<col; j++) {
      
      if(arr[i][j] > maxAns ) {
        maxAns = arr[i][j];
      }
      
    }
  }
  return maxAns;
}

int findMin(int arr[][4], int row, int col ){
  int minAns = INT_MAX;
  for(int i=0; i<row; i++) {
    for(int j=0; j<col; j++) {

      if(arr[i][j] < minAns) {
        minAns = arr[i][j];
      }
      
    }
  }
  return minAns;
}

void rowWiseSum(int arr[][4], int row, int col ){
  for(int i=0; i<row; i++) {
    
    int sum = 0;
    
    for(int j=0;j<col;j++) {
      
      sum = sum + arr[i][j];
      
    }
    
    cout << sum << endl;
  }
}

void diagonalSum(int arr[][4], int row, int col ){
  int sum = 0;
  for(int i=0; i<row; i++) {     
      sum = sum + arr[i][i];    
  }
    cout << sum << endl;
}

void transpose(int arr[][4], int row, int col ) {
  
  for(int i=0; i<row; i++) {
    
    for(int j=i; j<col; j++) {
      
      swap(arr[i][j], arr[j][i]);
      
    }
  }
}

int main() {


  //create a 2D array 
  //int arr[3][3];


  //iniitialse
  // int arr[3][4] = {
  // {1,2,3,4},
  // {5,6,7,8},
  // {9,10,1,11}
  // };

  // int brr[] = {1,2,3,4};

  // int crr[][4] = {
  // {1,2,3,4},
  // {5,6,7,8},
  // {9,10,1,11}
  // };

// // Initialisations given below shows error , bcz for 2d initialisation no of col. is the mandatory to be given.
// // That is atleast column size should be given.
  //// int crr[][] = {
  //// {1,2,3,4},
  //// {5,6,7,8},
  //// {9,10,1,11}
  //// }; // Shows Error

  //// int crr[3][] = {
  //// {1,2,3,4},
  //// {5,6,7,8},
  //// {9,10,1,11}
  //// }; // Shows Error

  
  // int drr[][4] = {
  // {1,2,3,4},
  // {5,6,7,8},
  // {9,10,1,11}
  // };

  // int arr[3][4] = {
  //        {1,2,3,4},
  //        {5,6,7,8},
  //        {9,10,1,11}
  //        };

  // int row = 3;
  // int col = 4;
  // printArray(arr, row, col);
  // colWisePrint(arr,  row,  col);

  //input
  // int arr[3][3];
  // int row = 3;
  // int col = 3;

  // for(int i=0; i<row; i++) {
  //  for(int j=0; j<col; j++) {
  //    cout << "Enter the input for row index: " << i << " column index: " << j << endl;
  //    cin >> arr[i][j] ;
  //  }
  // }

  // int arr[4][4] = {
  //        {1,2,3,4},
  //        {5,6,70,8},
  //        {9,10,1,11},
  //        {12,24,46,89}
  //        };
  // int row = 4;
  // int col = 4;
  
  // int target = 11;
  // cout << "target Found or Not: " << findTarget(arr, row, col, target) << endl;

  // int targetb = 110;
  // cout << "targetb Found or Not: " << findTarget(arr, row, col, targetb) << endl;

  // cout << "Printing the max No. : " << findMax(arr, row, col ) << endl;
  // cout << "Printing the min No. : " << findMin(arr, row, col ) << endl;

  // rowWiseSum(arr, row,  col);
  // diagonalSum(arr, row,  col);

  // cout<< endl << "Printing before transpose" << endl;
  // printArray(arr, row, col);

  // cout<< endl  << "Doing transpose" << endl;
  // transpose(arr, row,  col);

  // cout<< endl  << "Printing after transpose" << endl;
  // printArray(arr, row, col);

  



  //int arr[5];

 // // Initialization of vector ...
  
  // vector<int> arr;
  // vector<int> arr(5);
  // vector<int> arr(5,101);


  //insert
  // arr.push_back(4);
  // arr.push_back(8);
  // arr.push_back(12);
  // arr.push_back(11);
  // arr.push_back(4);

  // cout << arr.size() << endl;
  // cout << arr.empty() << endl;
  // cout << "Size of vector: " << v.size();

  // cout << endl << "Printing vector" << endl;
  // for(int i=0; i<v.size(); i++) {
  //  cout << v[i] <<" ";
  // }cout << endl;

  // 2D Array
  // that is 2D vector representation
  vector< vector<int> > arr(5, vector<int>(10,-1));
  //row size -> arr.size() --> that is tolat no of rows 
  //column size --> arr[i].size()-->that is total no of elements in ith row-->that is no of columns
  for(int i=0; i<arr.size(); i++) {
   for(int j=0; j<arr[i].size(); j++) {
     cout << arr[i][j] << " ";
   }
   cout << endl;
  }

  //Jagged Array  - HW

  vector< vector<int> > brr;


  vector<int> vec1(10,0);
  vector<int> vec2(5,1);
  vector<int> vec3(7,0);
  vector<int> vec4(8,1);
  vector<int> vec5(20,0);

  brr.push_back(vec1);
  brr.push_back(vec2);
  brr.push_back(vec3);
  brr.push_back(vec4);
  brr.push_back(vec5);

  // iska mtlb jroori nhi h hr row ke no of columns same ho( means hr row m no of elements same ho)

  for(int i=0; i<brr.size(); i++) {
    for(int j=0; j<brr[i].size(); j++) {
      cout << brr[i][j] << " ";
    }
    cout << endl;
  }
  
  
  return 0;
}