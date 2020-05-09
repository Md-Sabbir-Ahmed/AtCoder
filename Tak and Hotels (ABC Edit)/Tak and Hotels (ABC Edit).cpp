#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N,K,X,Y;
    cin>>N>>K>>X>>Y;

    int sum;

    if(K>=N)
    {
        sum = X*N;
    }

    else
    {
        sum=X*K+Y*(N-K);
    }

    cout << sum << endl;
}



