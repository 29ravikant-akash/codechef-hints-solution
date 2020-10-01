#include<bits/stdc++.h>
using namespace std;

void printarray(int* arr,int n)
{
	cout<<"{";
	for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<"}";
	cout<<endl;    
}

void subsq(int* arr,int n,int i ,int* ss,int ssi)
{
	if(i>=n)
	{ printarray(ss,ssi);
	  return ;
	}
	
	subsq(arr,n,i+1,ss,ssi);
	ss[ssi]=arr[i];
	subsq(arr,n,i+1,ss,ssi+1);
}



int main()
{
int n;
cin>>n;
int arr[n];

for(int i=0l;i<n;i++)
cin>>arr[i];
int k=pow(2,n);
int ss[k];
subsq(arr,n,0,ss,0);



 return 0;
}

