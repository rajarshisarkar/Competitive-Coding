#include<iostream>
using namespace std;
int main()
{
int a,b[100010],c=0,min=1000000000,i,j;
cin>>a;

    for(i=1;i<=a;i++)
    {
    cin>>b[i];
    if(min>b[i])min=b[i];
    }
    
        for(j=1;j<=a;j++)
        {
        if(b[j]%min==0)c++;
        }
        
            if(c==a)cout<<min;
            else cout<<-1;
return 0;
}
