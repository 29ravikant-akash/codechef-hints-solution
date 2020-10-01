#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q,size;
    cout<<"enter n q : ";
    cin>>n>>q;
    vector<vector<int> >stuff;
    for(int i=0;i<n;i++)
    { cout<<"enter size of array : ";
	  cin>>size;
      vector<int> temp;
      int x;
      cout<<"enter data : ";
      for(int j=0;j<size;j++)
      { cin>>x;
        temp.push_back(x);
	  }
      
      stuff.push_back(temp);	    
    }
    
    for(int i=0;i<q;i++)
    { int arrindex,index;
      cout<<"enter array index and index : ";
      cin>>arrindex>>index;
      cout<<stuff[arrindex][index]<<endl;
 	}
    

    return 0;
}
