#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x;
	double y,rem;
	cin>>x;
	cin>>y;
	if((x%5)!=0 || (x>=y)||(y-(x+0.5))<0 )
	cout<<y;
	else
	{rem=y-x-0.5;
     cout<<rem;
	}
	return 0;
}
