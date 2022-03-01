// #include is preprocessor directive(file is used before compiling the program)
// #include <iostream>
// #define pi 3.14//efficient
// using namespace std;
// int main()
// {
//     cout<<"AREA OF CIRCLE :"<<pi*3*3<<endl;//before compiling the value is replaced
// }

// global variables

// global variables can be used to share variables
// but not recommended to use bcz it can be changed by any function


// inline functions(similar to macros)
//used to reduce the function calls overhead
// if the function statement is 1 ,if 2-3 then compiler decides what to do and rejects if more than 3 lines of code is present in the function

// #include <iostream>
// using namespace std;

// inline int getMax(int &a,int &b)
// {
//     return (a >= b) ? a : b;
// }

// int main()
// {
//     int a = 1;
//     int b = 2;
//     int ans = 0;

//     ans = getMax(a,b);
//     cout<<ans<<endl;

//     a++;
//     b--;
//     cout<<getMax(a,b)<<endl;
// }

// default parameters