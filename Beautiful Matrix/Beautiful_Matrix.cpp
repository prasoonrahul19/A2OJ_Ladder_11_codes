#include<bits/stdc++.h>
using namespace std;

int main()
{
  
  int v[5][5];
  for(int i=0;i<5;i++)
  {
      for(int j=0;j<5;j++)
      {
          cin>>v[i][j];
      }
      
  }
  int c1=0,c2=0,ans=0;
  
   for(int i=0;i<5;i++)
  {
      for(int j=0;j<5;j++)
      {
          if(v[i][j]==1)
          {
              c1=i;
              c2=j;
          }
          else
          {
              continue;
          }
        }
    }
    ans=abs(2-c1)+abs(2-c2);
    std::cout << ans << std::endl;
}
 