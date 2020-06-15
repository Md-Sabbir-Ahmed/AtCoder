#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int S,W;
    cin>>S>>W;
    if(S<=W)
    {
        cout<<"unsafe";
    }
    else{
        cout<<"safe";
    }

    return 0;
}

