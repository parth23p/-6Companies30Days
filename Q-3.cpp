//Count the subarrays having product less than k


#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        if(k<=1) return 0;
        
        long long int prod=1;
        int left=0,right=0;
        int result=0;
        while(right<n)
        {
            prod*=a[right];
            
            while(prod>=k)
            {
                prod/=a[left];
                left++;
            }
            result+=right-left+1;
            right++;
        }
        return result;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
  // } Driver Code Ends