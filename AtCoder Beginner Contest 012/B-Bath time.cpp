#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int h,m,s;
    h=n/3600;
    n=n-h*3600;
    m=n/60;
    s=n-m*60;
    cout << setfill('0') << setw(2)<<h<<":";
    cout << setfill('0') << setw(2)<<m<<":";
    cout << setfill('0') << setw(2)<<s<<"\n";

    return 0;
}


