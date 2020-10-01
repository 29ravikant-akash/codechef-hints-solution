// CPP program to illustrate substr() 
#include <string.h> 
#include <iostream> 
using namespace std; 
  
int main() 
{   

//    -----------------------------------------------------------------------------------------
//    How to get sub string in string? 
//    -----------------------------------------------------------------------------------------
   
    // Take any string 
    string s1 = "Geeks"; 
  
    // Copy three characters of s1 (starting  
    // from position 1) 
    string r = s1.substr(0, 2); 
  
    // prints the result 
    cout << "String is: " << r;
	 
//    -----------------------------------------------------------------------------------------
//    How to get sub-string after a character?
//    -----------------------------------------------------------------------------------------
 
    cout<<endl;
    // Take any string 
    string s = "dog:cat"; 
  
    // Find position of ':' using find() 
    int pos = s.find(":"); 
  
    // Copy substring after pos 
    string sub = s.substr(pos + 1); 
  
    // prints the result 
    cout << "String is: " << sub; 
  
  
    return 0; 
}
