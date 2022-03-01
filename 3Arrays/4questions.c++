// reverse an array after position 'm';

// #include <bits/stdc++.h>
// using namespace std;

// int reverse(vector<int> &a, int pos)
// {
//     int start = pos - 1;
//     int end = a.size() - 1;
//     while (start <= end)
//     {
//         swap(a[start], a[end]);
//         start++;
//         end--;
//     }
// }

// int main()
// {
//     vector<int> a = {1, 4, 2, 3, 5, 6, 7, 8};
//     int pos;
//     cout << "position :";
//     cin >> pos;
//     reverse(a, pos);
//     for (int i = 0; i < a.size(); i++)
//         cout << a[i] << " ";
// }

// merge sorted array

// #include <bits/stdc++.h>
// using namespace std;

// vector<int> merge(vector<int> a, vector<int> b)
// {
//     // vector<int> c;
//     // for(int i = 0; i < a.size(); i++)
//     //     c.push_back(a[i]);
//     // for(int i = 0; i < b.size(); i++)
//     //     c.push_back(b[i]);
//     // sort(c.begin(),c.end());
//     // return c;

//     // two pointer method

//     vector<int> c;
//     int i = 0, j = 0, k = 0;
//     while (i < a.size() && j < b.size())
//     {
//         if (a[i] <= b[j])
//             c.push_back(a[i++]);
//         else
//             c.push_back(b[j++]);
//     }
//     while (i < a.size())
//         c.push_back(a[i++]);
//     while (j < b.size())
//         c.push_back(b[j++]);
//     return c;
// }

// int main()
// {
//     vector<int> a1 = {1, 3, 5, 7};
//     vector<int> a2 = {2, 4, 6};
//     vector<int> a3 = merge(a1, a2);
//     for (int i = 0; i < a3.size(); i++)
//         cout << a3[i] << " ";
// }

// move zeroes

// #include <iostream>
// using namespace std;
// void moveZeroes(int a[],int n)
// {
//     int nonZero = 0;//first non zero value should end up in the index of zero and we increment it...
//     for(int j = 0; j < n; j++)
//     {
//         if(a[j] != 0)
//         {
//             swap(a[j],a[nonZero]);
//             nonZero++;
//         }
//     }
//     for(int k=0; k < n;k++)
//     {
//         cout<<a[k]<<" ";
//     }
// }

// int main()
// {
//     int a[]={1,0,0,3,12,0};
//     moveZeroes(a,6);
// }

// rotate array

// #include <bits/stdc++.h>
// using namespace std;

// void rotate(vector<int> &a,int k)
// {
//     vector<int> temp(a.size());
//     for(int i=0; i<a.size(); i++)
//     {
//         temp[(i+k)%a.size()] = a[i];
//     }
//     a = temp;
// }

// int main()
// {
//     vector <int> a = {11, 12, 13, 14, 15};
//     int k;
//     cout<<"Enter the K value :";
//     cin>>k;
//     rotate(a,k);
//     for (int i = 0; i < a.size(); i++)
//         cout << a[i] << " ";
// }

// check if the array is sorted and rotated

// #include <bits/stdc++.h>
// using namespace std;

// void check(vector<int> &a)
// {
//     int count = 0;
//     for (int i = 1; i < a.size(); i++)
//     {
//         if (a[i - 1] > a[i])
//             count++;
//     }
//     if (a[a.size() - 1] > a[0])
//         count++;

//     // if all ele is same then count = 0;
//     if (count == 0 || count == 1)
//         cout << "Yes";
//     else
//         cout << "No";
// }

// int main()
// {
//     vector<int> a = {3, 5, 6, 1, 7};
//     check(a);
// }

// sum of two arrays
// carry = sum/10;
// sum = sum%10;

// #include <bits/stdc++.h>
// using namespace std;

// void reverse(vector<int> &ans)
// {
//     int s = 0;
//     int e = ans.size() - 1;
//     while (s <= e)
//     {
//         swap(ans[s], ans[e]);
//         s++;
//         e--;
//     }
// }

// void sum(int a[], int n, int b[], int m)
// {
//     int i = n - 1;
//     int j = m - 1;
//     vector<int> ans;

//     int carry = 0;
//     while (i >= 0 && j >= 0)
//     {
//         int val1 = a[i];
//         int val2 = b[j];

//         int sum = val1 + val2 + carry;

//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         i--;
//         j--;
//     }

//     // first case
//     while (i >= 0)
//     {
//         int sum = a[i] + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         i--;
//     }

//     // second case
//     while (j >= 0)
//     {
//         int sum = b[j] + carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//         j--;
//     }

//     // third case
//     while (carry != 0)
//     {
//         int sum = carry;
//         carry = sum / 10;
//         sum = sum % 10;
//         ans.push_back(sum);
//     }
//     reverse(ans);

//     for (int i = 0; i < ans.size(); i++)
//     {
//         cout << ans[i] << " ";
//     }
// }

// int main()
// {
//     int a[] = {1, 2, 3, 4};
//     int n = sizeof(a) / sizeof(a[0]);
//     int b[] = {6};
//     int m = sizeof(b) / sizeof(b[0]);
//     sum(a, n, b, m);
// }

