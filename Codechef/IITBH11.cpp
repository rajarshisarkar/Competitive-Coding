#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int test;
    test=0;int i=1;
    scanf("%d",&test);
    while(test--)
    {            
                 int n;long long answer=0;
                 scanf("%d",&n);
                 int ar1[n],ar2[n];
                 for(int i=0;i<n;i++)
                 scanf("%d",&ar1[i]);
                 for(int i=0;i<n;i++)
                 scanf("%d",&ar2[i]);
                 sort(ar1,ar1+n);
                 sort(ar2,ar2+n);
                 for(int i=0;i<n;i++)
                 answer+=ar1[i]*ar2[n-1-i];
                 printf("Case #%d:%lld\n",i,answer);i++;
    }
return 0;
}
