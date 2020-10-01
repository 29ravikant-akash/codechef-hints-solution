#include<bits/stdc++.h>
using namespace std;

main()
{ int T,N,K;
  cout<<"enter T : ";
  cin>>T;
  
  for(int i=0;i<T;i++)
  { cout<<"enter N K : ";
    cin>>N>>K;
	
	int arr[N];
	int hash[N]={0};
    
    cout<<"enter data in array : ";
	for(int j=0;j<N;j++)
    cin>>arr[j];
    
    for(int j=0;j<N;j++)
     if(arr[j]%K==0)
      hash[j]++;
 
    for(int j=0;j<N;j++)
    cout<<hash[j];
    cout<<endl;
	
  }

}

