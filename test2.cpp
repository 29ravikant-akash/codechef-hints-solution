#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};	
    int temp[5][5]={0};
    int tempa[5][5]={0};
for(int i=0;i<5;i++)
   {
   	for(int j=0;j<5;j++)
   cout<<temp[i][j]<<" ";
   cout<<endl;
   }
   

for(int i=0;i<5;i++)
        {
        	for(int j=0;j<=i;j++)
        	temp[i][j]=arr[j];
             
			cout<<endl; 	
		}
		
		for(int i=0;i<5;i++)
   {
   	for(int j=0;j<5;j++)
   cout<<temp[i][j]<<" ";
   cout<<endl;
   }



	for(int i=0;i<4;i++)
        {
        	for(int j=i+1,k=0;j<5;j++,k++)
        	tempa[i][k]=arr[j];
             
			cout<<endl; 	
		}


   for(int i=0;i<5;i++)
   {
   	for(int j=0;j<5;j++)
   cout<<tempa[i][j]<<" ";
   cout<<endl;
   }

 return 0;
}

