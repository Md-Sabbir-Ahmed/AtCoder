#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int c=a%b;
    if(c==0)
    {
        cout<<"0\n";
    }
    else{
        if(a>b){
        int d=a/b;
        int e=a-(b*d);
        int f=b-e;
        cout<<f<<"\n";
        }
        else{
            cout<<b-a<<"\n";
        }
    }
    return 0;
}


