#include<bits/stdc++.h>
using namespace std;

bool check(int x)
{
    while(x>0)
    {
        int rem=x%10;
        if(rem!=4 && rem!=7)
        {
            return false;
        }
        x/=10;
    }
    return  true;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(check(i) && n%i==0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}