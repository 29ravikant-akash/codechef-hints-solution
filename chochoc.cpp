#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
  int T;
  cin>>T;
  
    for(int i=0;i<T;i++)
  { 
      
      int N,M,X,Y;
    cin>>N>>M>>X>>Y;
    int count=N*M;
    int a=count/2;
    //////////////////////////////////////////////
    if(X==Y)
    {
        if(count==1)
        cout<<X<<endl;
        else if(count%2==0)
        cout<<a*X<<endl;
        else if(count%2!=0)
        cout<<(a+1)*X<<endl;
    }
    //////////////////////////////////////////
    else if(X<Y)
    {
        
	if((2*X)<=Y)
 	cout<<X*M*N<<"\n";
	else if((2*X)>Y)
	{ if(M==1 && N==1)
	  cout<<X<<"\n";
	  
	  else if(count%2==0) 
	  cout<<((M*N)/2)*Y<<"\n";
	  
	  else if(count!=0)
	  cout<<((M*N)/2)*Y+X<<"\n";
	}

    }
    ///////////////////////////////////////////
	else if(X>Y)
	{
        if(count==1)
        cout<<X<<endl;
        else if(count%2==0)
        cout<<a*Y<<endl;
        else if(count%2!=0)
        cout<<(a+1)*Y<<endl;	 
	    
	}
	
    ///////////////////////////////////////////////
  }

	return 0;
}
