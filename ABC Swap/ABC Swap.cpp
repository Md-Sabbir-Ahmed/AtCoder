#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int A,B,C,temp,temp2;
    cin>>A>>B>>C;
    temp=A;
    A=B;
    B=temp;
    temp2=A;
    A=C;
    C=temp2;
    cout<<A<<" "<<B<<" "<<C<<" "<<"\n";


    return 0;
}

