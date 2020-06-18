#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    if(n>=13 || n<=0)
    {
        return 0;
    }
    if(n==12)
    {
        cout<<1<<"\n";
    }
    else{
        cout<<n+1<<"\n";
    }
    return 0;
}


