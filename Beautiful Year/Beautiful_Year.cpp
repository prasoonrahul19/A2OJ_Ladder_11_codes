#include <iostream>
using namespace std;

int main() {
	// your code goes here
	  int y;
	  cin>>y;
	  int a=0,b=0,c=0,d=0,ans=0;
	  
	while(true)
	{
	    y++;
	    ans=y;
	    a=y%10;
	    y=y/10;
	    b=y%10;
	    y=y/10;
	    c=y%10;
	    y=y/10;
	    d=y%10;
	   
	    if(a!=b && b!=c && c!=d && a!=c && a!=d && b!=d )
	    {
	        cout<<ans<<endl;
	        break;
	    }
	    
	        y=ans;   
	    
	    
	    
	}
	return 0;
}
