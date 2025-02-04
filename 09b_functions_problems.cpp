#include<iostream>
using namespace std;

// Problem : maximum of three numbers
// Type 1
void printMaximum1(int num1, int num2, int num3) {
	if(num1 >= num2 && num1 >= num3) {
		cout << "Maximum is: " << num1 << endl;
	}
	else if(num2 >= num1 && num2 >= num3) {
		cout << "Maximum is: " << num2 << endl;
	}
	else {
		cout << "Maximum is: " << num3 << endl;
	}
	
}
// Type 2
int printMaximum2(int n1, int n2, int n3) {
	int ans1 = max(n1,n2);
	int finalAns = max(ans1, n3);
	// cout << "final Ans is: " << finalAns << endl;
	return finalAns;
}

// Problem : Counting from 1 to n
void printCounting(int n) {
	for(int i=1; i<=n; i++) {
		cout << i << endl;
	}
}

// Problem : Check even or odd
void checkEvenOdd(int num) {
	if(num % 2 == 0) {
		cout << "Even Number" << endl;
	}
	else {
		cout << "Odd Number" << endl;
	}
}

// Problem : Sum of 1 to n
void findSumUptoN(int n) {
	int sum = 0;

	for(int i=1; i<=n; i++) {
		sum = sum + i;
	}

	cout << "Final Sum: " << sum << endl;
	
}

// Problem : Sum of even numbers upto n
void findSumEvenUptoN(int n) {
	int sum = 0;
	// for(int i=1; i<=n; i++) {
	// 	if(i%2 ==0) {
	// 		sum = sum + i;
	// 	}	
	// }
    for(int i=0; i<=n; i=i+2){
        sum = sum + i;
    }
	cout << "Final Sum: " << sum << endl;	
}

// Problem
//return true -> if N is a prime no.
//return false -> if N is not a prime no.

bool checkPrime(int n) {
// This logic is not for input 1 so design for 1 separately
    if(n == 1){
        return false;
    }
	for(int i=2; i<n; i++) {
		if(n%i == 0) {
			//remainder = 0 -> perfectly divisible
			//not a prime numbner
			return false;
		}
	}

	//yaha pr main keh skta hu
	//k [ 2,3,4,5 ------ n-1 ], koi bhi N ko perfectly divide 
	//nahi kar paya hoga
	//it means, N is a prime no.

	return true;	
}

int main(){
    printMaximum1(3, 30, 100);
	int maximum = printMaximum2(3, 30, 100);
	cout << "Maximum is: " << maximum << endl;
	printCounting(10);
	checkEvenOdd(110);
	checkEvenOdd(111);
    findSumUptoN(10);
    findSumEvenUptoN(10);

    bool prime = checkPrime(7);
	if(prime) {
		cout << "its a prime number" << endl;
	}
	else {
		cout << "its not a prime number" << endl;
	}
    return 0;
}

