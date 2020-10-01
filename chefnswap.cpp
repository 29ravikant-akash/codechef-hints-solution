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
 	
    if(n==0||n==1||n==2)
	cout<<0<<endl;
	else if(n==3)
	cout<<2<<endl;
	else
	{
		ll total=(n*(n+1))/2;
        if(total%2!=0)
        cout<<0<<endl;
        else
        {
       	ll half=total/2;
		ll count=(half/n)+1;
        cout<<count<<endl;
		}
	}

 }

 return 0;
}

