/*Given an unsorted array Arr of size N of positive integers. One number 
         'A' from     set {1, 2, …N} is missing and one number 'B' 
        occurs twice in array. Find these two numbers.
        */


int *findTwoElement(int *arr, int n) {
        // code here
       long long int sum=(n*(n+1))/2;
       long long int sq_sum=(n*(n+1)*(2*n+1))/6;
       long long int missing,repeating;
       int *ans= new int[2];
       ans[0]=0;
       ans[1]=0;
       for(int i=0;i<n;i++)
       {
        sum -= (long long int)arr[i];
        sq_sum-= (long long int)arr[i]*(long long int)arr[i];
       }
        missing=((sq_sum/sum)+sum)/2;
        repeating=(missing-sum);
        ans[0]=repeating;
        ans[1]=missing;
        return ans;
    }