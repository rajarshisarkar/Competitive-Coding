#include <cstdio>
#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
 
int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        int n, ans = 1;
        scanf("%d",&n);
        int dp[n],arr[n];
        for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
 
        for(int i=0;i<n;i++)
            dp[i] = 1; /* Initialize LIS values for all indexes */
 
        for(int i=0;i<n;i++)
            for(int j=0;j<i;j++) /* j has to be less than i */
                if(arr[j]<=arr[i] && dp[i]<dp[j]+1)
                {
                    dp[i] = dp[j]+1; /* Compute optimized LIS values in bottom up manner */
                    ans = max(dp[i], ans); /* Pick maximum of all LIS values */
                }
        printf("%d\n", ans);
    }
}
