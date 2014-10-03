#include <algorithm>
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

/*  
  Solution:
  	First just saved the string into the matriz in the 'encode' order, is the same as say that the even rows 
  	will be reversed. Then seeing the way that the matrix of characters it's formed and knowing that the 
  	number of rows is s.size()/n print it by columns.
*/

int main()
{
	int n;
	while(scanf("%d",&n) && n!=0)
    {
		vector< vector<char> > v;
		string s;
		cin>>s;
		int rows= s.size()/n;
		bool direction = true;
		for (int i = 0, k=0; i < rows; ++i, direction = !direction)
		{
			vector<char> r;
			for (int j = 0; j < n; ++j,++k)
				r.push_back(s[k]);
			if(direction)
				reverse(r.begin(),r.end());
			 v.push_back(r);
		}
		for (int i = n-1; i >=0 ; --i)
		    for (int j = 0; j < rows; ++j)
				printf("%c",v[j][i]);
					
		printf("\n");
	}	
    return 0;
}
