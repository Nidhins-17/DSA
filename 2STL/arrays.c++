// #include <iostream>
// #include <array>
// #include <algorithm>

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int basic[] = {1, 2, 3, 4};
    array<int, 4> a = {1, 2, 3, 4};

    cout << "size is :" << a.size() << endl;
    cout << "first element :" << a.front() << endl;
    cout << "last element :" << a.back() << endl;
    sort(a.begin(), a.end());
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
}
