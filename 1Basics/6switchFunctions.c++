// number of notes required for an amount of money

// #include <iostream>
// using namespace std;
// int main()
// {
//     int amount;
//     cin >> amount;
//     int rs100, rs50, rs20, rs10, rs1;
//     switch (1)
//     {
//     case 1:
//         rs100 = amount / 100;
//         cout << "rs100 :" << rs100 << endl;
//         amount %= 100;

//     case 2:
//         rs50 = amount / 50;
//         cout << "rs50 :" << rs50 << endl;
//         amount %= 50;
//     case 3:
//         rs20 = amount / 20;
//         cout << "rs20 :" << rs20 << endl;
//         amount %= 20;
//     case 4:
//         rs10 = amount / 10;
//         cout << "rs10 :" << rs10 << endl;
//         amount %= 10;
//     case 5:
//         rs1 = amount / 1;
//         cout << "rs1 :" << rs1 << endl;
//         amount %= 1;
//     }
// }

// functions

// power of two numbers using Function

// #include <iostream>
// using namespace std;

// void power(int a,int b)
// {
//     int res = 1;
//     for(int i = 1;i<=b;i++)
//     {
//         res = a*res;
//     }
//     cout<<res<<endl;
// }

// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     power(a,b);
// }

// odd or even check using funcions

// #include <iostream>
// using namespace std;

// int evenOrOdd(int n)
// {
//     if(n&1)
//         return 0;
//     return 1;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int result = evenOrOdd(n);
//     if(result==1)
//         cout<<"even"<<endl;
//     else
//         cout<<"odd"<<endl;
// }

// nCr

// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     int fact = 1;
//     for(int i=1;i<=n;i++)
//     {
//         fact = fact*i;
//     }
//     return fact;
// }

// int nCr(int n,int r)
// {
//     int combination = factorial(n)/((factorial(r))*(factorial(n-r)));
//     cout<<"the combination is : "<<combination<<endl;
// }

// int main()
// {
//     int n,r;
//     cin>>n>>r;
//     nCr(n,r);
// }

// arithmetic progression

// #include <iostream>
// using namespace std;

// int ap(int n)
// {
//     return 3*n+7;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int nth_term = ap(n);
//     cout<<"the nth term is as follows :"<<nth_term<<endl;
// }

// count of number of set bits

// #include <iostream>
// using namespace std;

int setBits(int a, int b)
{
    int count1 = 0;
    int count2 = 0;
    while (a != 0 || b != 0)
    {
        count1 = count1 + (a & 1);
        a = a >> 1;
        count2 = count2 + (b & 1);
        b = b >> 1;
    }

    cout << "The set count of a is : " << count1 << endl;
    cout << "The set count of b is : " << count2 << endl;
}

int main()
// {
//     int a, b;
//     cin >> a >> b;
//     setBits(a, b);
// }


// fibonacci series nthterm

// #include <iostream>
// using namespace std;

// int fibonacci(int n)
// {
//     int a = 0;
//     int b = 1;
//     int sum = 0;
//     if(n==1 || n == 2)
//         return n-1;
//     else
//     {
//         for(int i=3;i<=n;i++)
//         {
//             sum = a+b;
//             a = b;
//             b = sum;
//         }
//         return sum;
//     }
// }

// void fibonacci(int n)
// {
//     int a = 0;
//     int b = 1;
//     cout<<a<<" "<<b;
//     for(int i=0;i<n-2;i++) {
//         int sum = a+b;
//         cout<<" "<<sum<<" ";
//         a = b;
//         b = sum;
//     }
// }


// int main()
// {
//     int n;
//     cin>>n;
//     int value = fibonacci(n);
//     cout<<"The nth term of the fibonacci series is : ";
//     cout<<value<<endl;
// }

