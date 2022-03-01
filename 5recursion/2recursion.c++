// towerOfHanoi
// #include <iostream>
// using namespace std;

// void TOH(int n, char src, char aux, char dst)
// {
//     if (n == 0)
//         return;
//     TOH(n - 1, src, dst, aux);
//     cout << "move disc"
//          << " " << n << " from " << src << " to " << dst << endl;
//     TOH(n - 1, aux, src, dst);
// }

// int main()
// {
//     int n;
//     cout << "Enter the number of disks :";
//     cin >> n;
//     TOH(n, 'A', 'B', 'C');
// }

// isSorted or not

// #include <iostream>
// using namespace std;

// bool isSorted(int arr[],int n)
// {
//     bool ans;
//     if(n == 0 || n == 1)
//         return true;
//     else if(arr[0]>arr[1])
//         return false;
//     else
//         ans = isSorted(arr+1,n-1);
//     return ans;
// }

// int main()
// {
//     int arr[]={1,2,3,4,5,6,7,8,9};
//     int n = 9;
//     cout<<isSorted(arr,n);
// }

// sum of array
// #include <iostream>
// using namespace std;

// int sumArray(int arr[],int n)
// {
//     static int sum = 0;//or pass the sum variable in the parameter
//     sum += arr[0];
//     if(n==1)
//         return sum;
//     sumArray(arr+1,n-1);
//     return sum;
// }

// int main()
// {
//     int arr[]={1,2,3,4,5,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     cout<<sumArray(arr,n);
// }

// linear search

// #include <iostream>
// using namespace std;

// bool linearSearch(int *arr, int n, int key)
// {
//     if (n == 0)
//         return false;
//     if(arr[0] == key)
//         return true;
//     else
//         linearSearch(arr+1,n-1,key);
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int key;
//     cout << "Enter the key :";
//     cin >> key;
//     cout << linearSearch(arr, n, key);
// }

// binary search

// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int n, int key, int start, int end)
// {
//     int mid = start + (end - start) / 2;

//     // for element not found
//     if (start > end)
//         return false;
//     // if element found
//     if (arr[mid] == key)
//         return true;

//     else if (arr[mid] > key)
//         return binarySearch(arr, n, key, start, --mid);
//     else
//         return binarySearch(arr, n, key, ++mid, end);
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
//     int n = 9;
//     int key;
//     cout << "Enter the key :";
//     cin >> key;
//     if (binarySearch(arr, n, key, 0, n - 1))
//         cout << "Present";
//     else
//         cout << "Not present";
// }
