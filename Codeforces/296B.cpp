#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int f[222222][2][2],n;
char a[222222],b[222222];
#define M 1000000007

int main()
{	
	scanf("%d\n",&n);
	gets(a);
	gets(b);
	
	f[0][0][0]=1;
	for (int i=0;i<n;i++)
        for(int aa=0;aa<2;aa++)
            for (int bb=0;bb<2;bb++)
	            for (char A='0';A<='9';A++)
                    for (char B='0';B<='9';B++)
                        if ((a[i]=='?'||a[i]==A)&&(b[i]=='?'||b[i]==B))
	                       f[i+1][aa||(A>B)][bb||(B>A)]=( f[i+1][aa||(A>B)][bb||(B>A)] + f[i][aa][bb] )%M;
	                       
	cout << f[n][1][1] << endl;
}
