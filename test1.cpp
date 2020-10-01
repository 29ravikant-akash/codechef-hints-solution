#include<bits/stdc++.h>
using namespace std;

main()
{ string s="aaabbbccc";
  char p='c';
  int index,i=0;
  	while(p>=s[i] && i<s.length())
	    {  
	       index=i;
	       i++;
	    }
	    cout<<index<<endl;

i=0;
while(p>s[i] && i<s.length())
	    {  
	       index=i;
	       i++;
	    }
	    cout<<index<<endl;

}

