#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		string s1,s2;
		cin>>s1>>s2;
		ll n=s1.size(),m=s2.size();
		ll al[27];memset(al,0,sizeof(al));
    	ll al1[27];
//-------------------------------------------------------------------------------------------------
		for(int i=0;i<n;i++)
		{
			al[s1[i]-'a']++;
		}
		for(int i=0;i<m;i++)
		{
			al[s2[i]-'a']--;
		}
		for(int i=0;i<26;i++)
		al1[i]=al[i];
		for(int i=0;i<26;i++)
		cout<<al[i]<<" ";
		cout<<endl;
//-------------------------------------------------------------------------------------------------
		string s;
		for(int i=0;i<=(s2[0]-'a');i++)
		{   
			while(al[i]>0)
			{
				s+=(char)(i+97);
				al[i]--;

			}
		}
		s+=s2;
		cout<<" s "<<s<<endl;
		for(int i=0;i<26;i++)
		{
			while(al[i]>0)
			{
				s+=(char)(i+97);
				al[i]--;
			}
		}
		cout<<" s "<<s<<endl;
//-------------------------------------------------------------------------------------------------
		string sf;
		for(int i=0;i<s2[0]-'a';i++)
		{
			//while(al1[i]!=0)
			while(al1[i]>0)
			{
				sf+=(char)(i+97);
				al1[i]--;
			}
		}
		cout<<" sf "<<sf<<endl;
		sf+=s2;
		cout<<" sf "<<sf<<endl;
		for(int i=0;i<26;i++)
		{
			while(al1[i]!=0)
			{
				sf+=(char)(i+97);
				al1[i]--;
			}
		}
		cout<<" sf "<<sf<<endl;
//-------------------------------------------------------------------------------------------------

		cout<<min(s,sf)<<"\n";
//-------------------------------------------------------------------------------------------------
	
	    
	}
}
