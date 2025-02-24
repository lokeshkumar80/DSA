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

// // We are calculating no of primes strictly less than n..
// #include<iostream>
// using namespace std ;

// bool isPrime(int n)
// {
//     if (n <= 1)
//         return false;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }

// int countPrimes(int n) {

//     int c = 0;
//     for (int i = 2; i < n; i++)
//     {
//         if (isPrime(i))
//             c++;
//     }
//     return c;
// }

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

// class Solution
// {
// public:
// #define M 1000000007
//     vector<bool> Sieve(long long int n)
//     {
//         // create a sieve array telling isPrime till 'n'
//         vector<bool> sieve(n + 1, true);
//         sieve[0] = sieve[1] = false;

//         /*for (long long int i = 2; i <= n; i++)*/
//         for (long long int i = 2; i * i <= n; i++) // Optimisation 2: (Outer loop):
//                                                    // if i becomes > sqrt(N), then the
//                                                    // inner loop does not work.
//         {
//             if (sieve[i] == true)
//             {
//                 // means, sieve[i] is Prime and mark its multiples
//                 //  as non-prime.
//                 /*long long long long int j = i * 2;*/
//                 long long int j = i * i; // Optimisation 1 (inner loop):
//                                          // first unmarked number would be i*i
//                                          // as, other have been marked by 2 to (i - 1).
//                 while (j <= n)
//                 {
//                     sieve[j] = false;
//                     j += i;
//                 }
//             }
//         }
//         return sieve;
//     }

//     vector<bool> segmentedSeive(long long int L, long long int R)
//     {
//         // Get me prime marking array.
//         // to be used to mark primes in segmented sieve.
//         vector<bool> sieve = Sieve(sqrt(R));
//         vector<long long int> basePrimes;
//         for (long long int i = 0; i < sieve.size(); i++)
//         {
//             if (sieve[i])
//                 basePrimes.push_back(i);
//         }

//         vector<bool> segSieve(R - L + 1, true);
//         if (L == 1)
//         {
//             segSieve[0] = false;
//         }

//         for (auto prime : basePrimes)
//         {
//             long long int first_mul = (L / prime) * prime;
//             first_mul = first_mul < L ? first_mul + prime : first_mul;
//             long long int j = max(first_mul, prime * prime);
//             while (j <= R)
//             {
//                 segSieve[j - L] = false;
//                 j += prime;
//             }
//         }
//         return segSieve;
//     }

//     long long primeProduct(long long L, long long R)
//     {
//         vector<bool> segSieve = segmentedSeive(L, R);
//         long long int ans = 1;
//         for (long long int i = 0; i < segSieve.size(); i++)
//         {
//             if (segSieve[i])
//             {
//                 long long int actualPrime = (L + i) % M;
//                 ans = (ans * actualPrime) % M;
//             }
//         }
//         return ans;
//     }
// };