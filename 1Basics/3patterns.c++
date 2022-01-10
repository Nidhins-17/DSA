// j =1 2 3
//i=1 * * *
//i=2 * * *
//i=3 * * *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=0;
//     while(i<n)
//     {
//         int j = 0;
//         while(j<n)
//         {
//             cout<<"* ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// 111
// 222
// 333

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i;
//     for(i = 1;i<=n;i++)
//     {
//         for(int j = 1;j<=n;j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

// 123
// 123
// 123

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++)
//         {
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i = 1;
//     while(i<=n)
//     {
//         int j = 1;
//         while(j<=n)
//         {
//             cout<<n-j+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// 123
// 456
// 789

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int i = 1;
//     int count = 1;
//     while (i <= n)
//     {
//         int j = 1;
//         while (j <= n)
//         {
//             cout << count;
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
// }

// triangular * pattern

// #include <iostream>
// using namespace std;
// int main()
// {

//     int n;
//     cin>>n;
//     int row = 1;
//     while(row <= n)
//     {
//         int col = 1;
//         while(col <= row)
//         {
//             cout<<"*";
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// 1
// 22
// 333

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int row = 1;
//     while(row <= n)
//     {
//         int col = 1;
//         while(col<= row)
//         {
//             cout<<row;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int row = 1;
//     int count = 1;
//     while(row<=n)
//     {
//         int col = 1;
//         while(col <= row)
//         {
//             cout<<count<<" ";
//             count++;
//             col++;
//         }
//         cout<<endl;
//         row++;
//     }
// }

// 1 this was cool
// 23
// 345
// 4567
// 56789

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
// int row = 1;
// while (row <= n)
// {
//     int count = row;
//     int col = 1;
//     while (col <= row)
//     {
//         cout << count;
//         count++;
//         col++;
//     }
//     cout << endl;
//     row++;
// }

// for(int row=1;row<=n;row++)
// {
//     for(int col=1;col<=row;col++)
//     {
//         cout<<row+col-1;//without the use of count
//     }
//     cout<<endl;
// }
// }

// 1
// 21
// 321
// 4321
// 54321

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int r = 1; r <= n; r++)
//     {
//         // int count = r;
//         for(int c = 1; c <= r; c++)
//         {
//             // cout<<count;
//             // count--;

//             cout<<r-c+1;//without the use of count
//         }
//         cout<<endl;
//     }
// }

// AAA
// BBB
// CCC

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for(int r = 1; r <= n; r++)
//     {
//         for(int c = 1; c <= n; c++)
//         {
//             char ch = 'A'+r-1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }

// ABC
// ABC
// ABC

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for(int r = 1; r <= n; r++)
//     {
//         for(int c = 1; c <= n; c++)
//         {
//             char ch = 'A'+c-1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }

// ABC
// BCD
// CDE

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for(int r = 1;r<=n;r++)
//     {
//         for(int c=1;c<=n;c++)
//         {
//             char ch = 'A'+r+c-2;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }

// A
// BB
// CCC

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for(int r = 1;r<=n;r++)
//     {
//         for(int c = 1;c<=r;c++)
//         {
//             char ch = 'A'+r-1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }

// D we use a start character
// C D
// B C D
// A B C D

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int r = 1;r<=n;r++)
//     {
//         char ch = 'A'+n-r;
//         for(int c = 1;c<=r;c++)
//         {
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }
// }

// ABC easy way
// BCD
// CDE

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int r = 1;r<=n;r++)
//     {
//         char ch = 'A'+r-1;
//         for(int c = 1;c<=n;c++)
//         {
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }
// }

//    *
//   **
//  ***
// ****

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int r = 1;r<=n;r++)
//     {
//         for(int space = n-r;space!=0;space--)
//         {
//             cout<<" ";
//         }
//         for(int c=1;c<=r;c++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// ***
// **
// *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     for (int r = 1; r <= n; r++)
//     {
//         for (int c = 1; c <= n-r+1; c++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// ***
//  **
//   *

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int r=1;r<=n;r++)
//     {
//         // spaces
//         for(int space = n-r+1;space<n;space++)
//         {
//             cout<<" ";
//         }
//         // stars pattern
//         for(int c = r;c<=n;c++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//   1
//  121
// 12321

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int r=1;r<=n;r++)
//     {
//         // spaces
//         for(int space = 1;space<=n-r;space++)
//         {
//             cout<<" ";
//         }
//         // first pattern
//         for(int c1=1;c1<=r;c1++)
//         {
//             cout<<c1;
//         }
//         // second pattern
//         for(int c2=1;c2<r;c2++)
//         {
//             cout<<r-c2;
//         }
//         cout<<endl;
//     }
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int r=1;r<=n;r++)
    {
        // spaces
        for(int space = 1;space<=n-r;space++)
        {
            cout<<" ";
        }
        // first star pattern
        for(int c1=1;c1<=r;c1++)
        {
            cout<<"*";
        }
        // second start pattern
        for(int c2=1;c2<r;c2++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}