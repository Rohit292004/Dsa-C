class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        
        
        //sum of all element- sum of n no.
        
        int sum=0;
        
        for(int i=0;i<n-1;i++)
        {
            sum+=array[i];
            
        }
        
        int ans=n*(n+1)/2;
        
        return ans-sum;
    }
};
