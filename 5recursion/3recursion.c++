// reverse a string

// #include <iostream>
// using namespace std;

// can be done without two pointers by using only 'i' and 'n-i-1' kinda...
// void reverse(string& s, int i, int j)
// {
//     if (i > j)
//         return;
//     swap(s[i], s[j]);
//     i++;
//     j--;
//     reverse(s,i,j);
// }

// int main()
// {
//     string s = "NIDHINS";
//     int i, j;
//     i = 0;
//     j = s.length()-1;
//     reverse(s, i, j);
//     cout<<s;
// }

// check palindrome

// #include <iostream>
// using namespace std;

// bool checkPalindrome(string p,int i,int j)
// {
//     if(i>j)
//         return true;
//     if(p[i]!=p[j])
//         return false;
//     else
//         return checkPalindrome(p,++i,--j);
// }

// int main()
// {
//     string palindrome = "malayalam";
//     if(checkPalindrome(palindrome,0,palindrome.length()-1))
//         cout<<"Palidrome";
//     else
//         cout<<"Not Palindrome";
// }

// #include <iostream>
// using namespace std;

// int fact(int n)
// {
//     if(n==1)
//         return 1;
//     else
//         return n*fact(n-1);
// }

// int main()
// {
//     cout<<fact(3);
// }

// bubble sorting

// #include <iostream>
// using namespace std;

// // recursion
// void bubbleSort(int a[], int n)
// {
//     if (n == 0 || n == 1)
//         return;

//     for(int i=0; i<n-1; i++)
//     {
//         if(a[i]>a[i+1])
//             swap(a[i],a[i+1]);
//     }

//     bubbleSort(a,n-1);
// }

// int main()
// {
//     int arr[] = {1, 4, 2, 3, 6, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     bubbleSort(arr, n);
//     for(int i=0; i<n; i++)
//         cout<<arr[i]<<" ";
// }

// insertion sort

// Recursive C++ program for insertion sort
// #include <iostream>
// using namespace std;

// void insertionSortRecursive(int arr[], int n)
// {
//     // Base case
//     if (n <= 1)
//         return;

//     // Sort first n-1 elements
//     insertionSortRecursive(arr, n - 1);

//     // Insert last element at its correct position
//     // in sorted array.
//     int last = arr[n - 1];
//     int j = n - 2;

//     /* Move elements of arr[0..i-1], that are
//     greater than key, to one position ahead
//     of their current position */
//     while (j >= 0 && arr[j] > last)
//     {
//         arr[j + 1] = arr[j];
//         j--;
//     }
//     arr[j + 1] = last;
// }

// // A utility function to print an array of size n
// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
// }

// /* Driver program to test insertion sort */
// int main()
// {
//     int arr[] = {12, 11, 13, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     insertionSortRecursive(arr, n);
//     printArray(arr, n);

//     return 0;
// }

// selection sort



// #include <iostream>
// using namespace std;

// // Return minimum index
// int minIndex(int a[], int i, int j)
// {
//     if (i == j)
//         return i;

//     // Find minimum of remaining elements
//     int k = minIndex(a, i + 1, j);

//     // Return minimum of current and remaining.
//     return (a[i] < a[k]) ? i : k;
// }

// // Recursive selection sort. n is size of a[] and index
// // is index of starting element.
// void recurSelectionSort(int a[], int n, int index = 0)
// {
//     // Return when starting and size are same
//     if (index == n)
//         return;

//     // calling minimum index function for minimum index
//     int k = minIndex(a, index, n - 1);

//     // Swapping when index nd minimum index are not same
//     if (k != index)
//         swap(a[k], a[index]);

//     // Recursively calling selection sort function
//     recurSelectionSort(a, n, index + 1);
// }

// Driver code
// int main()
// {
//     int arr[] = {3, 1, 5, 2, 7, 0};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Calling function
//     recurSelectionSort(arr, n);

//     // printing sorted array
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }

// merge sort(faster than earlier)

#include <iostream>
using namespace std;

void generateArray(int *a,int n) 
{
    for(int i = 0; i < n; i++)
    {
        a[i] = rand()%100;
    }
}

void merge(int a[],int n,int start,int end)
{
    int mid = start + (end - start) / 2;

    int l1 = mid - start + 1;
    int l2 = end - mid;

    int *first = new int [l1];
    int *second = new int[l2];

    // copy values

    int mainArrayIndex = start;
    for(int i=0; i<l1; i++)
        first[i] = a[mainArrayIndex++];
    mainArrayIndex = mid + 1;
    for(int i=0; i<l2; i++)
        second[i] = a[mainArrayIndex++];

    // merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while(index1< l1 && index2 < l2)
    {
        if(first[index1] < second[index2])
            a[mainArrayIndex++] = first[index1++];
        
        else
            a[mainArrayIndex++] = second[index2++];
    }
    while(index1 < l1)
        a[mainArrayIndex++] = first[index1++];
    
    while(index2 < l2)
        a[mainArrayIndex++] = second[index2++];
}

void mergeSort(int a[],int n,int start,int end)
{
    int mid = start + (end - start) / 2;
    // base case
    if(start >= end)
        return;

    // left part sort
    mergeSort(a,n,start,mid);

    // right part sort
    mergeSort(a,n,mid+1,end);

    // merge
    merge(a,n,start,end);
}

int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    int a[n];
    generateArray(a,n);
    mergeSort(a, n, 0, n - 1);

    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
}

