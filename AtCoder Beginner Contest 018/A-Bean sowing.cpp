#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  cout<<(a<b)+(a<c)+1<<"\n";
  cout<<(b<c)+(b<a)+1<<"\n";
  cout<<(c<a)+(c<b)+1<<"\n";;
    return 0;
}


