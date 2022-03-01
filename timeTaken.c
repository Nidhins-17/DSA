// /* Program to demonstrate time taken by function fun() */
// #include <stdio.h>
// #include <time.h>
  
// // A function that terminates when enter key is pressed
// void fun()
// {
//     printf("fun() starts \n");
//     printf("Press enter to stop fun \n");
//     while(1)
//     {
//         if (getchar())
//             break;
//     }
//     printf("fun() ends \n");
// }
  
// // The main program calls fun() and measures time taken by fun()
// int main()
// {
//     // Calculate the time taken by fun()
//     clock_t t;
//     t = clock();
//     fun();
//     t = clock() - t;
//     double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
  
//     printf("fun() took %f seconds to execute \n", time_taken);
//     return 0;
// }

// #include <stdio.h>

// // int fib(int n)
// // {
// //     if(n==1 || n==2)
// //         return n-1;
// //     else
// //         return fib(n-2)+fib(n-1);
// // }

// int fib(int n)
// {
//     int a = 0;
//     int b = 1;
//     printf("%d %d ",a,b);
//     int c;
//     for(int i=0; i<n-2; i++)
//     {
//         c = a+b;
//         a=b;
//         b=c;
//         printf("%d ",c);
//     }
// }

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     fib(n);
// }

