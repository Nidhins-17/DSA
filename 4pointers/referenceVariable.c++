// #include <iostream>
// using namespace std;

// int& reference(int a)
// {
//     int n = a;
//     int &ans = n;
//     return ans;//not a good practice because these are temporary variables
// }

// int* pointer(int a)
// {
//     int *p =&a;
//     return p;//not a good practice because these are temporary variables
// }

// void update(int &j)//pass by reference
// {
//     j+=2;
// }

// int main()
// {
//     int i = 5;
//     int &j = i;//reference variable defination
//     j++;//both the variables are same but different names
//     cout<<i<<endl;
//     update(i);
//     cout<<i<<endl;
//     cout<<reference(3)<<endl;
//     cout<<*(pointer(3))<<endl;

//     char ch;
//     cout<<sizeof(ch)<<endl;
//     char *c;
//     cout<<sizeof(c)<<endl;
// }

// whenever a program starts it takes some memory to run
// there are two types of memory - stack and heap memories
// stack is comparitively low than heap and all these vaiables,pointers,references,arrays and strings are stored in the stack(that's why variable length array is risky)
// dynamic memory allocations is done in heap memory and returns the address
//'new' keyword is to create anything in heap
// name is not required to create in heap(char *ch = new char;)

// #include <bits/stdc++.h>
// using namespace std;

// int getSum(int *a,int n)
// {
//     int sum = 0;
//     for(int i=0;i<n;i++)
//         sum+=a[i];
//     return sum;
// }

// int main()
// {
//     //dynamic memory allocation
//     int n;
//     cin>>n;
//     int *arr = new int[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     cout<<getSum(arr,n);
// }

// difference betweeen static and dynamic memory allocations

// more memory is used in heap
// memory is flushed automatically in static memory but we need to do manually in heap memory(delete i or delete []arr)

// 2D array dynamicMemoryAllocation

// #include <iostream>
// using namespace std;
// int main()
// {
//     int row, col;
//     cin >> row >> col;
//     // creating a dynamic 2D array memory allocation
//     int **arr = new int*[row];
//     for (int i = 0; i < col; i++)
//     {
//         arr[i] = new int[col];
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0;j < col; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0;j < col; j++)
//         {
//             cout<<arr[i][j];
//         }
//         cout<<endl;
//     }

//     //releasing 2D array memory
//     for (int i = 0; i < row; i++)
//     {
//         delete []arr[i];
//     }
//     delete []arr;
// }

// jagged array(array of array where the member arrays have different lengths)

#include <iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    int *col = new int[row];    

    // take length of each row and store it in an array
    for(int i=0;i<row;i++)
    {
        cout<<"Enter the no of elements in "<<i+1<<" row :";
        int n;
        cin>>n;
        col[i] = n;
    }

    // create stagged array
    int **arr = new int*[row];
    for(int i=0;i<row;i++)
        arr[i] = new int[col[i]];
    
    // take input
    for(int i = 0; i < row; i++)
    {
        cout<<"Enter "<<col[i]<<" elements for row"<<i+1<<":"<<endl;
        for(int j=0;j<col[i];j++)
        {
            int ele;
            cin>>ele;
            arr[i][j] = ele;
        }
    }

    // display
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col[i]; j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
