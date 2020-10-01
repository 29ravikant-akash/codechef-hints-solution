#include <iostream>
using namespace std;
#define ll long long
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0) 
#define fileio freopen("http://in.in", "r", stdin),freopen("out.out", "w", stdout); 

// ll count_pc(ll t,ll pc)
// {
//       ll c1=0,m1=1;
	 
// 	  while((9*m1)<=10000000)
// 	  {
// 	      if(pc<=(9*m1))
// 	        ++c1 ;
	      
// 	      if(c1!=0)
// 	      return m1;
	      
// 	      m1++;
// 	  }
// }


// ll count_pr(ll t,ll pr)
// {
//       ll c2=0,m2=1;
	  
// 	  while((9*m2)<=10000000)
// 	  {
// 	      if(pr<=(9*m2))
// 	        ++c2;
	      
// 	      if(c2!=0)
// 	      return m2;
	      
// 	      m2++;
// 	  }
// }

int main() 
{
	// your code goes here
	ll t,pc,pr;
	float c1,c2;
	cin>>t;
	
	for(ll int i=0;i<t;i++)
	{ cin>>pc>>pr;
	  c1=static_cast<float>(pc)/9;
	  c2=static_cast<float>(pr)/9;
	  
	  if(c1==int(c1))
	  c1=int(c1);
	  else
	  c1=int(c1)+1;
	  
	  if(c2==int(c2))
	  c2=int(c2);
	  else
	  c2=int(c2)+1;
	  
	  if(c1<c2)
	  cout<<0<<" "<<c1<<"\n";
	  if(c2<=c1)
	  cout<<1<<" "<<c2<<"\n";
	  
	}



	return 0;
}
