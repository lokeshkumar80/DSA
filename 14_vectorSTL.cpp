#include <iostream>
#include <vector>

using namespace std;

void fun(int arr[], int n){
    cout<<"Array elements are : ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void print(vector<int> v) {
  cout << "Printing vector " << endl;
  int size = v.size();
  for (int i = 0; i < size; i++) {
    cout << v[i] << " ";
    // cout << v.at(i) << " ";
  }
  cout << endl;
}

void print2(vector<int> v) {
  cout << "Printing vector method 2" << endl;
  for(auto it:v){
	  cout<<it<<" ";
  }
  cout << endl;
}

int main() {

    // int arr[5] = {1, 2, 3, 4, 5};
    // int size = 5;
    // fun(arr, size);

    // int n;
    // cout<<"Enter the size of the array : ";
    // cin>>n;
    // int *arr = new int[n];// each element would be zero or garbage
    
    // // taking n elements input and inserting in the array
    // cout<<"Enter the elements of the array : "<<endl;
    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }
    // fun(arr, n);

  //  // in vector, dont tell size of vector.
  //  // just keep inserting, i will manage the allocations.
  //  vector<int> v; // array hi hai.

	vector<int>v;

	// v.push_back(10);
	// v.push_back(20);
	// v.push_back(30);
	// v.push_back(40);
	// print(v);

  // Method 2 for printing the vector
	// print2(v);

  
  // // pop
  // v.pop_back();
  // print(v);
  // v.pop_back();
  // print(v);

  // // To understand the size and capacity.
  // int i = 0;
  // while(i<8){
  //   int d;
  //   cin>>d;
  //   v.push_back(d);
  //   cout<<"Capacity : "<<v.capacity()<<" Size : "<<v.size()<<endl;
  //   i++;
  // }

  //    // insert
  //  int n;
  //  cout<<"Enter the no of input values you are given : ";
  //  cin >> n;
  //  cout<<"Now enter values : ";
  //  for (int i = 0; i < n; ++i) {
  //    int d;
  //    cin >> d;
  //    v.push_back(d);
  //  }
  //  print(v);

  // // This shows the dynamic behavior of vector
  //  for(int i=0; i<10; i++){
  //   v.push_back(80);
  //  }
  //  print(v);

  // // I want to clear the vector
  // v.clear();
  // v.push_back(50);
  //  print(v);


  // // vector initialization

  // vector<int>arr; // default with no data, 0 size
  // vector<int>arr2(5, -1); // init with n size with specific data // vector of size 5 with each val. of -1
  // // arr2.push_back(50);
  // // print(arr2);

  // vector<int>arr3 = {1,2,3,4,5};
  // // arr3.pop_back();
  // // print(arr3);

  // vector<int>arr4{1,2,3,4,5};
  // // print(arr4);

  // // how to copy vector
  // vector<int> arr5 = {1,2,3,4,5};
  // vector<int>arr6(arr5);
  // print(arr6);


 //  vector<char> v;
 //  v.push_back('a');
 //  v.push_back('b');
 // v.push_back('c');
 //  v.push_back('d');

  // cout << "Front element: " << v[0] << endl;
  // cout << "Front element: " << v.front() << endl;
  // cout << "End Element: " << v[v.size() - 1] << endl;
  // cout << "End Element: " << v.back() << endl;



}