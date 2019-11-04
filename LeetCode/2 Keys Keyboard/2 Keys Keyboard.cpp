/* Author: Aviral Verma, Description: DP solution to 2 Keys Keyboard probem */
class Solution {
public:
    int minSteps(int n) {
        int dp[n+1]={0};
        int i, j;
        for(i=2; i<=n; i++)
        {
            dp[i]=i;
            for(j=i/2; j>0; j--)
            {
                if(i%j==0){
                    dp[i]=dp[j]+(i/j);
                    break;
                }                    
            }
        }
        return dp[n];
    }
};
