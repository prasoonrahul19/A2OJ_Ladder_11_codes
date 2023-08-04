#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n,t;
	std::cin >> n >> t;
	string s;
	cin >> s;
 while(t--)
 {
	for(int i=0;i<n-1;i++)
	{
	    if(s[i]=='B' && s[i+1]=='G')
	    {
	        s[i]='G';
	        s[i+1]='B';
	        i++;
	        
	    }
	    else
	    {
	        continue;
	    }
	}
 }

	std::cout << s << std::endl;

	    
	
	return 0;
}

