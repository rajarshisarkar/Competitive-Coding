#include<iostream>
using namespace std;
int n,k,i,cnt=0;char ch;
int main()
{
cin>>n>>k;
    for (i=0;i<n;i++)
    {
    cin>>ch;
    if (ch=='#') cnt++;
    else cnt=0;
        if (cnt>=k) 
        {
        cout<<"NO"<<endl; 
        return 0;
        }
    }
cout<<"YES"<<endl;
}
