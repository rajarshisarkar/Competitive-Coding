#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
{
    long N,M,D,L,i,sub,count,ans;
    scanf("%ld %ld %ld %ld",&N,&M,&D,&L);
    long cows[N];
    for(i=0;i<N;i++)
    scanf("%ld",&cows[i]);
    
    sort(cows,cows+N);
    
    sub=0;ans=0;
    count=0;
    for(i=0;i<N;i++)
    {
        if(count==M) // when all lanes are filled then this is to be used
       {
            count=0;
            sub++;
        }
       long temp=cows[i]-sub*D;
       
        if(temp>=L) // checking the low speed limit rule for cowtopia
        {
            count++;
            ans++;
        }
        
    }
    printf("%ld",ans);
   return 0; 
}    
