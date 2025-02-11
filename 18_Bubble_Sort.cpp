#include<iostream>
#include<bits/stdc++.h>
using namespace std ;

    // in every iteration  if condition is  if(arr[j]<arr[j+1]){swap(arr[j],arr[j+1]);}
    // 1st largest gets its position and in the end array will be sorted in increasing order...
    // in every iteration of outer loop one element gets its position 
    // and if condition is if(arr[j]<arr[j+1]){swap(arr[j],arr[j+1]);} 1st smallest element will gets its position and
    // in the end array will be sorted in decreasing order...

                
void BubbleSort(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void printArray(vector<int> &arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int>arr = {5, 3, 6, 7, 8};
    BubbleSort(arr);
    printArray(arr);
     return 0;
}