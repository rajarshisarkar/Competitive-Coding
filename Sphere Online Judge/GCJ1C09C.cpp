#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main() 
{
	int T; 
    cin>>T;
    
	for (int test=1; test<=T; test++) 
    {
		int nCells,nPrisoners, locs[200],dp[200][200]; locs[0] = 0;
		cin>>nCells>>nPrisoners;
		for (int i = 1; i <= nPrisoners; i++) 
        cin>>locs[i];
        
		locs[nPrisoners+1] = nCells+1;
		nPrisoners+=2;
		for (int i = 0; i < nPrisoners-1; i++) 
            dp[i][i+1] = 0;
            
		for (int gap = 2; gap < nPrisoners; gap++) 
        {
			for (int a = 0; a+gap < nPrisoners; a++) 
            {
				int b = a+gap;int val = 99999999;
				
				for (int d = a+1; d < b; d++) 
					val = min(val,dp[a][d]+dp[d][b] + locs[b]-locs[a]-2);
				
				dp[a][b] = val;
			}
		}
		printf("Case #%d: %d\n",test,dp[0][nPrisoners-1]);
	}
}
