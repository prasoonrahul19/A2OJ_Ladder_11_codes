#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s1;
	string s2;
	vector<int>v;
	cin>>s1>>s2;
	for(int i=0;i<s1.size();i++)
	{
	    if(s1[i]!=s2[i])
	    {
	        v.push_back(1);
	        
	    }
	    else
	    {
	        v.push_back(0);
	    }
	}
	
	for(auto it:v)
	{
	    cout<<it;
	}
	cout<<endl;
	return 0;
}
