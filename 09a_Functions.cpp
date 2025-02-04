#include<iostream>
using namespace std ;

// Function Definition
void printName(string name){
     for(int i=0; i<5; i++){
          cout<<name<<endl;
     }
}

// Function Declaration
void printline();

// Using return void in type function
void messagePrint() {
	cout << "Msg 1" << endl;
	return;
	cout << "Msg 2" << endl;
}

// write a function to print the sum
void printSum1(int a, int b, int c) {
	int answer = a + b + c;
	cout << "Sum is: " << answer << endl;
}

// write a function to return the sum
int printSum2(int a, int b, int c) {
	int ans = a + b + c;
	return ans;
}

int main(){
     // Function Call
     printName("Lokesh");
     printline();
     messagePrint();
     printSum1(2, 3, 4);
     int answer = printSum2(3, 4, 6);
     cout<<"Sum is: "<< answer <<endl;
     return 0;
}

void printline(){
     for(int i=0; i<10; i++){
          cout<<"How are you "<<endl;
     }
}