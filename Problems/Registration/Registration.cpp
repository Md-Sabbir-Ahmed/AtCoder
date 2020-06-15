#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string S,T;
    int k,x=0;
    cin>>S;
    cin>>T;
    k=S.size();
    for(int i=0;i<k;i++)
    {
        if(S[i]==T[i])
        {
            x++;
        }

    }
    if(x==k)
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}



