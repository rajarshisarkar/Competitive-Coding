#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int test,count=1;
    test=0;int i=1;
    scanf("%d",&test);
    while(test--)
    {            
                 int fake;
                 scanf("%d",&fake);
                 
                 int n;
                 scanf("%d",&n);
                 int ar1[n],ar2[n];
                 
                 for(int i=0;i<n;i++)
                 scanf("%d",&ar1[i]);
                 
                 if(n!=1)
                 printf("Case #%d: %d\n",count,ar1[n-1]+(ar1[n-1]-ar1[n-2]));
                 else
                 printf("Case #%d: I don't know.\n",count);
                 count++;
    }
return 0;
}
