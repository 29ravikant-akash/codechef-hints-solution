#include<iostream>
using namespace std;

main()
{ int array[8]={1,3,8,2,9,2,5,6},temp,n=8;

  for(int i=0;i<2;i++)
  { for(int j=0;j<n-1;j++)
    { if(array[j]>array[j+1])
      { temp=array[j];
        array[j]=array[j+1];
        array[j+1]=temp;
	  }
	}
  }

cout<<"second largest element is : "<<array[6];

}
