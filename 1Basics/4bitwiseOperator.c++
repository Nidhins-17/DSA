// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 4;
//     int b = 6;
//     cout<<(a&b)<<endl;
//     cout<<(a|b)<<endl;
//     cout<<(~a)<<endl;
//     cout<<(~b)<<endl;
//     cout<<(a^b)<<endl;
//     cout<<(17>>1)<<endl;
//     cout<<(19>>2)<<endl;
//     cout<<(23<<4)<<endl;
//     cout<<(21<<2)<<endl;

//     int a = 1;
//     int b =2;

//     if(a-- >0 || ++b >2)
//     {
//         cout<<"if condition has or then it sees the first and comes in ";
//     }
//     else
//         cout<<"dc";
//     cout<<a<<b<<endl;
// }

// for loop

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i = 1;
//     for (;;)
//     {
//         if (i <= n)
//             cout <<i<<endl;
//         else
//             break;
//         i++;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int a = 1,b=3;a<=5 , b<=4;a++,b++)
//     {
//         cout<<"a :"<<a<<" b :"<<b<<endl;
//     }
// }

// sum of n numbers from one to n;

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int sum = 0;
//     for(int i=1;i<=n;i++)
//     {
//         sum = sum + i;
//     }
//     cout<<"sum of n numbers is :"<<sum<<endl;
// }

// fibonacci series
// 0 1 1 2 3 5 8 13 21 34 ...

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;

//     int a = 0;

//     int b = 1;
//     cout<<a<<" "<<b<<" ";
//     for(int i=1;i<=n-2;i++)
//     {
//         int c = a+b;
//         cout<<c<<" ";
//         a = b;
//         b = c;
//     }
// }

// prime check

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int isprime = 1;
//     for (int i = 2; i < n / 2; i++)
//     {
//         if (n % i == 0)
//         {
//             isprime = 0;
//             break;
//         }
//     }
//     if(isprime)
//         cout<<"Prime!" << endl;
//     else
//         cout<<"Not prime!" << endl;
// }

//continue keyword

// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int i = 0; i < 5;i++)
//     {
//         cout<<"HI"<<endl;
//         cout<<"Hey"<<endl;
//         continue;//the statement below would be unreachable
//         cout<<"reply!"<<endl;
//     }
// }

// question

// #include <iostream>
// using namespace std;
// int main()
// {
//     for(int  i = 0; i < 15; i+=2)
//     {
//         cout<<i<<endl;

//         if(i&1)
//             continue;
//         i++;
//     }
// }

// find the difference of product of digits and sum of digits of a number

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     //n = 345
//     // product and sum

//     int product = 1;
//     int sum = 0;
//     while (n > 0)
//     {
//         int rem = n % 10;
//         product = product * rem;
//         sum = sum + rem;
//         n /= 10;
//     }
//     // difference
//     cout << "The difference is :" << product - sum << endl;
// }


// count the number of set (1) counts in a number

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int count = 0;
    while(n > 0)
    {
        if(n&1)
            count++;
        n=n>>1;
    }
    cout<<"The set count is : "<<count<<endl;
}
