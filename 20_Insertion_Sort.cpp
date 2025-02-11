// class Solution {
//     public:
//       // Please change the array in-place
//       void insertionSort(vector<int>& arr) {
//               // move elements of arr[0....i-1] that are greater than key to one position ahead 
//               // of their current posiiton
//               // that is first element ko sort maankr 2nd ko iske pehle ke according kro and then 3rd ko iske pehle
//               // saare elements ke according sort kro and so on..
//           int n = arr.size();
//           for(int i=1; i<n; i++){
//               int j=i-1;
//               int key = arr[i];
//               int index = i;
//               while(j>=0 && arr[j]>key){
//                   swap(arr[j], arr[index]);
//                   index = j;
//                   j--;
//               }
//           }
//       }
//   };