#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m;
    cin>>m;
    float k= m/1000.0;
    if(k<0.1)
    {
        cout<<"00"<<"\n";
    }
    else if(0.1<=k && k<=5)
    {
        if(k>=1)
        {
            float d=k*10;
            cout<<d<<"\n";
        }
        else{
            float r=k*10;
            cout<<"0"<<r<<"\n";
        }
    }
    else if(6<=k && k<=30)
    {
        cout<<(int)k+50<<"\n";
    }
    else if(35<=k && k<=70)
    {
        int q=(int)((k-30)/5)+80;
        cout<<q<<"\n";
    }
    else if(k>70)
    {
        cout<<89<<"\n";
    }
    return 0;
}


