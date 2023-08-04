#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s;
	cin>>s;
	std::vector<int>s1 ;
	for(int i=0;i<s.size();i++)
	{
	    if(s[i]=='.')
	    {
	        s1.push_back(0);
	    }
	   
	    else if(s[i]=='-')
	    {
	        if(s[i+1]=='.')
	        {
	            s1.push_back(1);
	        }
	         else if(s[i+1]=='-')
	         { 
	            s1.push_back(2);
	         }
	        i++;
	    }
	    else
	    {
	        continue;
	    }
	}
	for(int i=0;i<s1.size();i++)
	{
	    cout<<s1[i];
	}cout<<endl;
	return 0;
}
