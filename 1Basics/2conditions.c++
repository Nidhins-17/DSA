//check whether a character is lower cased or upper cased

#include <iostream>
using namespace std;
int main()
{
    // int a = cin.get();//return a char value
    // cout<<a<<endl;//so the output is the ascii values of the character

    char ch;
    // cout<<"Enter the value for char ch"<<endl;
    cin>>ch;
    int ascii = ch;
    if(ch>='a' && ch<='z')
        cout<<"the char is Lower cased"<<endl;
    else if(ch>='A' && ch<='a')
        cout<<"the char is Upper cased"<<endl;
    else
        cout<<"It is an integer bro"<<endl;
    cout << "The ASCII value of the char is : "<< ascii<<endl;

}

// sum of n numbers from 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int i = 1;

//     int sum = 0;
//     while(i<=n)
//     {
//         sum = sum + i;
//         i++;
//     }
//     cout<<"The sum of the numbers is :"<<sum<<endl;
// }
    
// sum of even numbers from 1

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;
//     int i = 1;

//     int sum = 0;
//     while(2*i<=n)
//     {
//         sum = sum + 2*i;
//         i++;
//     }
//     cout<<"The sum of the numbers is :"<<sum<<endl;
// }

// checking if a number is prime

#include <iostream>
using namespace std;

int prime(int n)
{
    int i = 2;
    while (i < n / 2)
    {
        if (n % i == 0)
        {
            cout << "Not prime" << endl;
            break;
        }

        else
        {
            // cout<<"Prime for "<<i<<endl;
            cout << "prime" << endl;
            break;
        }

        i++;
    }
}

int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    prime(n);
}