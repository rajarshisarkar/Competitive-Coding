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
                 int n;
                 scanf("%d",&n);
                 int ar1[n],ar2[n],ar3[n],ans[n];
                 
                 for(int i=0;i<n;i++)
                 scanf("%d",&ar1[i]);
                 
                 for(int i=0;i<n;i++)
                 {
                 scanf("%d",&ar2[i]);
                 ar3[i]=ar2[i];
                 }
                 
                 sort(ar3,ar3+n);
                 int z=0;

                 for(int i=n-1;i>=0;i--)
                 {
                     for(int j=0;j<n;j++) 
                     {
                         if(ar2[j]==ar3[i])
                         {
                          ar2[j]=-10000;
                          ans[z]=j;
                          z++; 
                          break;               
                         }       
                     }
                 }
                 
                 printf("Case #%d: ",count);
                 count++;
                 for(int i=0;i<n;i++)
                 printf("%d ",ans[i]);
                 printf("\n");
    }
return 0;
}
