class Solution {
public:
    int recursedp(vector<int>& cost,int n, vector<int> &dp){
        if(n<=1)
        return 0;

        if(dp[n]!=-1)
        return dp[n];

        int right=INT_MAX;
        int left=recursedp(cost,n-1,dp)+cost[n-1];
        // if(n>1)
        right=recursedp(cost,n-2,dp)+cost[n-2];

        return dp[n]=min(left,right);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size()+1,-1);
        cout<<cost.size()<<endl;
        return recursedp(cost,cost.size(),dp);
      
    }
};