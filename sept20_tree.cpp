#include <bits/stdc++.h> 
using namespace std; 
#define ll long long

int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
		ll n;
		cin>>n;
		set<ll> st;
		ll temp;
		ll count=0;
		for(ll i=0;i<n;i++)
		{
			cin>>temp;
			st.insert(temp);
		}
		
	    cout<<st.size();		
	
	}
	
	return 0;
}

//int main() {
//
//    ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	// your code goes here
//	int t;
//	cin>>t;
//	while(t--)
//	{ ll n;
//	  cin>>n;
//	  ll ped[n];
//	  ll temp=0;
//	  ll count=0;
//	  
//	  for(ll i=0;i<n;i++)
//	  cin>>ped[i];
//	  
//   	  sort(ped,ped+n,greater<int>());
//	  for(ll i=0;i<n;i++)
//	  {
//	      if(i==0)
//	      count++;
//	      else
//	      { 
//	          if(ped[i]!=temp)
//	          count++;
//	      }
//	      
//	      temp=ped[i];
//	  }
//	  
//	  cout<<count<<endl; 
//	    
//	
//	    
//	}
//	
//	
//	return 0;
//}

