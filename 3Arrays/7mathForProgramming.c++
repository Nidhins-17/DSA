// count prime numbers
// this will be a TLE

// #include <iostream>
// using namespace std;

// bool isPrime(int n)
// {
//     if(n<=1)
//         return false;
//     else
//     {
//         for(int i=2;i<n;i++)
//         {
//             if(n%i==0)
//             {
//                 return false;
//                 break;
//             }

//         }
//         return true;
//     }
// }

// int countPrime(int n)
// {
//     int count  = 0;
//     for(int i=0;i<n;i++)
//     {
//         if(isPrime(i))
//             count++;
//     }
//     return count;
// }

// int main()
// {
//     cout<<countPrime(18);
// }

// seive of erasthonas(optimised)
// mark all as prime and then mark the multiples as non-prime

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number :";
//     cin >> n;
//     int count = 0;
//     vector<bool> prime(n + 1, true);

//     prime[0] = prime[1] = false;

//     for (int i = 1; i < n; i++)
//     {
//         if (prime[i])
//         {
//             count++;
//             for (int j = 2 * i; j < n; j += i)
//             {
//                 prime[j] = false;
//             }
//         }
//     }
//     cout << count;
// }

// segmented seive

// gcd(greatest common divisor)
// gcd(a,b) * lcm(a,b) = a*b

// #include <iostream>
// using namespace std;

// int gcd(int a, int b)
// {
//     if (a == 0)
//         return b;
//     else if (b == 0)
//         return a;
//     while(a!=b)
//     {
//         if(a>b)
//         {
//             a = a-b;
//         }
//         else
//         {
//             b = b-a;
//         }
//     }
//     return a;
// }

// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<gcd(a,b);
// }

// modulo arithmetics

// fast exponentiation O(logb)
// (x ^ n) % m

#include <iostream>
using namespace std;
int main()
{
    int x, n, m;
    cin >> x >> n >> m;
    int res = 1;
    while (n > 0)
    {
        // if n odd
        if (n & 1)
            res = (1LL * res * (x) % m) % m; // typecasting to long long int
        x = (1LL * (x) % m * (x) % m) % m;
        n = n >> 1;
    }

    // fast exponent(power of n)
    //  while(n>0)
    //  {
    //      if(n&1)
    //          res = res * x;
    //      x = x*x;
    //      n = n>>1;
    //  }
    //  cout<<res;
}
