#include<iostream>
using namespace std;
int main()
  {
  int T,n,i,hor,ver,first,second,a,b,count;
  char city[2][100000];
  cin>>T;
  while(T--)
    {
    cin>>n;
    cin>>city[0];
    cin>>city[1];
    first=0;
    second=0;
    count=0;
//-----------exception--------------------
    for(i=0;i<n;i++)
      {
      if(city[0][i]=='*')
        {
        first=1;
        break;
        }
      }
    for(i=0;i<n;i++)
      {
      if(city[1][i]=='*')
        {
        second=1;
        break;
        }
      }
    if(first==0)
      {
      if(second==0)
        {
        cout<<"0\n";
        continue;
        }
      else
        {
        for(i=0;i<n;i++)
          {
          if(city[1][i]=='*')
            ++count;
          }
        cout<<count-1<<"\n";
        continue;
        }
      }
    if(second==0)
      {
      for(i=0;i<n;i++)
        {
        if(city[0][i]=='*')
          ++count;
        }
      cout<<count-1<<"\n";
      continue;
      }
//------------------------------------
    a=0;
    b=0;
    for(i=0;i<n;i++)
      {
      if(city[0][i]=='*')
        {
        ++a;
        }
      if(city[1][i]=='*')
        {
        ++b;
        }
      if(a==2 || b==2)
        {
        ++count;
        a=0;
        b=0;
        --i;
        }
      }
    cout<<(count+1)<<"\n";
    }
  }