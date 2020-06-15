#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    float sum=0,k;
    k=(1.0/6);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(10000*i);
    }
    cout<<sum/n<<"\n";
    return 0;
}


