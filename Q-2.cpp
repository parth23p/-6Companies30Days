//Overlapping Rectangles

// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
        // code here
        int xl1=L1[0];
        int yl1=L1[1];
        int xr1=R1[0];
        int yr1=R1[1];
        int xl2=L2[0];
        int yl2=L2[1];
        int xr2=R2[0];
        int yr2=R2[1];
        
        // if(xl1==xr1 || yl1==yr1 || xl2==xr2 || yl2==yr2)
        // {return 0;}
        if(xl1>xr2 || xl2>xr1){
        return 0;
        }
       
        if(yr1>yl2 || yr2>yl1){
        return 0;
        }
        
        return 1;
        
       
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p[2], q[2], r[2], s[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1] >> s[0] >> s[1];
        Solution ob;
        int ans = ob.doOverlap(p, q, r, s);
        cout << ans << "\n";
    }
}  // } Driver Code Ends