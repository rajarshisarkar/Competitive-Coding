/*
Name : Rajarshi Sarkar
Handle : joker_bane
Institution : Birla Institute of Technology, Mesra
*/
#include<cstdio>
#include<stdio.h>
#include<math.h>
#include<limits.h>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
#include<bitset>
#include<queue>
#include<string.h>
#include<cstring>
#include<deque>
#include<iomanip>
#include<map>
#include<set>
#include<stack>
#include<stdlib.h>
#define limit 1000000
using namespace std;
bool isPrime[10000];

void init()
{
    for (int i = 2; i < sizeof(isPrime); ++i) // Since range is very small so not used Sieve
	{
        int j = 2;
        for (; j * j <= i; ++j)
            if (i % j == 0)
                break;
        if (j * j > i) 
			isPrime[i] = true;
    }
}

main()
{
    init();
    int testCases, divisors[1000005];
    scanf("%d", &testCases);
    while(testCases--) 
	{
        long long L, R;
        scanf("%lld%lld", &L, &R);
        for(long long i=L; i<=R; i++) 
			divisors[i-L] = 0; //Initialize divisors of all numbers to 0
        for(long long i=1; i*i <= R; i++) // Iterate through 1 to sqrt(R)
		{ 
            long long square = i*i;
            for(long long j=( (L-1) / i + 1) * i; j <= R; j += i) // j starts with first number in range [L, R] which is multiple of i
			{	// Factors under consideration are i and j / i 
                if (j < square) continue; // Already counted because of 2 in else condition below
                if( square == j ) // Just 1 factor
                    divisors[j-L] += 1;
                else divisors[j-L] += 2; // Counting factors i and j / i
            }
        }
        int ans = 0;
        for(long long i = L; i <= R; i++) 
			if(isPrime[divisors[i-L]]) 
				ans++;
        printf("%d\n",ans);
    }
}
