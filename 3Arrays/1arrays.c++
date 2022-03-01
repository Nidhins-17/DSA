// #include <iostream>
// using namespace std;
// int main()
// {
//     // int arr[10]={0};//initialises every element to 0(and works only in this case)
//     int a[3]={1,2,3};
//     for(int i=2;i>=0;i--)
//     {
//         cout<<a[i]<<" ";
//     }
// }

// maximum and minimum of an array

// #include <iostream>
// #include <limits.h>
// using namespace std;

// void read(int a[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
// }

// void max(int a[],int n)
// {
//     int maximum = INT_MIN;
//     for(int i=0;i<n;i++)
//     {
//         // if(max <= a[i])
//         //     max = a[i];
//         maximum = max(maximum,a[i]);//inbuilt funcion is also available for(int i=)
//     }
//     cout<<"max :"<<maximum<<endl;
// }
// void min(int a[],int n)
// {
//     int min = INT_MAX;
//     for(int i=0;i<n;i++)
//     {
//         if(min >= a[i])
//             min = a[i];
//     }
//     cout<<"min :"<<min<<endl;
// }

// int main()
// {
//     int n;
//     cout<<"Enter the size of the array :";
//     cin>>n;
//     int a[100];//putting a variable in the array is not a good practice
//     read(a,n);
//     max(a,n);
//     min(a,n);
// }

// in pass by value in functions we create a copy of the variable but while passing an array into a function we pass the base address of the array variable

// #include <iostream>
// using namespace std;

// void update(int a[],int n)
// {
//     a[0] = 99;
// }

// int main()
// {

//     int a[10] = {1,2,3,4,5};
//     // before update
//     for(int i = 0; i < 5; i++)
//         cout<<a[i]<<" ";
//     cout<<endl;
//     update(a,5);
//     // after update
//     for(int i = 0; i < 5; i++)
//         cout<<a[i]<<" ";
// }

// linear search

// #include <iostream>
// using namespace std;

// bool search(int a[], int size, int key)
// {
//     for(int i = 0; i < size; i++)
//     {
//         if(a[i]==key)
//             return 1;
//     }
//     return 0;
// }

// int main()
// {
//     int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     cout << "Enter the element to search :";
//     int key;
//     cin >> key;

//     bool found = search(a, 10, key);
//     if(found)
//         cout<<"key is found"<<endl;
//     else
//         cout<<"key is not found"<<endl;
// }

// reverse an array;

// #include <iostream>
// using namespace std;

// void swap(int &a,int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// void reverse(int a[],int n)
// {
//     int start = 0;
//     int end = n-1;

//     while(start <= end)
//     {
//         swap(a[start],a[end]);
//         start++;
//         end--;
//     }
// }

// int main()
// {
//     int a[5]={1,2,3,4,5};
//     reverse(a,5);
//     for(int i = 0; i < 5; i++)
//         cout<<a[i]<<endl;
// }

// swap alternates

// #include <iostream>
// using namespace std;

// void swapAlternate(int a[],int n)
// {
//     int start = 0;
//     int end = 1;
//     while(end<n)
//     {
//         swap(a[start],a[end]);
//         start+=2;
//         end+=2;
//     }
// }

// int main()
// {
//     int a[6] = {1, 2, 3, 4, 5,6};
//     swapAlternate(a,6);
//     for(int i = 0; i < 6; i++)
//         cout<<a[i]<<endl;
// }

// find unique when all others are occuring twice and there is one unique element

// #include <iostream>
// using namespace std;

// void findUnique(int a[],int n)
// {
//     int ans = 0;
//     for(int i = 0; i < n; i++)
//     {
//         ans = ans ^ a[i];
//     }
//     cout<<ans<<endl;
// }

// int main()
// {
//     int a[]={1,2,2,3,1,5,5};
//     int n = sizeof(a)/sizeof(a[0]);
//     findUnique(a,n);
// }

// find distinct

// #include <iostream>
// using namespace std;

// void printDistinct(int a[],int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         int j;
//         for(j = 0; j < n; j++)
//         {
//             if(a[i]==a[j])
//                 break;
//         }
//         if(i == j)
//             cout<<a[i]<<" ";
//     }
// }

// int main()
// {
//     int a[]={1,2,2,3,3,3,4,5,5};
//     int n = sizeof(a)/sizeof(a[0]);
//     printDistinct(a,n);
// }

// find unique in general context

// #include <iostream>
// using namespace std;

// void findUnique(int a[],int n)
// {
//     for(int i = 0; i < n; i++)
//     {
//         int c = 0;
//         for(int j = 0; j <i;j++)
//         {
//             if(a[i]==a[j])
//             {
//                 c++;
//             }
//         }
//         for(int k=i+1; k < n; k++)
//         {
//             if(a[i]==a[k])
//                 c++;
//         }
//         if(c==0)
//             cout<<a[i]<<endl;
//     }
// }

// int main()
// {
//     int a[]={1,2,3,2,1,2,5,5};
//     int n = sizeof(a)/sizeof(a[0]);
//     findUnique(a,n);
// }

// find duplicate one element is occuring twice

// #include <iostream>
// using namespace std;

// findDuplicate(int a[], int n)
// {
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//         ans = ans ^ a[i];
//     for (int j = 1; j < n; j++)
//         ans = ans ^ j;
//     cout << ans << " " << endl;
// }

// int main()
// {
//     int a[] = {1, 2, 3, 4, 5, 5};
//     int n = sizeof(a) / sizeof(a[0]);
//     findDuplicate(a, n);
// }

// intersection of arrays

// #include <iostream>
// using namespace std;

// void findIntersection(int a[], int b[], int n, int m)
// {
//     int i = 0;
//     int j = 0;
//     while (i < n && j < m)//optimised solution(O(n))
//     {
//         if (a[i] == b[j])
//         {
//             cout << a[i]<<" ";
//             i++;
//             j++;
//         }
//         else if(a[i] < b[j])
//             i++;
//         else
//             j++;
//     }
// }

// int main()
// {
//     int a[] = {1, 2, 3, 4, 5};
//     int n = sizeof(a) / sizeof(a[0]);
//     int b[] = {2, 3, 7};
//     int m = sizeof(b) / sizeof(b[0]);
//     findIntersection(a, b, n, m);
// }

// pair sum

// triple sum

// sort 012

