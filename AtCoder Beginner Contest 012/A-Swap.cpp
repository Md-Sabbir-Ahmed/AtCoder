#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    if(a==b)
    {
        cout<<a<<" "<<b<<"\n";
    }
    if(a!=b)
    {
        int c=a;
        a=b;
        b=c;
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}


