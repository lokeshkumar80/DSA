// class Solution {
//     public:
//       // Function to perform selection sort on the given array.
//       void selectionSort(vector<int> &arr) {
//           // this is selection sort means first select element then put ...
//           // first select the min and place it at i=0 and 
//           //then select the min in i=1 to i=n-1 and place it at i=1 and so on.. ...
//           int n = arr.size();
//           int min = INT_MAX ;
//           int index = -1;
//           for(int i=0; i<n-1; i++){
//               for(int j=i; j<n; j++){
//                   if(arr[j]<min){
//                       min = arr[j];
//                       index = j;
//                   }
//               }
//               swap(arr[i], arr[index]);
//               min = INT_MAX;
//           }
//       }
//   };