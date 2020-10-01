#include <iostream>
#include<sstream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	// your code goes here
	int t,n;
	 
	 
	cin>>t;
	
	for(int i=1;i<=t;i++)
	{  	ostringstream st;
        string s;
	    int sum=0;
	    cin>>n;
	    st<<n;
	    s=st.str();
	    int len=s.length();
	    
	   for(int j=0;j<len;j++)
	    {
	       char x=s[j];
	       int p=x;
	       p=p-48;
	       sum=sum+p;
	    }
	    cout<<sum<<endl;
	} 
	
	return 0;
}
