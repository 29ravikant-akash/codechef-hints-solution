#include<bits/stdc++.h>
using namespace std;

void gand_mar_lo(string str,int l,int r)
{ 
  if(l==r)
  {
    cout<<"->"<<str<<"<-"<<endl;
    return ;		
  }
  else
  { 
    for(int i=l;i<r;i++)
    { for(int j=i;j<r;j++)
      cout<<str[j];
      cout<<" -> ";
      swap(str[i],str[l]);
      sort(str.begin()+l+1,str.end());
      gand_mar_lo(str,l+1,r);
	  swap(str[i],str[l]); 
	}
  }
    
}

main()
{ string str;
  cin>>str;
  cout<<endl<<"permutations : "<<endl;
  sort(str.begin(),str.end());
  int l=0;
  int r=str.length();
  gand_mar_lo(str,l,r);
  

}

