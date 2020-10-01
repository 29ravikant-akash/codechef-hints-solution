#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

main()
{ vector<int> A;

  A.push_back(11);
  A.push_back(2);
  A.push_back(3);
  A.push_back(4);
  A.push_back(100);
  A.push_back(123);
  A.pop_back();
  A.pop_back();
  //sort(A.begin(),A.end());

  for(int x:A)
  cout<<x<<" ";
  
  
}

