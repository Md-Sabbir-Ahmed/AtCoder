#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string str;
    cin>>str;
    if(str=="Four")
    {
    	cout<<"3\n";
    }
    else
    {
    	int k= stoi(str);
    	cout<<k-1<<"\n";
    }
    return 0;
}

