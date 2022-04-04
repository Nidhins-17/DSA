// order of sorting algorithm

// Selection Sort.
// Bubble Sort.
// Recursive Bubble Sort.
// Insertion Sort.
// Recursive Insertion Sort.
// Merge Sort.
// Iterative Merge Sort.
// Quick Sort.

// selection sorting
// selecting the minIndex or maxIndex value placing it in order...
// space complexity O(1) and time complexity O(n^2)
// when array is small then it is wiser to use selection sorting method
// selection sort is not stable(stable sort = preserves the relative order of the same elements)

// #include <iostream>
// using namespace std;

// void selectionSort(int a[],int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         int minIndex =i;
//         int j;
//         for(j = i+1;j<n;j++)
//         {
//             if(a[minIndex] > a[j])
//             {
//                 minIndex = j;
//             }
//         }
//         swap(a[i],a[minIndex]);
//     }
// }

// void selectionSort(int a[],int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         int maxIndex =i;
//         int j;
//         for(j = i+1;j<n;j++)
//         {
//             if(a[maxIndex] < a[j])
//             {
//                 maxIndex = j;
//             }
//         }
//         swap(a[i], a[maxIndex]);
//     }
// }

// int main()
// {
//     int a[]={1,5,2,7,3};
//     int n = sizeof(a)/sizeof(a[0]);
//     selectionSort(a,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }

// Bubble sorting
// The largest element gets bubbles and gets placed at last
// in i'th round i'th largest element is placed in an order...
// space complexity is O(1) and time complexity is O(n^2) best case O(n)
// bubble sort is stable(preserves the relative order of the same elements)

// #include <iostream>
// using namespace std;

void bubbleSort(int a[], int n)
{
    // round 1 to n-1;
    bool swapp = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n-1-i; j++)//because at last they get sorted(no need to check)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swapp = true;
            }
        }
        // if already sorted
        if(swapp == false)
            break;
    }
}

// int main()
// {
//     int a[] = {3, 5, 7, 2, 1};
//     int n = sizeof(a) / sizeof(a[0]);
//     bubbleSort(a, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }

// Insertion sorting
// we assume first element part is sorted
//adaptable algorithm
// stable algorithm
// space complexity is O(1) and time complexity is O(n^2) best case O(n)

// #include <iostream>
// using namespace std;

// void insertionSort(int a[],int n)
// {
//     for(int i=1;i<n;i++)
//     {
//         int temp = a[i];
//         int j;
//         for(j=i-1;j>=0;j--)
//         {
//             if(a[j]>temp)
//             {
//                 a[j+1] = a[j];
//             }
//             else
//                 break;
//         }
//         a[j+1] = temp;
//     }
// }

// int main()
// {
//     int a[]={3,5,7,2,1};
//     int n = sizeof(a) / sizeof(a[0]);
//     insertionSort(a,n);
//     for(int i = 0; i < n; i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }