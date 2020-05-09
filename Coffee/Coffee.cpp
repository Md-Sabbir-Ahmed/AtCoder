#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string S;
    cin>>S;
    if((S[2]==S[3])&& (S[4]==S[5]))
    {
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
    }

    return 0;
}

