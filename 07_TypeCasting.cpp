#include<iostream>
using namespace std ;

int main()
{
    // Implicit casting 
    // 1. int to float conversion
    int num1 = 10;
    float num2 = 5.5;
    float result = num1+num2; // implicit conversion of num1 from int to float
    cout<<result<<endl;

    // 2. char to int
    char ch = 'A';
    int a = ch + 1; // implicit conversion from char to int
    // char a3 = ch + 1;
    // // a3 = 65 + 1
    // // a3 = 66
    // cout<<a3<<endl;
    cout<<a<<endl;

    // 3. int to char
    int a1 = 97;
    char ch1 = a1; // implicit conversion from int to char
    cout<<ch1<<endl;

    // Explicit Casting
    // 1. double to int
    double pi = 3.14159365;
    int intPi = (int)pi; // Explicit conversion from double to int
    cout<<intPi<<endl;

    // 2. float to char
    float floatingNumber = 65.37;
    char ch2 = (char)floatingNumber; // Explicit conversion from float to char
    cout<<ch2<<endl;

    // 3. int to float
    int a2 = 10;
    int b = 3;
    float c = a2/(float)b ; // explicit conversion from int to float
    cout<<c<<endl;

     return 0;
}