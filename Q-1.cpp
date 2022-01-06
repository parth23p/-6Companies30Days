
//Q- Given an array of strings, return all groups of strings that are anagrams.

//Initial Template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string> > ans;
        unordered_map<string, vector<string>> ump;
        
        for(int i=0;i<string_list.size();i++)
        {
            string temp=string_list[i];
            sort(string_list[i].begin(),string_list[i].end());
            ump[string_list[i]].push_back(temp);
        }
        
        for(auto it=ump.begin();it!=ump.end();++it)
        {
            ans.push_back(it->second);
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
  // } Driver Code Ends