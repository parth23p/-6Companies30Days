//Given a pattern containing only I's and D's. I for increasing and D 

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        // code here 
        stack<int> st;
        int num=1;
        int n=S.size();
        string ans="";
        for(int i=0;i<n;i++)
        {
            char c=S[i];
            if(c=='D')
            {
                st.push(num);
                num++;
            }
            else{
                st.push(num);
                num++;
                while(!st.empty()){
                 ans=ans+to_string(st.top());
                 st.pop();
                }
            }
        }
        st.push(num);
         while(!st.empty()){
                 ans=ans+to_string(st.top());
                 st.pop();
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
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends