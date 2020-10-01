#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int linchess()
{     int n,k;
      cin>>n>>k;
      int arr[n];
      int hash[n]={0};
      for(int j=0;j<n;j++)
      {  hash[j]=-1;
          cin>>arr[j];
      }              
      sort(arr,arr+n);                
      
      for(int j=0;j<n && arr[j]<k;j++)
      {
        int temp=arr[j];
        int factor=2;
        while(temp<=k)
        {
            if(temp==k)
            {
                hash[arr[j]]=factor;
            }
            
            temp=arr[j]*factor;
            factor++;
        }
      }
        
        int min=arr[0];
        int index=-1;
        for(int j=1;j<n;j++)
        { if(hash[j]<min && hash[j]!=-1)
          { min=hash[j];
            index=j;  
          }
        }
         
        return index;
}


int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	cout<<linchess()<<endl;
	
	return 0;
}

