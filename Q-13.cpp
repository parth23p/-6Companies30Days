13.Decode the string
// Decode the string

// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string decodedString(string s){
        // code here
        stack<char> st;
        string ans;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==']'){
                string temp;
                while(!st.empty() && st.top()!='['){
                    temp=st.top()+temp;
                    st.pop();
                }
               
                st.pop();
                string num;
                while(!st.empty() && isdigit(st.top())){
                    num=st.top()+num;
                    st.pop();
                }
                int number=stoi(num);
                
                //  reverse(temp.begin(), temp.end());
                string repeat;
                for(int j=0;j<number;j++){
                    repeat+=temp;
        
                }
                // reverse(repeat.begin(),repeat.end());
                // for (char c : repeat)
                // st.push(c);
                for(int k=0;k<repeat.length();k++){
                    st.push(repeat[k]);
                }
            }
            else{
                st.push(s[i]);
            }
           
        }
       
            while(!st.empty()){
                ans=st.top()+ans;
                st.pop();
            }
        
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends