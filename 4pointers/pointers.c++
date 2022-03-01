// #include <iostream>
// using namespace std;
// int main()
// {
//     int num = 100;
//     int *p = &num;
//     cout << *p << endl;
//     cout << sizeof(p) << endl;
//     int *p2 = NULL; // int *p2 = 0;
//     cout << *p2 << endl;
// }

// copying a pointer

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 3;
//     int *p = &a;
//     int *q = p;
//     cout<<p<<" "<<q;
// }

// pointer arithmetic

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 4;
//     int *p = &a;
//     cout<<p<<endl;
//     cout<<++p<<endl;//goes to next integer address(4 bytes)
// }

// array and pointers(IMP)
// index[array] is also a correct syntax

// #include <iostream>
// using namespace std;
// int main()
// {
//     int a [3]={1,23,4};
//     // cout<<*a<<endl;
//     // cout<<*a+1<<endl;
//     // cout<<*(a+1)<<endl;

//     // a[i] = *(a + i);
//     // or
//     // i[a] = *(i+a);

//     int i = 2;
//     cout<<i[a]<<endl;//this works because of the above formulae thats equal to *(i+a)
// }

// sizeofs

// #include <iostream>
// using namespace std;
// int main()
// {
//     // int a[]={1,2,3};
//     // cout<<sizeof(a)<<endl;
//     // cout<<sizeof(*a)<<endl;

//     // int *ptr = a;
//     // cout<<sizeof(ptr)<<endl;
//     // cout<<sizeof(*ptr)<<endl;
//     // cout<<sizeof(&ptr)<<endl;

//     // int a[] = {1, 2, 3};
//     // int *p = a;

//     // cout << &a << endl;
//     // cout << &p << endl; // both are different

//     // the address of an array cannot be changed(arr = arr + 1 is invalid)
//     //the pointer pointing can be changed(p = p + 1)
// }

// char array

#include <iostream>
using namespace std;
int main()
{
    // int a[]={1,2,3,4,5,6,7};
    // char ch[] = "abcdefg";
    // cout<<a<<endl;//address is outputed
    // cout<<ch<<endl;//content is outputed

    // char *c = &ch[0];
    // cout<<c<<endl;//prints the string
    // cout<<*c<<endl;//prints the first character

    // char temp = 'z';
    // char *b = &temp;
    // cout<<b<<endl;//prints until it seeks a null character

    // char *ch = "abcdefgh";//this is risky
    // cout<<ch<<endl;
}

// functions and pointers

// #include <iostream>
// using namespace std;

// void updateValue(int *ptr)
// {
//     // *(ptr) = *ptr + 1;
//     ++(*ptr);
// }

// int getSum(int *a, int n)
// {
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//         sum += a[i];
//     return sum;
// }

// int main()
// {
//     // int n = 4;
//     // int *p = &n;
//     // updateValue(p);
//     // cout<<*p<<endl;

//     int a[5] = {1, 2, 3, 4, 5};
//     cout << getSum(a, 5);
// }

// double pointers

#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int *p = &n;
    int **p2 = &p;

    cout<<**p2<<endl;
}