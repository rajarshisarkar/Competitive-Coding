#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int test,backup1,backup2,ans1,ans2,count=1;
    test=0;int i=1;
    scanf("%d",&test);
    while(test--)
    {            
                 int sum;//long long answer=0;
                 scanf("%d",&sum);
                 int n;
                 scanf("%d",&n);
                 int ar1[n],ar2[n];
                 for(int i=0;i<n;i++)
                 {
                 scanf("%d",&ar1[i]);
                 ar2[i]=ar1[i];
                 }
                 
                 sort(ar2,ar2+n);
                 for(int i=0;i<n;i++)
                 if(binary_search(ar2,ar2+n,sum-ar2[i]))
                 backup1=ar2[i];
                 backup2=sum-backup1;
                 
                 //printf("backup1 : %d backup2 : %d\n\n",backup1,backup2);
                 
                 for(int i=0;i<n;i++)
                 {
                         if(ar1[i]==backup1)
                         {ans1=i;ar1[i]=-10000;}
                         
                         if(ar1[i]==backup2)
                         {ans2=i;ar1[i]=-10000;}
                 }
                 
                 printf("Case #%d: %d %d\n",count,min(ans1,ans2)+1,max(ans1,ans2)+1);
                 count++;
    }
return 0;
}
