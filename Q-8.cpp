int CountWays(string str){
		    // Code here
		    int n=str.size();
		    int dp[n];
		    dp[0]=1;
		    
		    for(int i=1;i<n;i++)
		    {
		        if(str[i-1]=='0' && str[i]=='0')
		        {
		            dp[i]=0;
		        }
		        else if(str[i-1]=='0' && str[i]!='0')
		        {
		            dp[i]=dp[i-1];
		        }
		        else if(str[i-1]!='0' && str[i]=='0')
		        {
		            if(str[i-1]=='1' || str[i-1]=='2')
		            {
		                dp[i]=((i>=2)?dp[i-2]:1);
		            }
		            else{
		            dp[i]=0;
		            }
		        }
		        else{
		          //  string last2=str[i-1]+str[i];
		            if(stoi(str.substr(i-1,i))<=26)
		            {
		                dp[i]=dp[i-1]+((i>=2)?dp[i-2]:1);
		            }else{
		                dp[i]=dp[i-1];
		            }
		            dp[i]=dp[i]%1000000007;
		        }
		        
		    }
		    return dp[n-1];
		}