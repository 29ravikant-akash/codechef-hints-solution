#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main()
{
  int N;
  cin>>N;
  int arr[N];
  int table[N]={0};
  int count=0;
  int i,index=0;
  for(i=0;i<N;i++)
  cin>>arr[i];
  
  i=0;
  while(index!=N)
  { auto it=find(table,table+N,arr[index]);
	if(it!=table+N) // element found ie that element is repeating itself, table number increases 
    {
      	i=0;
      	count++;
       	for(int j=0;j<N;j++)
      	table[j]=0;
	}
	else // element not found, add to table
	{
      table[i]=arr[index];
      index++;
      i++;
	}	
	
  }

cout<<count+1;


 return 0;
}

