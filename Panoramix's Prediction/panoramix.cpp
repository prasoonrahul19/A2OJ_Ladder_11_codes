#include <iostream>
using namespace std;

bool is_prime(int a)
{
    if(a==0||a==1)
    {
        return false;
        
    }
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        {
            return false;
        }
        
    }
    return true;
    
}

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	int c=0;
	for(int i=n+1;i<2*n;i++)
	{
	    if(is_prime(i))
	    {
	        c=i;
	        break;
	        
	    }
	    
	}
	if(c==m)
	{
	    std::cout << "YES" << std::endl;
	}
	else
	{
	    std::cout << "NO" << std::endl;
	}
	
	return 0;
}
