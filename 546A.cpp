#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int sum=0;
    for(int i=1;i<=w;i++)
    {
        sum+=i*k;
    }
    int br=sum-n;
    if(br<=0)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<br<<endl;
    }
    return 0;
}