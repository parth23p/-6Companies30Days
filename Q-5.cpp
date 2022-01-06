
//5. Program to find Nth Ugly Number.



#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    
	    unsigned i2=0,i3=0,i5=0;
	    unsigned long long next_mul_2=2;
	    unsigned long long next_mul_3=3;
	    unsigned long long next_mul_5=5;
	    unsigned long long next_ugly_no=1;
	    
	    unsigned long long ugly[n];
	    ugly[0]=1;
	    
	    
	    for(int i=1;i<n;i++)
	    {
	        
	        next_ugly_no=min(next_mul_2,min(next_mul_3,next_mul_5));
	        ugly[i]=next_ugly_no;
	        if(next_ugly_no==next_mul_2)
	        {
	            i2+=1;
	            next_mul_2=ugly[i2]*2;
	        }
	       if(next_ugly_no==next_mul_3)
	        {
	            i3+=1;
	            next_mul_3=ugly[i3]*3;
	        }
	       if(next_ugly_no==next_mul_5)
	        {
	            i5+=1;
	            next_mul_5=ugly[i5]*5;
	        }
	    }
	    return next_ugly_no;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends