/*Given a string, Your task is to  complete the function encode that returns the run length encoded string for the given string.
eg if the input string is “wwwwaaadexxxxxx”, then the function should return “w4a3d1e1x6″.(Modified version of question named Cute Monkeys)
*/

#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  
  string ans="";
    
    int count=1;
   for(int i=0;i<src.length()-1;i++)
   {
       if(src[i]==src[i+1])
       {
           count++;
       }
       else if(src[i]!=src[i+1])
       {
           ans=ans+src[i]+to_string(count);
           count=1;
       }    
   }
   ans=ans+src[src.length()-1]+to_string(count);
   return ans;
  
}     
 

