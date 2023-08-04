#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int v[n][3];
  int sum1=0,sum2=0,sum3=0;
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<3;j++)
      {
          cin>>v[i][j];
      }
      sum1+=v[i][0];
      sum2+=v[i][1];
      sum3+=v[i][2];
  }
  if(sum1==0 && sum2==0 && sum3==0)
  {
      cout<<"YES"<<endl;
  }
  else
  {
      cout<<"NO"<<endl;
  }





}
