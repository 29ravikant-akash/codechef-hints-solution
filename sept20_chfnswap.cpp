#include<iostream>
#include<math.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define ll long long 
#define l long                
int main()
{ 
 int tt;
 cin>>tt;
 while(tt--)
 {
 	ll n;
 	cin>>n;
    if(n==0||n==1||n==2)
	cout<<0<<"\n";
	else
	{
		ll total=(n*(n+1))/2;
        if(total%2!=0)
        cout<<0<<"\n";
        else
        {
        long double N=((sqrt(1+(4*total)))-1)/2;
        ll count=n-l(N);
		if(N==l(N))
		count+=(((n-count)*(n-count-1))/2)+((count*(count-1))/2);     	
		cout<<count<<"\n";
		}
	}
 }
 
 return 0;
}

