// row wise sum of 2-d array

#include <iostream>
#include <limits.h>
using namespace std;

void read(int a[][3], int n)
{
    // row wise input(default)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    // col wise input

    // for(int col=0;col<n;col++)
    // {
    //     for(int row=0;row<n;row++)
    //     {
    //         cin>>a[row][col];
    //     }
    // }
}

void print(int a[][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

void search(int a[][3], int n, int key)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (key == a[i][j])
                flag = 1;
        }
    }
    if (flag)
        cout << "present";
    else
        cout << "not present";
}

void rowSum(int a[][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        cout << sum << endl;
    }
}
void colSum(int a[][3], int n)
{
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i][j];
        }
        cout << sum << endl;
    }
}

void largestRowSum(int a[][3], int n)
{
    int maxi = INT_MIN;
    int p;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
        if (maxi < sum)
        {
            maxi = sum;
            p = i;
        }
    }
    cout << "The largest row sum is " << maxi << " and row is " << p;
}

void wavePrint(int a[][3], int n)
{
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void spiralPrint(int a[][3], int n)
{
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = n - 1;
    int endingCol = n - 1;
    int count = 0;
    int total = n * n;
    while (count < total)
    {
        // printing first row
        for (int i = startingCol; count < total && i <= endingCol; i++)
        {
            cout << a[startingCol][i] << " ";
            count++;
        }
        startingRow++;
        // printing last column
        for (int i = startingRow; count < total && i <= endingRow; i++)
        {
            cout << a[i][endingCol] << " ";
            count++;
        }
        endingCol--;
        // printing last row in backwards
        for (int i = endingCol; count < total && i >= startingCol; i--)
        {
            cout << a[endingRow][i] << " ";
            count++;
        }
        endingRow--;
        // printing first row
        for (int i = endingRow; count < total && i >= startingRow; i--)
        {
            cout << a[i][startingCol] << " ";
            count++;
        }
        startingCol++;
    }
}

void flip90(int a[][3], int n)
{
    int b[3][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = a[n - j - 1][i];
        }
    }
    print(b, 3);
}

int binarySearch(int a[][3], int n, int value)
{
    int s = 0;
    int e = n * n - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        int element = a[mid / n][mid % n]; // only this changes
        if (value == element)
            return 1;
        else if (element < value)
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return 0;
}

int binarySearchII(int a[][3], int n, int value)
{
    int row = n;
    int col = n;

    int rowIndex = 0;
    int colIndex = col - 1;

    while (rowIndex < row && colIndex >= 0)
    {
        int element = a[rowIndex][colIndex];
        if (element == value)
            return 1;
        else if (element < value)
            rowIndex++;
        else
            colIndex--;
    }
    return 0;
}

void add(int a[][3], int b[][3], int c[][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
    print(c, n);
}

void mul(int a[][3], int b[][3], int c[][3], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            c[i][j] = 0;
            for(int k=0;k<n;k++)
                c[i][j] += a[i][k]*b[k][j];
        }
    }
    print(c,3);
}

int main()
{
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int b[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int c[3][3];
    // read(arr,3);
    // print(arr,3);

    // linear search in 2D array

    // int key;
    // cout<<"Enter the key to search :";
    // cin>>key;
    // search(arr,3,key);

    // row - wise and col - wise sum

    // rowSum(arr, 3);
    // colSum(arr,3);

    // largest row sum in 2D array
    // largestRowSum(arr, 3);

    // wave like printing
    // wavePrint(arr, 3);

    // spiral like printing
    // spiralPrint(arr, 3);

    // flip by 90 degrees in matrix
    // flip90(arr,3);

    // binary search in sorted 2D array
    // int value;
    // cout<<"Enter the value to search :";
    // cin>>value;
    // if(binarySearch(arr,3,value))
    //     cout<<"Present";
    // else
    //     cout<<"not Present";

    // binary in a sorted row(2D array)
    // int value;
    // cout<<"Enter the value to search :";
    // cin>>value;
    // if(binarySearchII(arr,3,value))
    //     cout<<"Present";
    // else
    //     cout<<"not Present";

    // add(arr, b, c, 3);
    mul(arr, b, c, 3);
}
