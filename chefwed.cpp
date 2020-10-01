#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n>>k;
	    int guest[n],hash[101]={0};
	    int sum=0;
	    
	    for(int j=0;j<n;j++)
	    {
	        cin>>guest[j];
	        hash[guest[j]]++;
	    }
	    
	    int max=*max_element(hash,hash+101);
	    //cout<<"max = "<<max<<" ";
	    for(int j=0;j<101;j++)
	    {
	        if(hash[j]>=2)
	        sum+=hash[j];
	    }
	    
	    //cout<<"sum = "<<sum<<" ";
	    cout<<min(max*k,k+sum)<<endl;
	}
	
	return 0;
}
