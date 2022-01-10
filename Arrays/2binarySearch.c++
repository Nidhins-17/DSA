// #include <iostream>
// using namespace std;

// int binarySearch(int a[], int n, int key)
// {
//     int start = 0;
//     int end = n - 1;

//     int m = start +(end - start)/2;//this is done to avoid overflow!!!
//     while (start <= end)
//     {
//         if (a[m] == key)
//             return m;
//         // move right
//         else if (a[m] < key)
//             start = m + 1;
//         // move left
//         else
//             end = m - 1;
//         // update m
//         m = start + (end - start)/2;
//     }
//     return -1;
// }

// int main()
// {
//     int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int n = sizeof(a) / sizeof(a[0]);

//     int key;
//     cout << "Enter the key to search :";
//     cin >> key;
//     int result = binarySearch(a, n, key);
//     cout << "The index is :" << result;
// }

// first and last occurences of a sorted array
// we store the answer and apply the conditions of BS

// #include <iostream>
// using namespace std;

// int firstOccurence(int a[], int n, int key)
// {
//     int s = 0;
//     int e = n - 1;
//     int m = s + (e - s) / 2;

//     int ans = -1;
//     while (s <= e)
//     {
//         if (a[m] == key)
//         {
//             ans = m;
//             e = m - 1;
//         }
//         else if (a[m] > key)
//         {
//             e = m - 1;
//         }
//         else
//         {
//             s = m + 1;
//         }
//         m = s + (e - s) / 2;
//     }
//     return ans;
// }

// int lastOccurence(int a[], int n, int key)
// {
//     int s = 0;
//     int e = n - 1;
//     int m = s + (e - s) / 2;

//     int ans = -1;
//     while (s <= e)
//     {
//         if (a[m] == key)
//         {
//             ans = m;
//             s = m + 1;
//         }
//         else if (a[m] > key)
//         {
//             e = m - 1;
//         }
//         else
//         {
//             s = m + 1;
//         }
//         m = s + (e - s) / 2;
//     }
//     return ans;
// }

// int main()
// {
//     int arr[7] = {1, 2, 3, 3, 3, 5, 7};
//     // firstOccurence(arr, 7, 3);
//     cout << "first occurence is :" << firstOccurence(arr, 7, 3) << endl;
//     cout << "last occurence is :" << lastOccurence(arr, 7, 3)<<endl;
//     cout<<"The total number of occurences of the key number is :"<<lastOccurence(arr, 7, 3) - firstOccurence(arr, 7, 3)+ 1<< endl;
// }

// peak index in a mountain array

// #include <iostream>
// using namespace std;

// int peakMountain(int a[],int n)
// {
//     int s = 0;
//     int e = n-1;
//     int m = s + (e - s) / 2;
//     while(s<e)
//     {
//         if(a[m]<a[m+1])
//             s = m+1;
//         else
//             e = m;
//         m = s + (e - s)/2;
//     }
//     return s;
// }

// int main()
// {
//     int a[5]={1,2,3,5,4};
//     cout<<"The index of the peak of the mountain is :"<<peakMountain(a,5)<<endl;
//     cout<<"The peak of the mountain is :"<<a[peakMountain(a,5)]<<endl;
// }

// find pivot in an array

// #include <iostream>
// using namespace std;

// int getPivot(int a[],int n)
// {
//     int s = 0;
//     int e = n-1;
//     int m = s + (e-s)/2;
//     while(s<e)
//     {
//         if(a[m]>=a[0])
//             s = m+1;
//         else
//             e = m;
//         m = s + (e-s)/2;
//     }
//     return s;
// }

// int main()
// {
//     int a[]={5,6,8,1,3};//sorted rotated array
//     cout<<a[getPivot(a,5)]<<endl;
// }

// search in a sorted rotated array(Imp)
// pivot is usefull

// #include <iostream>
// using namespace std;

// int getPivot(int a[],int n)
// {
//     int s = 0;
//     int e = n-1;
//     int m = s + (e-s)/2;
//     while(s<e)
//     {
//         if(a[m]>=a[0])
//             s = m+1;
//         else
//             e = m;
//         m = s + (e-s)/2;
//     }
//     return s;
// }

// int binarySearch(int a[], int n,int s,int e, int key)
// {
//     int start = s;
//     int end = e;

//     int m = start +(end - start)/2;//this is done to avoid overflow!!!
//     while (start <= end)
//     {
//         if (a[m] == key)
//             return m;
//         // move right
//         else if (a[m] < key)
//             start = m + 1;
//         // move left
//         else
//             end = m - 1;
//         // update m
//         m = start + (end - start)/2;
//     }
//     return -1;
// }

// int getPosition(int a[], int n,int key)
// {
//     // get to know if it is in the first line or the other line
//     int pivot = getPivot(a,n);
//     if(key >= a[pivot] && key<=a[n-1])
//         return binarySearch(a,n,pivot,n-1,key);
//     else
//         return binarySearch(a,n,0,pivot-1,key);
// }

// int main()
// {
//     int a[]={5,6,8,1,3};//sorted rotated array
//     cout<<getPosition(a,5,1);
// }

// there are two more approaches of searching in a sorted reversed array

// square root using binary search
// search space

// #include <iostream>
// using namespace std;

// int getSquareRootInt(int n)
// {
//     int start = 0;
//     int end = n;
//     long long int mid = start + (end - start) / 2;
//     long long int ans = -1;
//     while (start <= end)
//     {
//         long long int square = mid * mid;
//         if (square == n)
//             return mid;
//         else if (square < n)
//         {
//             ans = mid;
//             start = mid + 1;
//         }
//         else
//             end = mid - 1;

//         mid = start + (end - start) / 2;
//     }
//     return ans;
// }

// double getPrecision(int n, int precision, int integer)
// {
//     double factor = 1;
//     double ans = integer;
//     for (int i = 0; i < precision; i++)
//     {
//         factor = factor / 10;
//         for (double j = ans; j * j < n; j += factor)
//         {
//             ans = j;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int integer = getSquareRootInt(n);
//     cout << getPrecision(n, 5, integer) << endl;
// }

// book allocation problem
// a[i] is number of pages in i th book
// each student should have atleast one book
// the book should be divided to m students
// maximum number of pages assigned to each student is minimum

// #include <iostream>
// using namespace std;

bool isPossible(int a[], int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + a[i] <= mid)
        {
            pageSum += a[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || a[i] > mid)
                return false;
            pageSum = a[i];
        }
    }
    return true;
}

int allocateBook(int a[], int n, int m)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    int end = sum;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (isPossible(a, n, m, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

// int main()
// {
//     int a[] = {10, 20, 30, 40};
//     int n = sizeof(a) / sizeof(a[0]);
//     int division = allocateBook(a, n, 2);
//     // int count = 0;
//     // int sum = 0;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     if (sum + a[i] <= division)
//     //     {
//     //         sum += a[i];
//     //         count++;
//     //     }
//     // }
//     // cout << "student 1 gets :" << count << " books" << endl;
//     // cout << "student 2 gets :" << n - count << " books" << endl;
// }

// painter partition problem

#include <iostream>
using namespace std;
int main()
{
    // same as book allocation problem
}

//aggressive cow problem

#include <iostream>
using namespace std;
int main()
{
    
}