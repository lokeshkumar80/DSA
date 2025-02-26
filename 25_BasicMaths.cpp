// // We are calculating no of primes strictly less than n..
// #include<iostream>
// using namespace std ;

// // M1
// class Solution
// {
// public:
//     bool isPrime(int n)
//     {
//         if (n <= 1)
//             return false;
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//                 return false;
//         }
//         return true;
//     }

//     int countPrimes(int n)
//     {
//         int c = 0;
//         for (int i = 2; i < n; ++i)
//         {
//             if (isPrime(i))
//                 ++c;
//         }
//         return c;
//     }
// };

// // M2
// class Solution
// {
// public:
//     bool isPrime(int n)
//     {
//         if (n <= 1)
//             return false;
//         for (int i = 2; i * i <= n; i++)
//         {
//             if (n % i == 0)
//                 return false;
//         }
//         return true;
//     }

//     int countPrimes(int n)
//     {
//         int c = 0;
//         for (int i = 2; i < n; ++i)
//         {
//             if (isPrime(i))
//                 ++c;
//         }
//         return c;
//     }
// };

// // M3 Sieve of Eratosthenes Algorithm
// class Solution
// {
// public:
//     int countPrimes(int n)
//     {
//         vector<bool> prime(n + 1, true);
//         prime[0] = prime[1] = false;
//         int ans = 0;

//         for (int i = 2; i < n; i++)
//         {
//             if (prime[i])
//             {
//                 ++ans;

//                 int j = 2 * i;
//                 while (j < n)
//                 {
//                     prime[j] = false;
//                     j += i;
//                 }
//             }
//         }
//         return ans;
//     }
// };

// int main()
// {
//     int n;
//     cout<<"Enter Value of n"<<endl;
//     cin>>n;
//     int ans = countPrimes(n);
//     cout<<"No of primes strictly less than "<<n<<" is "<<ans;
//     return 0;
// }

// int gcd(int A, int B)
// {
//     if (A == 0)
//         return B;
//     if (B == 0)
//         return A;

//     while (A > 0 && B > 0)
//     {
//         if (A > B)
//             A = A - B;
//         else
//             B = B - A;
//     }
//     return A == 0 ? B : A;
// }

// #include <iostream>
// using namespace std;
// long long int fastExponentiation(long long int x, long long int n, long long int M)
// {
//     long long int ans = 1;

//     while (n > 0)
//     {
//         if (n & 1)
//         {
//             // n is odd.
//             ans = (ans * x) % M;
//         }
//         x = (x * x) % M;
//         n >>= 1;
//     }
//     return ans % M;
// }

// int slowExponentiation(int a, int b)
// {
//     int ans = 1;
//     while (b--)
//     {
//         ans *= a;
//     }
//     return ans;
// }

// int main()
// {
//    long long int a = 5;
//    long long int b = 4;
//    long long int M = 7;

//     cout << slowExponentiation(a, b) << endl;
//     cout << fastExponentiation(a, b, M) << endl;
//     return 0;
// }
