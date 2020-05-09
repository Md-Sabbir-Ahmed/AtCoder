#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int K,A,B,x=0;

    cin>>K;
    cin>>A>>B;
    for(int i=A;i<=B;i++)
    {
        if(i%K==0){
          x++;
        }
    }

       if(x!=0){
        cout<<"OK"<<"\n";
        }
        else{
            cout<<"NG"<<"\n";
        }

    return 0;
}

