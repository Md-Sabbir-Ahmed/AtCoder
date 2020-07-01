#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a ,b;
    double c,sum=0;
    for(int i=0;i<3;i++)
    {
        cin>>a>>b;
        c=b/10.0;
        sum=sum+a*c;
        a=0;
        b=0;
    }
    cout<<sum<<"\n";
    return 0;
}


