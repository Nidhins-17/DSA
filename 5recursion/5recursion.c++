// Letter Combinations of a Phone Number
// LeetCode

// permutations of string
// see the video that is programmed by considering the array

// #include <bits/stdc++.h>
// using namespace std;

// void permutationOfString(string str,int index, vector<string> &ans)
// {
//     if (index >= str.length())
//     {
//         ans.push_back(str);
//         return;
//     }

//     for (int i = 0; i < str.length(); i++)
//     {
//         swap(str[index],str[i]);
//         permutationOfString(str,index+1,ans);
//         // backtrack
//         swap(str[index],str[i]);
//     }
// }

// int main()
// {
//     string str;
//     cout << "Enter the string :";
//     cin >> str;
//     vector<string> ans;
//     int index = 0;
//     permutationOfString(str,index, ans);
//     for(int i=0;i<ans.size(); i++)
//     {
//         cout<<ans[i]<<endl;
//         // printing the answer
//     }
// }

#include <bits/stdc++.h>
using namespace std;

void permutationOfString(vector<int> nums,vector<vector<int>>& ans,int index)
{
    // base case
    if(index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for(int i=0;i<nums.size();i++)
    {
        swap(nums[index],nums[i]);
        permutationOfString(nums,ans,index+1);
        swap(nums[index],nums[i]);
    }
}

int main()
{
    vector<int> nums{1,3,5};
    vector<vector<int>> ans;
    int index = 0;
    permutationOfString(nums,ans, index);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[0].size();j++)
            cout<<ans[i][j];
        cout<<endl;
    }
}
