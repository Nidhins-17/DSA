// #include <iostream>
// using namespace std;

// int factorial(int n)
// {
//     if(n==0)
//         return 1;
//     else
//         return n*factorial(n-1);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<factorial(n);
// }

// #include <iostream>
// using namespace std;

// int power(int a,int b)
// {
//     if(b==0)
//         return 1;
//     else
//         return a*power(a,b-1);
// }

// int main()
// {
//     int a,b;
//     cin>>a>>b;
//     cout<<power(a,b);
// }

// src and dest

// #include <iostream>
// using namespace std;

// void reachHome(int src,int dest)
// {
//     if(src == dest)
//     {
//         cout<<"Reached Home"<<endl;
//         return;
//     }
//     src++;
//     reachHome(src,dest);
// }

// int main()
// {
//     int src = 1;
//     int dest = 10;
//     reachHome(src,dest);
// }

// counting

// #include <iostream>
// using namespace std;

// void printingCounting(int n)
// {
//     if(n==0)
//         return;
    
//     //head recursion 
//     printingCounting(n-1);
//     cout<<n<<endl;

//     //tail recursion
//     cout<<n<<endl;
//     printingCounting(n-1);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     printingCounting(n);
// }

// fibonacci series(nth term)

// #include <iostream>
// using namespace std;

// int fib(int n)
// {
//     if(n==1||n==2)
//         return n-1;
//     else
//         return fib(n-1)+fib(n-2);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fib(n)<<endl;
// }

// climb stairs(can climb 1 or 2 stairs at a time , determine the number of ways that it can reach nth stair)

// #include <iostream>
// using namespace std;

// int climbStair(int n)
// {
//     if(n<0)
//         return 0;
//     else if(n==0)
//         return 1;
//     else
//     {
//         return climbStair(n-1)+climbStair(n-2);
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     cout<<climbStair(n)<<endl;
// }


// say digits

#include <iostream>
using namespace std;

void sayDigits(int n,string arr[])
{
    // base case
    if(n==0)
        return;
    
    // processing
    int digit = n%10;
    n = n/10;

    // recursive call
    sayDigits(n,arr);
    cout<<arr[digit]<<" ";
}

int main()
{
    int n;
    cin>>n;

    string arr[10]={"zero", "one", "two", "three", "four", "five","six","seven","eight","nine"};

    sayDigits(n,arr);
}

