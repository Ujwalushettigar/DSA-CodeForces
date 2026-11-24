#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    int cnt=0;
    int size=0;
    while(n!=0)
    {
        int rem=n%10;
        if(rem==4 || rem==7)
        {
            cnt++;
        }
        n/=10;
    }
    if(cnt==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    bool l=true;
    while(cnt!=0)
    {
        int d=cnt%10;
        if(d!=4 && d!=7)
        {
            l=false;
            break;
        }
        cnt/=10;
    }
    if(l)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}