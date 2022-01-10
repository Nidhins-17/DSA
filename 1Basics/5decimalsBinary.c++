// decimal to binary number conversion

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 0;
//     int ans = 0;
//     while (n > 0)
//     {
//         int bit = n & 1;
//         ans = bit * pow(10, i) + ans;
//         n = n >> 1;
//         i++;
//     }
//     cout<<ans<<endl;
// }

// alternate method(division by 2)

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int binaryNumber[32];
//     int i = 0;
//     while(n>0)
//     {
//         binaryNumber[i] = n%2;
//         n = n/2;
//         i++;
//     }
//     for(int j = i-1;j>=0;j--)
//     {
//         cout<<binaryNumber[j];
//     }
// }

// binary to decimal number conversion

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int ans = 0;
//     int i = 0;
//     while(n != 0)
//     {
//         int digit = n % 10;
//         if(digit == 1)
//             ans = ans + pow(2,i);

//         n = n / 10;
//         i++;
//     }
//     cout<<ans<<endl;
// }

// reverse an integer and return 0 if it is not in the range of signed integer

// #include <iostream>
// #include <limits.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int reversedNumber = 0;

//     while(n!=0)
//     {
//         int rem = n % 10;
//         if((reversedNumber > INT_MAX) && (reversedNumber < INT_MIN))
//         {
//             return 0;
//         }
//         reversedNumber = reversedNumber*10 + rem;
//         n/=10;
//     }
//     cout<<reversedNumber<<endl;
// }

// complement base 10

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int m = n;

//     int mask = 0;
//     while(m!=0)
//     {
//         mask = (mask << 1) | 1;
//         m = m>>1;
//     }
//     cout<<(n^mask)<<endl;
// }

// power of two

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int count = 0;
//     for (int i = 0; i <= 30; i++)
//     {
//         if ((pow(2, i)) == n)
//         {
//             cout << "power of two" << endl;
//             count = 1;
//         }
//     }
//     if(count == 0)
//         cout<<"not a power of two"<<endl;
// }
