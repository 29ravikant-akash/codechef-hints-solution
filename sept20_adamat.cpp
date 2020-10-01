#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
	int n;
	cin>>n;
	int mat[n][n];
	int count=0;
	for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    cin>>mat[i][j];
    
    for(int k=n-1;k>=1;k--)
    {
    	if((mat[k][k-1]+1)!=mat[k][k])
    	{
    		count++;
    		for(int i=0;i<k;i++)
    		for(int j=i+1;j<k;j++)
    		swap(mat[i][j],mat[j][i]);
		}
	}
	
	cout<<count<<endl;
}





 return 0;
}

