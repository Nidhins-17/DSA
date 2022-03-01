// cin stops the execution when it encounters space,tab and enter keys.

// many different questions are combined below

// #include <iostream>
// using namespace std;

// int stringLength(char name[])
// {
//     int i = 0;
//     int count = 0;
//     while(name[i] != '\0')
//     {
//         count++;
//         i++;
//     }
//     return count;
// }

// void reverseString(char name[],int length)
// {
//     int start = 0;
//     int end = length -1;
//     while(start <= end)
//     {
//         swap(name[start],name[end]);
//         start++;
//         end--;
//     }
// }

// char toLowerCase(char ch)
// {
//     if (ch >= 'a' && ch <= 'z')
//         return ch;
//     else
//         return ch - 'A' + 'a';
// }

// //where the string is not case sensitive
// void palindromeCheck(char name[],int length)
// {
//     int s = 0;
//     int e = length-1;
//     int flag = 0;
//     while(s<=e)
//     {
//         if (toLowerCase(name[s++]) == toLowerCase(name[e--]))
//             flag = 1;
//         else
//         {
//             flag = 0;
//             break;
//         }
//     }
//     if(flag == 1)
//         cout<<"yes"<<endl;
//     else
//         cout<<"no"<<endl;
// }

// int main()
// {
//     char name[20];
//     cout<<"Enter the string :";
//     cin>>name;
//     // length
//     int length = stringLength(name);
//     cout<<"The length of the string is :"<<length<<endl;
//     // reverse
//     reverseString(name,length);
//     cout<<name<<endl;
//     // palindrome
//     palindromeCheck(name,length);
//     // toLowerCase
//     // cout<<toLowerCase('C')<< endl;
// }

// #include <iostream>
// using namespace std;

// string tolowercase(string str)
// {
//     string lower;
//     for(int i=0;i<str.length();i++)
//     {
//         if((str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9'))
//             lower.push_back(str[i]);
//         else
//             lower.push_back(str[i] - 'A' + 'a');
//     }
//     return lower;
// }

// int main()
// {
//     string str;
//     cin>>str;
//     string lower = tolowercase(str);
//     cout<<lower;
// }

// reverse words in a sentence

// my name is sherlock
//  ym ema si kcolrehs

// #include <bits/stdc++.h>
// using namespace std;

// string reverseWords(string sentence)
// {
//     int s = 0;
//     int e = 0;
//     int n = sentence.length();
//     for (int i = 0; i < n; i++)
//     {
//         if ((sentence[i] == ' ') || (i == n-1))
//         {
//             e = i - 1;
//             if(i == n-1)
//                 e = i;
//             while (s < e)
//             {
//                 swap(sentence[s], sentence[e]);
//                 s++;
//                 e--;
//             }
//             s = i + 1;
//         }
//     }
//     return sentence;
// }

// int main()
// {
//     string sentence = "my name heisenberg";
//     cout<<reverseWords(sentence);
// }

// maximum occuring character

// #include <iostream>
// using namespace std;

// char getMaxOccurringString(string s)
// {

//     int arr[26]={0};
//     // create an array of count of characters

//     for(int i=0;i<s.length();i++)
//     {
//         char ch = s[i];
//         int num = 0;
//         num = ch - 'a';
//         arr[num]++;//increasing the count of the specific character
//     }

//     //maximum occuring character

//     int maxi = 0;
//     int ans = 0;
//     for(int i=0;i<26;i++)
//     {
//         if(maxi < arr[i])
//         {
//             ans = i;
//             maxi = arr[i];
//         }
//     }

//     char finalAnswer = ans + 'a';
//     return finalAnswer;
// }

// int main()
// {
//     string s;
//     cin>>s;
//     cout<<getMaxOccurringString(s)<<endl;
// }

// replace spaces with any characters

// #include <iostream>
// using namespace std;

// string replace(string s)
// {
//     string temp = " ";
//     string rep = "@40";
//     for(int i = 0;i<s.length();i++)
//     {
//         if(s[i] == ' ')
//         {
//             temp.push_back('@');
//             temp.push_back('4');
//             temp.push_back('0');
//         }
//         else
//             temp.push_back(s[i]);

//         // without using anotherString
//         // if(s[i] == ' ')
//         //     s.replace(i,1,rep);
//     }
//     return temp;
//     // return s;
// }

// int main()
// {
//     char sen[30];
//     cout<<"Enter a sentence :";
// cin.getline(sen,30);
//     cout<<replace(sen);
// }

// remove all occurences of substring

#include <bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        // s.find(stringToLocate)
        // s.erase(indexOfFirstCharacter,numberOfCharactersToRemove)
        s.erase(s.find(part), part.length());
    }
    return s;
}

// int main()
// {
//     string s = "mind is powerfull and mind is sensitive";
//     string part = "mind";
//     cout<<removeOccurrences(s,part);
// }

// permutation in string

#include <iostream>
using namespace std;

bool checkPermutationString(string s1, string s2)
{
    // array of count
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] = 'a';
        count1[index]++;
    }

    // traverse s2 in window size of s1 and compare them
    int i = 0;
    int windowSize = s1.length();
    int count2[20] = {0};

    while (i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }
    if (checkEqual(count1, count2))
        return 1;
}

int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;
    checkPermutationString(s1,s2);
}
