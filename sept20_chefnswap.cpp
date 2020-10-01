#include<bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define ll long long 

int main()
{ 
 int tt;
 cin>>tt;
 while(tt--)
 {
 	ll n;
 	cin>>n;
 	
 	if(n==1)
 	cout<<0<<"\n";
 	else if(n==2)
 	cout<<0<<"\n";
 	else if(n==3)
 	cout<<2<<"\n";
 	
 	if(n>=4)
 	{
    ll count=0;
 	ll m;
 	ll s1[n-1];
	ll s2[n-1];
 	ll total=(n*(n+1))/2;
 	
    if((total%2)!=0)
	cout<<0<<"\n";
	else
	{ // cout<<"hi i m running  ";
	   	for(ll i=1;i<=n-1;i++)
 	{
 	  s1[i-1]=(i*(i+1))/2;
	  s2[i-1]=total-s1[i-1];	
	  if(s1[i-1]==s2[i-1])
	  count++;
	}
 	
// 	for(int i=0;i<n-1;i++)
// 	cout<<s1[i]<<" ";
// 	cout<<endl;
// 	for(int i=0;i<n-1;i++)
// 	cout<<s2[i]<<" ";
// 	cout<<endl; 	
 	
 	
 	
 	for(ll i=1;i<=(n-1);i++)
 	{
 	  for(ll j=i+1,k=1;k<=(n-i)&& j<=n;k++,j++)
	   {
	   	 m=k;
	   	 for(ll x=1;x<=i;x++)
	   	 {
	   	   if((s1[m-1]+i)==(s2[m-1]-i))
	   	   {
			count++;
	   	    cout<<s1[m-1]+i<<" "<<s2[m-1]-i<<" "<<j<<" "<<k<<endl;
	       }
	   	    
	   	    m++;
			   
		   //cout<<s1[m-1]+i<<" "<<s2[m-1]-i<<endl;
		 }
       }
	}
 	
 	cout<<count<<"\n";
 		
		   
	}   	
	
	
	}

 }

  




 return 0;
}

