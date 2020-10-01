#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
  int T;
  cin>>T;
  
    for(int i=0;i<T;i++)
  { int N,M,X,Y;
    cin>>N>>M>>X>>Y;
	
 	if(X==Y)
 	{ 
 	  if(M==1 && N==1)
	  cout<<X<<"\n";
	  
	  else if(N%2==0 || M%2==0) 
	  cout<<((M*N)/2)*X<<"\n";
	  
	  else if(N%2!=0 && M%2!=0)
	  cout<<(((M*N)/2)+1)*X<<"\n";
	}
	else if(X<Y)
	{ if(M==1 && N==1)
	  cout<<X<<"\n";
	  
	  else if(N%2==0 || M%2==0) 
	  cout<<((M*N)/2)*Y<<"\n";
	  
	  else if(N%2!=0 && M%2!=0)
	  cout<<((M*N)/2)*Y+X<<"\n";
	}
	else if(X>Y)
	{ if(M==1 && N==1)
	  cout<<X<<"\n";
	  
	  else if(N%2==0 || M%2==0) 
	  cout<<((M*N)/2)*Y<<"\n";
	  
	  else if(N%2!=0 && M%2!=0)
	  cout<<(((M*N)/2)+1)*Y<<"\n";
	}
	
  }

	return 0;
}

